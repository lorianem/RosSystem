# Script to run with UR5e and realsense camera attached
# Finds positions of plant-lowering loops from stereo depth images, communicates via TCP/IP
# 
# Author: Ales Rucigaj, ales.rucigaj@fe.uni-lj.si

# Libraries
import pyrealsense2 as rs
import numpy as np
import cv2 as cv
from scipy.ndimage.morphology import generate_binary_structure, binary_erosion
from scipy.ndimage.filters import maximum_filter
import time
import socket
import os
import matplotlib.pyplot as plt
import open3d as o3d
import sys
import re
import copy

# CONSTANTS
#TCP_HOST_IP = "192.168.65.30" # IP adress of PC
#TCP_HOST_PORT = 53002 # Port to listen on (non-privileged ports are > 1023)n

N_OF_BURST_FRAMES = 11 # Integer, MUST BE ODD
MAX_DEPTH = 0.5 # Max depth of ptCloud in meters
MAX_WIDTH = 0.1 # Max width of ptCloud in meters (only during RS_burst_find_closest)
N_CLOSEST_POINTS = 51 # How many closest points to pick from, MUST BE ODD (RS_burst_find_closest implementation 2)
N_NEIGHBOR_POINTS = 25 # How many points required in neighborhood (RS_burst_find_closest implementation 3 and 5)
LATITUDE_BUFFER = 0.010 # Leniency of width-histogram cutoff
NEIGHBORHOOD_BOX_SIZE = 0.010 # Length of cube edge (RS_burst_find_closest implementation 3)

FROM_RECORDING = False # Streams frames from recording if True
RECORD_VIDEO = False # Turns on recording, incompatible with FROM_RECORDING
RECORDING_PATH = "./URSense_data/"
RECORDING_FILENAME = "rec_0020.bag"

### FUNCTIONS ############################################################################################################
def start_pipeline(pipeline, config, fromRecording):
    # Start streaming from camera to pipeline
    try:
        tic = time.time()

        pipe_profile = pipeline.start(config)
        # --- Configure device preset ------------------------------------------------------------------------------------
        if not fromRecording:
            depth_sensor = pipe_profile.get_device().first_depth_sensor()
            depth_sensor.set_option(rs.option.visual_preset, 5)
            print("INFO: Setting device preset")
        # ----------------------------------------------------------------------------------------------------------------

        # Throw away first 10 frames
        tmp = pipeline.wait_for_frames()
        while tmp.frame_number <= 10:
            tmp = pipeline.wait_for_frames()
        print('INFO: Streaming...')

        toc = time.time() - tic
        print("INFO: Starting pipeline lasted: %.3f" % (toc) + " seconds")
        return pipeline

    except Exception as e:
        print('ERROR: Could not start pipeline')
        print(e)
        sys.exit()

def grab_ptCloud_from_frame(pipeline):
    tic = time.time()

    pc = rs.pointcloud()
    frame = pipeline.wait_for_frames()
    # print(frame.frame_number)

    # Isolate depth frame
    depth_frame = frame.get_depth_frame()
    # Get ptCloud from depth
    points_object = pc.calculate(depth_frame)
    # Convert to numpy array
    v = points_object.get_vertices()
    ptCloud = np.asanyarray(v).view(np.float32).reshape(-1, 3)  # xyz

    # Remove zero elements
    con1 = ptCloud[:,0] != 0
    con2 = ptCloud[:,1] != 0
    con3 = ptCloud[:,2] != 0
    ptCloud = ptCloud[con1 & con2 & con3]

    # Remove points in distance
    ptCloud = ptCloud[ptCloud[:,2] < MAX_DEPTH]

    toc = time.time() - tic
    print("INFO: Grabbing frame lasted: %.3f" % (toc) + " seconds")

    return ptCloud

def detect_peaks(image):
    """
    Takes an image and detect the peaks usingthe local maximum filter.
    Returns a boolean mask of the peaks (i.e. 1 when
    the pixel's value is the neighborhood maximum, 0 otherwise)
    """

    # define an 8-connected neighborhood
    neighborhood = generate_binary_structure(2,2)

    #apply the local maximum filter; all pixel of maximal value 
    #in their neighborhood are set to 1
    local_max = maximum_filter(image, footprint=neighborhood)==image
    #local_max is a mask that contains the peaks we are 
    #looking for, but also the background.
    #In order to isolate the peaks we must remove the background from the mask.

    #we create the mask of the background
    background = (image==0)

    #a little technicality: we must erode the background in order to 
    #successfully subtract it form local_max, otherwise a line will 
    #appear along the background border (artifact of the local maximum filter)
    eroded_background = binary_erosion(background, structure=neighborhood, border_value=1)

    #we obtain the final mask, containing only peaks, 
    #by removing the background from the local_max mask (xor operation)
    detected_peaks = local_max ^ eroded_background

    return detected_peaks

def get_2D_hist(x,y):
    # Generate 2D histogram. NOTE: xyEdges is 1 element longer than hist
    x_min = np.min(x)
    x_max = np.max(x)
    
    y_min = np.min(y)
    y_max = np.max(y)
    
    x_bins = np.linspace(x_min, x_max, 25)
    y_bins = np.linspace(y_min, y_max, 2) # Only 1 hist bin, as multiple objects at the same latitude are not accounted for

    # Get histogram array
    hist, xEdges, yEdges = np.histogram2d(x, y, bins=[x_bins, y_bins])
    return hist, xEdges, yEdges

def zyxEul_to_rotMat(eulPose):
    # Returns transformation matrix assuming input is (x,y,z,xEul,yEul,zEul) for zyxEul=R(z)R(y)R(x)
    xEul = eulPose[3]
    yEul = eulPose[4]
    zEul = eulPose[5]

    T = [[np.cos(zEul)*np.cos(yEul),np.cos(zEul)*np.sin(yEul)*np.sin(xEul)-np.cos(xEul)*np.sin(zEul),np.sin(zEul)*np.sin(xEul)+np.cos(zEul)*np.cos(xEul)*np.sin(yEul),eulPose[0]],
         [np.cos(yEul)*np.sin(zEul),np.cos(zEul)*np.cos(xEul)+np.sin(zEul)*np.sin(yEul)*np.sin(xEul),np.cos(xEul)*np.sin(zEul)*np.sin(yEul)-np.cos(zEul)*np.sin(xEul),eulPose[1]],
         [-np.sin(yEul),np.cos(yEul)*np.sin(xEul),np.cos(yEul)*np.cos(xEul),eulPose[2]],
         [0,0,0,1]]

    return np.asanyarray(T)

def pointCloud_changeFrame(pointCloud, Trans_BK):
    # Transforms points in pointCloud from camera frame to horizontal camera frame, using base z as reference
    newPointCloud = np.zeros(np.shape(pointCloud))

    # Get alpha between -z(base) and y(camera)
    alpha = -np.arccos( -(Trans_BK[2,1]) )

    # Get angular functions
    ca = np.cos(alpha)
    sa = np.sin(alpha)

    # Transform                  
    newPointCloud[:,0] = pointCloud[:,0]
    newPointCloud[:,1] = pointCloud[:,1]*ca - pointCloud[:,2]*sa
    newPointCloud[:,2] = pointCloud[:,1]*sa + pointCloud[:,2]*ca

    return newPointCloud

def pointCloud_revertFrame(pointCloud, Trans_BK):
    # Transforms points in pointCloud back from horizontal camera frame to camera frame, using base z as reference
    newPointCloud = np.zeros(np.shape(pointCloud))

    # Get minus alpha between -z(base) and y(camera)
    alpha = np.arccos( -(Trans_BK[2,1]) )

    # Get angular functions
    ca = np.cos(alpha)
    sa = np.sin(alpha)

    # Transform
    newPointCloud[:,0] = pointCloud[:,0]
    newPointCloud[:,1] = pointCloud[:,1]*ca - pointCloud[:,2]*sa
    newPointCloud[:,2] = pointCloud[:,1]*sa + pointCloud[:,2]*ca

    return newPointCloud

def merge_peaksOfFrames(peaks_of_frames, peaks):
    # Adds 2d array to 3d array so that the smaller 1st dimention (=a[THIS,:,:]) is kept in case of inequality. Decides
    # which to shave off based on "x" (=a[:,1,:]) proximity.
    # Only works with a mismatch of 1
    # WARNING: Does not work if array values are substantially different

    try:
        # --- FILTER EDGE CASES ---
        # If n_of_peaks equal...
        if  np.shape(peaks)[0] == np.shape(peaks_of_frames)[0]:
            # Do nothing
            pass
        # If peaks_of_frames empty
        elif not peaks_of_frames.any():
            # Set peaks as peaks_of_frames
            peaksShape = np.shape(peaks) + (1,)
            tmp = np.zeros(peaksShape)
            tmp[:,:,0] = peaks
            return tmp
        # If found more peaks than established
        elif np.shape(peaks)[0] > np.shape(peaks_of_frames)[0]:
            # Compare x values to find if extra on left or right
            dLeft = abs(peaks[0,0] - peaks_of_frames[0,0,-1])
            dRight = abs(peaks[-1,0] - peaks_of_frames[-1,0,-1])
            # If left is further
            if dLeft > dRight:
                # Remove 1st (=left) element from new peaks
                peaks = peaks[1:len(peaks[:,0]),:]
            else:
                # Remove last (=right) element from new peaks
                peaks = peaks[0:-1,:]
        # If found fewer peaks than established
        else:
            # Compare x values to find if extra on left or right
            dLeft = abs(peaks[0,0] - peaks_of_frames[0,0,-1])
            dRight = abs(peaks[-1,0] - peaks_of_frames[-1,0,-1])
            # If left is further
            if dLeft > dRight:
                # Remove 1st (=left) element from all old peaks
                peaks_of_frames = peaks_of_frames[1:len(peaks_of_frames[:,0,0]),:,:]
            else:
                # Remove last (=right) element from all old peaks
                peaks_of_frames = peaks_of_frames[0:-1,:,:]
        # ---------------------

        # --- ADD NEW FRAME ---
        peaksShape = np.shape(peaks) + (1,)
        tmp = np.zeros(peaksShape)
        tmp[:,:,0] = peaks
        peaks_of_frames = np.dstack((peaks_of_frames,tmp))
        # ---------------------

    except Exception as e:
        print("ERROR: Could not merge arrays")
        print(e)
    
    return peaks_of_frames
def is_grouped(point_cloud, radius):
    """
    Determines if most points in a point cloud are grouped together within a specified radius.

    Args:
    - point_cloud: numpy array of shape (n, 3) representing a point cloud, where n is the number of points
    - radius: float representing the radius within which points are considered grouped together

    Returns:
    - bool: True if most points are grouped together, False otherwise
    """

    # Calculate the pairwise distances between all points in the point cloud
    dists = np.sqrt(np.sum((point_cloud[:, np.newaxis, :] - point_cloud) ** 2, axis=2))

    # Count the number of points within the specified radius of each point
    num_within_radius = np.sum(dists < radius, axis=1)
    print('znotraj_radija:',num_within_radius)
    # Determine the percentage of points that are within the specified radius of at least one other point
    percentage_within_radius = np.mean(num_within_radius > 1)

    # Return True if the percentage of points within the specified radius is greater than 50%, False otherwise
    return percentage_within_radius > 0.7


### CLASSDEF ################################################################################################################
class vision:
    def __init__(self):
        self.tilted_camera = False # Flag for non-horizontal camera
        self.T_BK_eul = np.asanyarray([0,0,0,0,0,0]) # Camera to Base frame transform in zyx Euler
        self.peakArray = np.zeros((0,0)) # Array of detected approximate peak locations

    def getNextPeak(self):
        # Returns the right-most peak (last in array) and flags it as served by setting all values to -99.
        # Also returns lastPeakFlag: 1 if last else 0

        # Check if peakArray has elements
        if not self.peakArray.any():
            print("WARNING: Peak array is empty")
            return 0.0,0.0,0.0,1

        # Check if peak has already been served
        self.peakArray = self.peakArray[self.peakArray[:,0] != -99.0]

        # Check again if peakArray has elements
        if not self.peakArray.any():
            print("WARNING: Peak array is empty")
            return 0.0,0.0,0.0,1

        # Serve the last peak in array
        x = self.peakArray[-1,0]
        y = self.peakArray[-1,1]
        z = self.peakArray[-1,2]

        # Flag the peak as served
        self.peakArray[-1,0] = -99.0

        # Check if this was the last peak
        if self.peakArray[0,0] == -99.0:
            lastPeakFlag = 1
        else:
            lastPeakFlag = 0

        return x,y,z,lastPeakFlag

    def RS_burst_find_closest(self, pipeline, n_of_frames):
        # Get xyz of peak which is closest to center of image, in camera frame
        
        try:
            #Init array of frame peaks
            tops = np.zeros((n_of_frames,3))
            # Grab n_of_frames frames
            temp_array = np.array([[0,0,0]])
            for frame_idx in range(n_of_frames):
                ptCloud = grab_ptCloud_from_frame(pipeline)

                tic = time.time()

                # Remove points more than 50 mm from origin laterally
                ptCloud = ptCloud[abs(ptCloud[:,0]) < MAX_WIDTH/2]

                # If camera tilted change frame to horizontal
                if self.tilted_camera:
                    T_BK_eul = np.asanyarray(self.T_BK_eul)
                    T_BK_rotMat = zyxEul_to_rotMat(T_BK_eul)
                    ptCloud = pointCloud_changeFrame(ptCloud, T_BK_rotMat)
                temp_array = np.concatenate((temp_array,np.array(ptCloud)),axis=0)
            
            ptCloud = temp_array
            # Find point
            point = np.asanyarray([0.0,0.0,0.0])
            
            # -- IMPLEMENTATION 5 ---------------------------------------------------------------------------------------------------
            # Get histogram along x (lateral)
            x = ptCloud[:,0]
            xBins = np.linspace(-0.14,0.14,641) # Approx FOV width (=0.28 m) across 640 px -> cca 0.5 mm resolution
            hist, xEdges = np.histogram(x, bins=xBins, density=False) #bins='auto'

            # Display
            # plt.title('Histogram')
            # plt.hist(xEdges[:-1], xEdges, weights=hist)
            # plt.show()

            # pcd = o3d.geometry.PointCloud()
            # pcd.points = o3d.utility.Vector3dVector(ptCloud) 
            # o3d.visualization.draw_geometries([pcd])

            # Trim anything outside 30% max density (minus a little bit)
            hist_norm = hist/max(hist)
            hook_idxs = np.where(hist_norm > 0.3)
            hook_idxs = hook_idxs[0]
            xRange = xEdges[hook_idxs[0]:(hook_idxs[-1]+2)]
            con1 = (ptCloud[:,0] > (min(xRange)-LATITUDE_BUFFER)) & (ptCloud[:,0] < (max(xRange)+LATITUDE_BUFFER))
            ptCloud = ptCloud[con1]
            
            # pcd = o3d.geometry.PointCloud()
            # pcd.points = o3d.utility.Vector3dVector(ptCloud) 
            # o3d.visualization.draw_geometries([pcd])
            # Safety measure
            if ptCloud.size < 8000*10:
                print('WARNING: Point cloud too small, bad vision')
                return 0.0, 0.0, 0.0

            # Get histogram along z (depth)
            z = ptCloud[:,2]
            zMax = max(z)
            zMin = min(z)
            zRange = zMax - zMin
            zBinNum = int(zRange/0.003) # 3 mm resolution
            hist, zEdges = np.histogram(z, bins=zBinNum, density=False) # bins=30

            # Display
            # plt.title('Histogram')
            # plt.hist(zEdges[:-1], zEdges, weights=hist)
            # plt.show()
            # print(hist)
            # Pick the 1st point with sufficient neighbour density
            point_idxs = np.where(hist > N_NEIGHBOR_POINTS)
            point_idx = point_idxs[0][0]
            zRange = zEdges[point_idx:point_idx+2]
            print("INFO: Depth bin size: %.1f" % ((max(zRange)-min(zRange))*1000) + " millimeters")
            con1 = (ptCloud[:,2] > min(zRange)) & (ptCloud[:,2] < max(zRange))
            candidates = ptCloud[con1]
            p_x = np.median(candidates[:,0])
            p_y = np.median(candidates[:,1])
            p_z = np.median(candidates[:,2])
            point = [p_x,p_y,p_z]
            point_visualize = np.empty((1,3))
            point_visualize[0,:] = [p_x,p_y,p_z]
            #tops[frame_idx,:] = point
            # ----------------------------------------------------------------------------------------------------------------------
            toc = time.time() - tic
            print("INFO: Picking point computing lasted: %.3f" % (toc) + " seconds")
            #check if candidates close to eachother
            print(candidates)

            #Vizualizacija
            # pcd = o3d.geometry.PointCloud()
            # pcd.points = o3d.utility.Vector3dVector(np.array(ptCloud)) 
            # pcd.paint_uniform_color([1, 0, 0])
            # pcd2 = o3d.geometry.PointCloud()
            # pcd2.points = o3d.utility.Vector3dVector(candidates) 
            # pcd2.paint_uniform_color([0, 0, 1])
            # pcd3 = o3d.geometry.PointCloud()
            # pcd3.points = o3d.utility.Vector3dVector(point_visualize) 
            # pcd3.paint_uniform_color([0, 0, 0])
            # o3d.visualization.draw_geometries([pcd,pcd3,pcd2])

        finally:
            # Get median closest point
            med_x = p_x
            med_y = p_y
            med_z = p_z

            # Adjust point for picking HARDCODED RIGID TRANSFORM
            med_x = med_x - 0.010
            med_y = med_y + 0.025
            med_z = med_z + 0.01

            # Transform back to camera frame
            if self.tilted_camera:
                out = pointCloud_revertFrame(np.asanyarray([[med_x, med_y, med_z]]), T_BK_rotMat)
                med_x = out[0,0]
                med_y = out[0,1]
                med_z = out[0,2]

        
        # Return the point in camera's frame
        return med_x, med_y, med_z

    def RS_burstMulti(self, pipeline, n_of_frames):
        # Equivalent of RS_burst for multiple simultaneus loop manipulations
        
        try:
            #Init array of frame peaks
            peaks_of_frames = np.zeros((0,3,0))
            # Grab n_of_frames frames
            temp_array = np.array([[0,0,0]]) 

            for frame_idx in range(n_of_frames):
                ptCloud = grab_ptCloud_from_frame(pipeline)                
                tic = time.time()
                # If camera tilted change frame to horizontal
                if self.tilted_camera:
                    T_BK_eul = np.asanyarray(self.T_BK_eul)
                    T_BK_rotMat = zyxEul_to_rotMat(T_BK_eul)
                    ptCloud = pointCloud_changeFrame(ptCloud, T_BK_rotMat) 
                
                temp_array = np.concatenate((temp_array,np.array(ptCloud)),axis=0)
                #temp_array = append(temp_array + np.array(ptCloud)

            temp_array = temp_array[1:]
            print('dolzina posameznega:',len(np.array(ptCloud)),'dolzina vseh skupaj:',len(temp_array))
            print(temp_array)
            

            # Make histogram of XZ plane (Z = depth, Y = height)
            x = temp_array[:,0] # ptCloud's x
            y = temp_array[:,2] # ptCloud's z
            hist, xEdges, yEdges = get_2D_hist(x,y)

            # Convert float64 -> uint8
            maxVal = np.max(np.max(hist))
            hist = np.round_(hist * 255 / maxVal)
            hist = hist.astype('uint8')

            # Treshold image with TRIANGLE method for determining cutoff
            # _, img = cv.threshold(hist,cv.THRESH_TRIANGLE,255,cv.THRESH_TOZERO)
            _, tresh = cv.threshold(hist,70,255,cv.THRESH_TOZERO)

            # Close image to connect loop chunks (morph operation)
            # kernel = cv.getStructuringElement(cv.MORPH_RECT, (3,3))
            # closeing = cv.morphologyEx(tresh, cv.MORPH_CLOSE, kernel)

            # Find local peaks
            detected_peaks = detect_peaks(tresh)

            # Get peak-pixel's idxs
            peak_idxs = np.where(detected_peaks)

            # Return if no pixels were found
            if not peak_idxs:
                print("WARNING: No peaks found on frame" + str(frame_idx))
                return 0

            # # Display
            # plt.subplot(1,3,1)
            # plt.title('Histogram')
            # #print(hist)
            # plt.imshow(hist)
            # plt.subplot(1,3,2)
            # plt.title('Treshold')
            # plt.imshow(tresh)
            # # # plt.subplot(1,4,3)
            # # # plt.title('Closing')
            # # # plt.imshow(closeing)
            # plt.subplot(1,3,3)
            # plt.title('Peaks')
            # plt.imshow(detected_peaks)
            # plt.show()

            # Init array of peaks
            n_of_peaks = np.size(peak_idxs[0])
            peaks = np.empty((n_of_peaks,3))
            # For every peak
            i = 0
            for idx_x, idx_y in zip(peak_idxs[0], peak_idxs[1]):
                # Find every point in pixel's region
                peak_xRange = xEdges[idx_x:idx_x+2]
                peak_yRange = yEdges[idx_y:idx_y+2]

                # Remember histogram y is ptCloud z
                con1 = (ptCloud[:,0] > peak_xRange[0]) & (ptCloud[:,0] < peak_xRange[1])
                # con2 = (ptCloud[:,2] > peak_yRange[0]) & (ptCloud[:,2] < peak_yRange[1])
                peak_points = ptCloud[con1] # & con2]

                # Get median height
                peakY = np.median(peak_points[:,1])
                # Get peak's xz (lateral coordinates)
                peakX = sum(peak_xRange)/2
                peakZ = np.median(peak_points[:,2]) # sum(peak_yRange)/2 | median is better against outliers
                
                # Store peak in array
                peaks[i,:] = [peakX, peakY, peakZ]
                i = i + 1
            
            # #colors = np.asarray([0.5,0.5,0.5],[0.5,0.5,0.5],[0.5,0.5,0.5])
            # #print(colors)
            # pcd = o3d.geometry.PointCloud()
            # pcd.points = o3d.utility.Vector3dVector(np.array(ptCloud)) 
            # pcd.paint_uniform_color([1, 0, 0])
            # pcd2 = o3d.geometry.PointCloud()
            # pcd2.points = o3d.utility.Vector3dVector(peaks) 
            # pcd2.paint_uniform_color([0, 0, 0])
            # o3d.visualization.draw_geometries([pcd,pcd2])
            # #o3d.visualization.draw_geometries([pcd2])

            #Add 2d array of peaks to 3d array
            peaks_of_frames = merge_peaksOfFrames(peaks_of_frames, peaks)

                            # -- VISUALISATION -----------------------------------------------------------------------------------------------------
                # # Pass xyz to Open3D.o3d.geometry.PointCloud and visualize.
        finally:
            # Get median peaks across frames
            n_of_peaks = np.size(peaks_of_frames[:,0,0])
            self.peakArray = np.zeros((n_of_peaks,3))

            self.peakArray[:,0] = np.median(peaks_of_frames[:,0,:], axis=1)
            self.peakArray[:,1] = np.median(peaks_of_frames[:,1,:], axis=1)
            self.peakArray[:,2] = np.median(peaks_of_frames[:,2,:], axis=1)

            # Transform back to camera frame
            if self.tilted_camera:
                self.peakArray = pointCloud_revertFrame(self.peakArray, T_BK_rotMat)

            toc = time.time() - tic
            print("INFO: Closeup points computing lasted: %.3f" % (toc) + " seconds")



import sys
from beckhoff_interfaces.srv import TargetPose, Gripper, HeadRotation
import rclpy
from rclpy.node import Node
import pyrealsense2 as rs
from .cameraFunction import *
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

class CameraClient(Node):

    def __init__(self):
        super().__init__('camera_client')

        self.cliAxis = self.create_client(TargetPose, 'target_pose')
        while not self.cliAxis.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.reqAxis = TargetPose.Request()
        
        self.cliGrip = self.create_client(Gripper, 'gripper')
        while not self.cliGrip.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.reqGrip = Gripper.Request()
        
        self.cliRot = self.create_client(HeadRotation, 'rotationMove')
        while not self.cliRot.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.reqRot = HeadRotation.Request()

        
    def axis_request(self, dx, dy, dz, vel, mode):
        if(mode == "a" or mode == "r"):
            self.reqAxis.dx = dx
            self.reqAxis.dy = dy
            self.reqAxis.dz = dz
            self.reqAxis.vel = vel 
            self.reqAxis.mode = mode
            return self.cliAxis.call_async(self.reqAxis)
        else: 
            self.get_logger().info('Mauvais mode')
            return False
        
    def gripper_request(self, status):
        self.reqGrip.status = status
        return self.cliGrip.call_async(self.reqGrip)
    
    
    def head_request(self, deg, vel):
        print(deg, vel)
        self.reqRot.deg = deg
        self.reqRot.vel =  vel
        return self.cliRot.call_async(self.reqRot)



def move(camera_client, x, y, z, vel, mode ):
    future = camera_client.axis_request( float(x), float(y), float(z), float(vel), mode)
    rclpy.spin_until_future_complete(camera_client, future)
    response = future.result()
        
def closeGripper(camera_client):
    future = camera_client.gripper_request(True)
    rclpy.spin_until_future_complete(camera_client, future)
    response = future.result()
    
def openGripper(camera_client):
    future = camera_client.gripper_request(False)
    rclpy.spin_until_future_complete(camera_client, future)
    response = future.result()
    
def MoveHead(camera_client, deg, vel):
    future = camera_client.head_request(float(deg),float(vel))
    rclpy.spin_until_future_complete(camera_client, future)
    response = future.result()
            
            
def main():
    
    degZero = -20.0
    rclpy.init()
    camera_client = CameraClient()
    
    
    pipeline = rs.pipeline()
    config = rs.config()
    
    # Enable depth and RGB -> resolution, data_format, FPS
    config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30) # 848x480 for d435, 640x480 for l515
    # config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30) # 848x480 for d435, 640x480 for l515
    # Enable recording to file
    if RECORD_VIDEO:
        config.enable_record_to_file(RECORDING_PATH + RECORDING_FILENAME)
    # Make sure destination exists
    if not os.path.exists(RECORDING_PATH):
        os.mkdir(RECORDING_PATH)

    # Choose alternate video source (TESTING)
    if FROM_RECORDING:
        config.enable_device_from_file(RECORDING_PATH + RECORDING_FILENAME)

    try:
        
        future = camera_client.gripper_request(False)
        rclpy.spin_until_future_complete(camera_client, future)
        response = future.result()
       
        # Start streaming from camera to pipeline
        pipeline = start_pipeline(pipeline, config, FROM_RECORDING)
        myCam = vision()
        
        
        # Go back to the initial position
        x_init, y_init, z_init = 50.0, -800.0, 260.0
        move(camera_client, x_init, y_init, z_init, 100.0, "a")
        time.sleep(5)
        MoveHead(camera_client, degZero ,100.0)
        
        #### Find all hooks 
        myCam.RS_burstMulti(pipeline, N_OF_BURST_FRAMES)

        for i in range(len(myCam.peakArray)) :
            
            #### Moving to the hook 
            x,y,z, lastPeakFlag = myCam.getNextPeak() ## Be carefull y and z are reversed 
            move(camera_client, z*1000-300, x * 1000 , -y*1000 , 100.0, "r")
            time.sleep(5)
            
            ### Find the closest point  and move to this one 
            x,y,z = myCam.RS_burst_find_closest(pipeline, N_OF_BURST_FRAMES)
            move(camera_client, z*1000-110, x * 1000 , -y*1000 + 115, 100.0, "r")
            time.sleep(5)
            
            # Grap the hook
            closeGripper(camera_client)
            time.sleep(5)
        
            # Turn, set down and ungrap the hook
            move(camera_client,-120.0, 0.0  , 100.0 , 20.0, "r")
            time.sleep(5)
            MoveHead(camera_client, degZero - 180 ,100.0)
            time.sleep(5)
            move(camera_client,100.0, 0.0  , -260.0 , 50.0, "r")
            time.sleep(5)
            openGripper(camera_client)
            time.sleep(2)

            # Go back to the initial position
            move(camera_client,x_init, y_init, z_init, 100.0, "a")
            time.sleep(2)
            MoveHead(camera_client,degZero ,100.0)
            time.sleep(3)

    finally:
        pipeline.stop()
        print('INFO: End of stream')    
    
   
    rclpy.spin(camera_client)
    
    while(1):
        pass 
    
    camera_client.destroy_node()
    rclpy.shutdown()


# PROGRAM ENTRY POINT
if __name__ == "__main__":
    print("\nINFO: Starting Realsense.py...")
    # Check if N_CLOSEST_POINTS is odd
    if (N_CLOSEST_POINTS % 2) == 0:
        print("ERROR: N_CLOSEST_POINTS must be odd")
        sys.exit()
    # Check if N_OF_BURST_FRAMES is odd
    if (N_OF_BURST_FRAMES % 2) == 0:
        print("ERROR: N_CLOSEST_POINTS must be odd")
        sys.exit()
    
    # Start
    main()

else:
    print("WARNING: Executing as imported file")
    pass
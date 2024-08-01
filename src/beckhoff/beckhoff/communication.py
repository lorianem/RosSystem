#!/usr/bin/env python
# -*- coding: utf-8 -*- 
# Created By : loriane BM
# Date : 
# Version : '1.0'
# -----------------------------------------------
# Description 
# -----------------------------------------------
#
# Node to communicate with Beckhoff via PyADS
#
# -----------------------------------------------
# Imports
# -----------------------------------------------

from beckhoff_interfaces.srv import CartesianMove, HeadRotation, Gripper
from beckhoff_interfaces.msg import Position
import pyads
import rclpy
from rclpy.node import Node
import time 
from ctypes import sizeof

## CONNECTION TO THE ROBOT ##

# Don't forget to create a route in TwinCAT between this PC and the Robot 
remote_ip = '192.168.65.219' 
remote_ads = '192.168.65.219.1.1'
plc = pyads.Connection(remote_ads, pyads.PORT_TC3PLC1, remote_ip) 
plc.open()

### CREATION OF A CALLBACK STATE 

def callbackState(notification, data):
    global moving
    data_type = tags[data]
    handle, timestamp, value = plc.parse_notification(notification, data_type)
    moving = value
    print(value)
    
moving = True
tags = {"External_Setpoint.send_value": pyads.PLCTYPE_BOOL}
attr = pyads.NotificationAttrib(sizeof(pyads.PLCTYPE_BOOL))
handles = plc.add_device_notification('External_Setpoint.send_value', attr, callbackState)

def getActualPos():
    """
    Returns:
        x, y, z (float): actual position of the robot 
    """
    x = plc.read_by_name('MYGVL.Axis3.NcToPlc.ActPos')
    y = plc.read_by_name('MYGVL.Axis1.NcToPlc.ActPos')
    r = plc.read_by_name('MYGVL.Axis2.NcToPlc.ActPos')
    return x, y, r 

class BeckhoffCommunication(Node):

    def __init__(self):
        self.velx, self.vely = 0, 0
        self.accx, self.accy = 0, 0
        super().__init__('beckhoff_communication')
        # Creation of service for simple movement (no velocity control)
        self.srv = self.create_service(CartesianMove, 'cartesianMove', self.move_callback)
        # Creation of service for rotation movement
        self.srvRot = self.create_service(HeadRotation, 'rotationMove', self.rotation_callback)
        # Creation of service for gripper control
        self.srvGripper = self.create_service(Gripper, 'gripper', self.gripper_callback)
        # Creation of position publisher
        self.publisher = self.create_publisher(Position, 'rt_position', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = Position()
        self.x, self.y, self.r = getActualPos()
        msg.x, msg.y, msg.r = self.x, self.y, self.r 
        self.publisher.publish(msg)
     
    def move_callback(self, rq, rs):
        """
        Args:
            rq : request of the service 
                - rq.x : x position
                - rq.vel_x : velocity of x axis
                - rq.acc_x : acceleration/deceleration of x axis 
                
                - rq.y : y position
                - rq.vel_y : velocity of y axis
                - rq.acc_y : acceleration/deceleration of y axis 
                
                - rq.z : z position
                - rq.vel_z : velocity of z axis
                - rq.acc_z : acceleration/deceleration of z axis 
                
            rs : response for the service

        Returns:
            rs.feedback (String): feedback of the status of the sending, not really used 
        """
        self.get_logger().info('I move to : x : "%f", y : "%f",r : "%f" \n with a velocity of x: "%f", y : "%f",r : "%f" \n and an acceleration of x : "%f", y : "%f",r : "%f"\n\n'
                                % (rq.x, rq.y, rq.z, 
                                abs(rq.vel_x), rq.vel_y, rq.vel_z,
                                rq.acc_x, rq.acc_y, rq.acc_z))      
        
        #  Main.Pcdata is an intArray like [sampleTime, x_position, x_velocity, x_acceleration, y_position, y_velocity, y_acceleration, r_position, r_position]   
        plc.write_by_name('MAIN.PCdata', [time.time(), rq.x, abs(rq.vel_x), abs(rq.acc_x), rq.y, abs(rq.vel_y), abs(rq.acc_y), 0, 0], pyads.PLCTYPE_LREAL * 9)
        
        self.velx, self.vely, self.accx, self.accy = rq.vel_x, rq.vel_y, rq.acc_x, rq.acc_y

        return rs
    
    def rotation_callback(self, rotRq, rotRs):
        self.x, self.y, self.r = getActualPos()
        print(rotRq.deg, rotRq.vel)
        plc.write_by_name('MAIN.PCdata', [time.time(),
                                          self.x, self.velx, self.accx, 
                                          self.y, self.vely, self.accy,
                                          rotRq.deg, rotRq.vel], pyads.PLCTYPE_LREAL * 9)
        rotRs.feedback = "ok"
        return rotRs
    
    def gripper_callback(self, gripRq, gripRs):
       plc.write_by_name('MAIN.boolGripper', gripRq.status)
       gripRs.feedback = "ok"
       return gripRs 

def main():
    rclpy.init()
    beckhoff_communication = BeckhoffCommunication()
    rclpy.spin(beckhoff_communication)
    beckhoff_communication.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

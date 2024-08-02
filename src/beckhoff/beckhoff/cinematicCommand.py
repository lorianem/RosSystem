#!/usr/bin/env python
# -*- coding: utf-8 -*- 
# Created By : loriane BM
# Date : 
# Version : '1.0'
# -----------------------------------------------
# Description 
# -----------------------------------------------
#
# Node to convert a goal position on a kinematic plan 
# 
# entry : actual position (x, y, z), final position (dx, dy, dz), type of final position a : absolute, r : relative 
# exit : all information about planning plan 
#
# -----------------------------------------------
# Imports
# -----------------------------------------------

import sys
import numpy as np 
from beckhoff_interfaces.srv import CartesianMove, TargetPose
import rclpy
from rclpy.node import Node
from beckhoff_interfaces.msg import Position
from .cinematic import *
from lift_interfaces.srv import PositionLift

class KinematicCommand(Node):

    def __init__(self):
        super().__init__('kinematic_command')
        self.x, self.y, self.z,  self.r = 0,0,0,0
        
        # Creation client ROS  
        self.cli = self.create_client(CartesianMove, 'cartesianMove')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = CartesianMove.Request()
        
        # Creation client to get the lift position
        self.cliLift = self.create_client(PositionLift, 'posLift')
        while not self.cliLift.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.reqLift = PositionLift.Request()
        
        # Creation service ROS
        self.srv = self.create_service(TargetPose, 'target_pose', self.target_pose_callback)
        
        # Creation Subscriber to get the actual position 
        self.subscription = self.create_subscription(
            Position,
            'rt_position',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    
    def target_pose_callback(self, rq, rs):
        accRef = 5000
        self.get_logger().info('info : dx : "%f", dy : "%f",dz : "%f" mode : "%s" ' % (rq.dx,rq.dy,rq.dz, rq.mode))
        future = self.send_request(rq.dx,rq.dy,rq.dz,rq.vel,accRef, rq.mode)
        rs.feedback = 'ok'
        return rs        
    
    def send_request(self, dx, dy, dz, vel, acc, mode):
        self.get_Z_Position()
        self.get_logger().info('Actual pos : x : "%f", y : "%f",z : "%f"' % (self.x,self.y,self.z))
        t_axes, p_axes, v_axes, a_axes, time = kinematicPlan(self.x, self.y, self.z, dx, dy, dz, vel, acc, mode)
        self.req.x = float(p_axes[0][-1])
        self.req.y = float(p_axes[1][-1])
        self.req.z = float(p_axes[2][-1])
    
        self.req.vel_x = float(v_axes[0])
        self.req.vel_y = float(v_axes[1])
        self.req.vel_z = float(v_axes[2])
        
        self.req.acc_x = float(a_axes[0])
        self.req.acc_y = float(a_axes[1])
        self.req.acc_z = float(a_axes[2])
        
        self.z = p_axes[2][-1]
        
        return self.cli.call_async(self.req) 
    
    def send_request_lift_axis(self):
        rs = self.cliLift.call(self.reqLift)
        print("ok")
        return 0
    
    def get_Z_Position(self):
        self.z = self.send_request_lift_axis()
        return None
    
    def listener_callback(self, msg):
        self.x, self.y, self.r = msg.x, msg.y, msg.r
        #self.get_logger().info('Actual pos : x : "%f", y : "%f",r : "%f"' % (msg.x,msg.y,msg.r))


def main():
    rclpy.init()

    kinematic_command = KinematicCommand()
    
    rclpy.spin(kinematic_command)

    kinematic_command.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

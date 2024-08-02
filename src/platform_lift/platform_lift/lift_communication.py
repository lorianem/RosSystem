#!/usr/bin/env python3

""" ===================== lift_communication.py ====================
This program allows the communication between ROS and the lift

Action server:
    /moveLift (MoveLift): move the lift to the desired position (mm)
    
Service server:
    /posLift (PositionLift): return position of the lift (mm)
    
==============================================================="""

from .serial_interface import *
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from lift_interfaces.action import MoveLift
from lift_interfaces.srv import PositionLift
import time
import threading


class MoveLiftServer(Node):

    def __init__(self):
        super().__init__('move_lift_server')
        self.srv = self.create_service(PositionLift, 'posLift', self.sent_position)
        self._action_server = ActionServer(
            self,
            MoveLift,
            'moveLift',
            self.execute,
        )
        self.get_logger().info('\n\n MoveLidtServer is open \n\n')
    def execute(self, goal_handle):
        self.get_logger().info('Executing goal...')
        
        global ser
        RO_cycle(ser)
        reset_move(ser)
        rate = self.create_rate(4)
        reach_final_a1, reach_final_a2 = False, False
        move_pos(ser, goal_handle.request.goal_position)
        success = True
        
        while not (reach_final_a1 and reach_final_a2):
            RO_cycle(ser)
            if goal_handle.is_cancel_requested:
                reset_move(ser)
                goal_handle.canceled()
                success = False
                return MoveLift.Result()

            if not reach_final_a1:
                reach_final_a1 = reach_pos_A1(ser)
                if reach_final_a1:
                    reset_move_A1(ser)

            if not reach_final_a2:
                reach_final_a2 = reach_pos_A2(ser)
                if reach_final_a2:
                    reset_move_A2(ser)
            print( not (reach_final_a1 and reach_final_a2) )

        if success:
            result = MoveLift.Result()
            result.success = True
            goal_handle.succeed()
            self.get_logger().info('Goal succeeded')
            return result


    def sent_position(self, request, response):
        global ser
        RO_cycle(ser)
        pos = get_pos(ser)
        print(pos)
        if pos == -1:
            pos = 9999
        response.position = int(pos)
        print("pouet")
        return response


def main(args=None):
    rclpy.init(args=args)
    global ser    
    ser = init_serial()

    move_lift_server = MoveLiftServer()
    rclpy.spin(move_lift_server)


    rclpy.shutdown()


if __name__ == '__main__':
    main()

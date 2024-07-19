#!/usr/bin/env python3

""" ===================== lift_communication.py ====================
This program allows the communication between ROS and the lift

Action server:
    /moveLift (MoveLift): move the lift to the desired position
    
Service server:
    /posLift (PositionLift): return position of the lift
    
==============================================================="""

from .serial_interface import *
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from lift_interfaces.action import MoveLift
from lift_interfaces.srv import PositionLift


class MoveLiftServer(Node):

    def __init__(self):
        
        super().__init__('move_lift_server')
        self._action_server = ActionServer(
            self,
            MoveLift,
            'moveLift',
            self.execute,
        )

    def execute(self, goal_handle):
        self.get_logger().info('Executing goal...')
        

        global ser
        reset_move(ser)
        rate = self.create_rate(4)

        reach_final_a1, reach_final_a2 = False, False
        move_pos(ser, goal_handle.request.goal_position)
        success = True

        while not (reach_final_a1 and reach_final_a2):

            if goal_handle.is_cancel_requested:
                reset_move(ser)
                goal_handle.canceled()
                success = False
                self.get_logger().info('Goal canceled')
                return MoveLift.Result()

            if not reach_final_a1:
                reach_final_a1 = reach_pos_A1(ser)
                if reach_final_a1:
                    reset_move_A1(ser)

            if not reach_final_a2:
                reach_final_a2 = reach_pos_A2(ser)
                if reach_final_a2:
                    reset_move_A2(ser)

            rate.sleep()

        if success:
            result = MoveLift.Result()
            result.success = True
            goal_handle.succeed()
            self.get_logger().info('Goal succeeded')
            return result


def sent_position(request, response):
    global ser
    pos = get_pos(ser)
    if pos == -1:
        pos = 9999
    response.position = pos
    return response


def main(args=None):
    rclpy.init(args=args)
    global ser
    
    
    ser = init_serial()
    move_lift_server = MoveLiftServer()
    rclpy.spin(move_lift_server)
    
    service = move_lift_server.create_service(PositionLift, 'posLift', sent_position)

    #executor = rclpy.executors.MultiThreadedExecutor()
    

    rclpy.shutdown()


if __name__ == '__main__':
    main()

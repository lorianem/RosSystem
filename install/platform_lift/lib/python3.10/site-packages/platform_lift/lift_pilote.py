import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
import sys
from lift_interfaces.action import MoveLift
from beckhoff_interfaces.srv import CartesianMove


class CommandActionClient(Node):

    def __init__(self):
        super().__init__('lift_action_client')
        # Creation of action to pilote the lift column
        self._action_client = ActionClient(self, MoveLift, 'moveLift')
        # Creation Service for Simple Movement
        self.srv = self.create_service(CartesianMove, 'cartesianMove', self.move_callback)

    def send_goal(self, goal_position):
        goal_msg = MoveLift.Goal()
        goal_msg.goal_position = goal_position

        self._action_client.wait_for_server()

        return self._action_client.send_goal_async(goal_msg)
    def move_callback(self, rq, rs):
        print(rq.z)
        self.send_goal(int(rq.z))
        return rs


def main(args=None):
    rclpy.init(args=args)

    action_client = CommandActionClient()
    rclpy.spin(action_client)

if __name__ == '__main__':
    main()
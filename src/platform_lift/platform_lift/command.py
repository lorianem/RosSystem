import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from lift_interfaces.action import MoveLift

class CommandActionClient(Node):

    def __init__(self):
        super().__init__('lift_action_client')
        self._action_client = ActionClient(self, MoveLift, 'moveLift')

    def send_goal(self, goal_position):
        goal_msg = MoveLift.Goal()
        goal_msg.goal_position = goal_position

        self._action_client.wait_for_server()

        return self._action_client.send_goal_async(goal_msg)


def main(args=None):
    rclpy.init(args=args)

    action_client = CommandActionClient()

    future = action_client.send_goal(500)

    rclpy.spin_until_future_complete(action_client, future)


if __name__ == '__main__':
    main()
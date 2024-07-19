import sys


import rclpy
from rclpy.node import Node
from lift_interfaces.srv import PositionLift


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(PositionLift, 'posLift')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = PositionLift.Request()

    def send_request(self):
        return self.cli.call_async(self.req)


def main():
    rclpy.init()

    minimal_client = MinimalClientAsync()
    future = minimal_client.send_request()
    rclpy.spin_until_future_complete(minimal_client, future)
    response = future.result()
    minimal_client.get_logger().info(
        'Actual position %d ' %
        (response.position))

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
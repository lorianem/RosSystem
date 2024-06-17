import sys

from beckhoff_interfaces.srv import Move
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(Move, 'move')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Move.Request()

    def send_request(self, x, y, r, vel):
        self.req.x = x
        self.req.y = y
        self.req.r = r
        self.req.velocity = vel 
        return self.cli.call_async(self.req)


def main():
    rclpy.init()

    minimal_client = MinimalClientAsync()
    future = minimal_client.send_request(float(sys.argv[1]), float(sys.argv[2]) ,float(sys.argv[3]),float(sys.argv[4]))
    rclpy.spin_until_future_complete(minimal_client, future)
    response = future.result()
    minimal_client.get_logger().info(
        'My new position x : %f, y : %f, r : %f' %
        (response.val_x , response.val_y ,response.val_r ))

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
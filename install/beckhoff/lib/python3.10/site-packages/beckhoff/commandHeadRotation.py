import sys

from beckhoff_interfaces.srv import  HeadRotation
import rclpy
from rclpy.node import Node


class HeadRotationClient(Node):

    def __init__(self):
        super().__init__('head_rotation_client')
        self.cli = self.create_client(HeadRotation, 'rotationMove')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = HeadRotation.Request()

    def send_request(self, deg, vel):
        print(deg, vel)
        self.req.deg = deg
        self.req.vel =  vel
        return self.cli.call_async(self.req)



def main():
    
    rclpy.init()

    head_rotation_client = HeadRotationClient()
    future = head_rotation_client.send_request(float(sys.argv[1]), float(sys.argv[2]))
    rclpy.spin_until_future_complete(head_rotation_client, future)
    head_rotation_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
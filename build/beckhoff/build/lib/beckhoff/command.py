import sys

from beckhoff_interfaces.srv import TargetPose
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(TargetPose, 'target_pose')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = TargetPose.Request()

    def send_request(self, dx, dy, dz, vel):
        self.req.dx = dx
        self.req.dy = dy
        self.req.dz = dz
        self.req.vel = vel 
        return self.cli.call_async(self.req)


def main():
    
    rclpy.init()

    minimal_client = MinimalClientAsync()
    future = minimal_client.send_request(float(sys.argv[1]), float(sys.argv[2]) ,float(sys.argv[3]),float(sys.argv[4]))
    rclpy.spin_until_future_complete(minimal_client, future)

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
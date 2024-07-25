import sys

from beckhoff_interfaces.srv import TargetPose
import rclpy
from rclpy.node import Node


class CommandService(Node):

    def __init__(self):
        super().__init__('command_service')
        self.cli = self.create_client(TargetPose, 'target_pose')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = TargetPose.Request()

    def send_request(self, dx, dy, dz, vel, mode):
        print(mode)
        if(mode == "a" or mode == "r"):
            print(mode)
            self.req.dx = dx
            self.req.dy = dy
            self.req.dz = dz
            self.req.vel = vel 
            self.req.mode = mode
            return self.cli.call_async(self.req)
        else: 
            self.get_logger().info('Mauvais mode renconter')
            return False


def main():
    
    rclpy.init()

    command_service = CommandService()
   
    future = command_service.send_request(float(sys.argv[1]), float(sys.argv[2]) ,float(sys.argv[3]),float(sys.argv[4]), str(sys.argv[5]))
    rclpy.spin_until_future_complete(command_service, future)


    command_service.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
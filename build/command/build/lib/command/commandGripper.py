import sys
from beckhoff_interfaces.srv import  Gripper
import rclpy
from rclpy.node import Node


class GripperClient(Node):

    def __init__(self):
        super().__init__('gripper_client')
        self.cli = self.create_client(Gripper, 'gripper')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Gripper.Request()

    def send_request(self, status):
        self.req.status = status
        return self.cli.call_async(self.req)



def main():
    
    rclpy.init()

    gripper_client = GripperClient()
    if(str(sys.argv[1]).lower == "true"  or str(sys.argv[1]).lower() == "t"):
        future = gripper_client.send_request(True)
    elif (str(sys.argv[1]).lower == "false"  or str(sys.argv[1]).lower() == "f"):
        future = gripper_client.send_request(False)
    rclpy.spin_until_future_complete(gripper_client, future)
    gripper_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
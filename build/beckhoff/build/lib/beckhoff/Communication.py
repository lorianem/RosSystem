from beckhoff_interfaces.srv import CartesianMove, HeadRotation, Gripper
from beckhoff_interfaces.msg import Position
import pyads
import rclpy
from rclpy.node import Node
import time 
from ctypes import sizeof

remote_ip = '192.168.65.219'
remote_ads = '192.168.65.219.1.1'
plc = pyads.Connection(remote_ads, pyads.PORT_TC3PLC1, remote_ip) 
plc.open()

moving = True
def callbackState(notification, data):
    global moving
    data_type = tags[data]
    handle, timestamp, value = plc.parse_notification(notification, data_type)
    moving = value
    print(value)

tags = {"External_Setpoint.send_value": pyads.PLCTYPE_BOOL}
attr = pyads.NotificationAttrib(sizeof(pyads.PLCTYPE_BOOL))
handles = plc.add_device_notification('External_Setpoint.send_value', attr, callbackState)


def getActualPos():
    x = plc.read_by_name('MYGVL.Axis3.NcToPlc.ActPos')
    y = plc.read_by_name('MYGVL.Axis1.NcToPlc.ActPos')
    r = plc.read_by_name('MYGVL.Axis2.NcToPlc.ActPos')
    return x,y,r 

class BeckhoffCommunication(Node):

    def __init__(self):
        self.velx, self.vely = 0 , 0
        self.accx,  self.accy = 0,0
        super().__init__('beckhoff_communication')
        # Creation Service for Simple Movement
        self.srv = self.create_service(CartesianMove, 'cartesianMove', self.move_callback)
        # Creation Service for rotation Movement
        self.srvRot = self.create_service(HeadRotation, 'rotationMove', self.rotation_callback)
        # Creation Service for rotation Movement
        self.srvGripper = self.create_service(Gripper, 'gripper', self.gripper_callback)
        # Creation Publisher of the position
        self.publisher = self.create_publisher(Position, 'rt_position',10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        
    def timer_callback(self):
        msg = Position()
        self.x, self.y, self.r = getActualPos()
        msg.x , msg.y , msg.r = self.x, self.y, self.r 
        self.publisher.publish(msg)

        
    def move_callback(self, rq, rs):
        
        self.get_logger().info('I move to : x : "%f", y : "%f",r : "%f" \n with a velocity of x: "%f", y : "%f",r : "%f" \n and an acceleration of x : "%f", y : "%f",r : "%f"\n\n'
                                % (rq.x,rq.y,rq.z, 
                                abs(rq.vel_x),rq.vel_y,rq.vel_z,
                                rq.acc_x,rq.acc_y,rq.acc_z))         
        plc.write_by_name('MAIN.PCdata', [time.time(), rq.x,abs(rq.vel_x), abs(rq.acc_x), rq.y,abs(rq.vel_y),abs(rq.acc_y), 0, 0], pyads.PLCTYPE_LREAL * 9)
        self.velx, self.vely = rq.vel_x , rq.vel_y
        self.accx,  self.accy = rq.acc_x, rq.acc_y

        rs.feedback  = 'ok'

        return rs
    
    def rotation_callback(self, rotRq, rotRs):
        self.x, self.y, self.r = getActualPos()
        print(rotRq.deg, rotRq.vel)
        plc.write_by_name('MAIN.PCdata', [time.time(),
                                          self.x, self.velx, self.accx, 
                                          self.y, self.vely, self.accy,
                                          rotRq.deg, rotRq.vel], pyads.PLCTYPE_LREAL * 9)
        
        rotRs.feedback = "ok"
        return rotRs
    
    def gripper_callback(self, gripRq, gripRs):
       plc.write_by_name('MAIN.boolGripper', gripRq.status)
       gripRs.feedback = "ok"
       return gripRs 

def main():
    rclpy.init()
    beckhoff_communication = BeckhoffCommunication()
    rclpy.spin(beckhoff_communication)
    beckhoff_communication.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
import sys
import numpy as np 
from beckhoff_interfaces.srv import CartesianMove, TargetPose
import rclpy
from rclpy.node import Node
#from cinematicRobot import kinematicPlan

class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(CartesianMove, 'cartesianMove')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = CartesianMove.Request()
        self.srv = self.create_service(TargetPose, 'target_pose', self.target_pose_callback)

    def target_pose_callback(self, rq, rs):
        accRef = 5000
        self.get_logger().info('info : dx : "%f", dy : "%f",dz : "%f"' % (rq.dx,rq.dy,rq.dz))
        future = self.send_request(rq.dx,rq.dy,rq.dz,rq.vel,accRef)
        rs.feedback = 'ok'
        return rs

    
    def send_request(self,dx, dy,dz, vel, acc):
        x, y, z = 50.0,300.0,0.0
        t_axes, p_axes, v_axes, a_axes, time = kinematicPlan (x,y,z, dx,dy,dz, vel, acc)
        self.req.x = float(p_axes[0][-1])
        self.req.y = float(p_axes[1][-1])
        self.req.z = float(p_axes[2][-1])
        
    
    
        self.req.vel_x = float(v_axes[0])
        self.req.vel_y= float(v_axes[1])
        self.req.vel_z = float(v_axes[2])
        
        self.req.acc_x = float(a_axes[0])
        self.req.acc_y= float(a_axes[1])
        self.req.acc_z= float(a_axes[2])
        
        return self.cli.call_async(self.req) 

def interpolation(tc, tf, ac, dT, pi, pf):

    t1 = np.arange(0, tc, dT)  # Acceleration phase
    t2 = np.arange(tc, tf - tc, dT)  # Constant speed phase
    t3 = np.arange(tf - tc, tf, dT) 
    
    p1 = pi + 0.5 * ac * t1 ** 2
    p2 = pi + ac * tc * (t2 - (tc/2))
    p3 = pf - 0.5 * ac * (t3 - tf)** 2 

    time = np.concatenate((t1,t2,t3))
    pose = np.concatenate((p1,p2,p3))
    return time, pose  

def kinematicPlan(x,y, z,dx,dy,dz, vcref, acref):
    """ x, y, z actual position (mm)
    dx, dy, dz absolute deplacement (mm)"""


    # Sample time 
    dT = 1/4000
    # Desired movement speed (mm/s).
    vc = vcref
    # Acceleration and deceleration (mm/s2).
    ac = acref
    #calculate the acceleration time 
    tc = vc / ac
    
    # Define longest mouvement 
    if abs(dx) > abs(dy) and abs(dx) > abs(dz) :
        
        vc = np.sign(dx) * vc
        ac = np.sign(dx) * ac
        
        pi_long = x
        pf_long = x + dx
        
        # calculate the lenght at the end of acceleration 
        pc = pi_long + 0.5 *ac * tc**2
        # calculate the length of the constant speed movement.
        dl = pf_long - ( 2 * pc - pi_long)
        print(dl)
        if (np.sign(dx) * dl < 0):
            tc = np.sqrt(dx / ac)
            tf = 2 * tc
            vc = ac * tc
            tx, px = interpolation(tc, tf, ac, dT, pi_long, pf_long)
            vx = vc
            ax = ac
        else:
            tl = dl / vc
            tf = tl + 2 * tc
            tx, px = interpolation(tc, tf, ac, dT, pi_long, pf_long)
            vx = vc
            ax = ac
            
        # Calcule for the other axes 
        vy = dy / (tf - tc)
        ay = (vy / tc)
        ty, py = interpolation(tc, tf, ay,dT, y, y+dy)
        
        vz = dz / (tf - tc)
        az = (vz / tc)
        tz, pz = interpolation(tc, tf, az,dT, z, z+dz)
        
        
    elif abs(dy) > abs(dx) and abs(dy) > abs(dz) :

        vc = np.sign(dy) * vc
        ac = np.sign(dy) * ac
        
        pi_long = y
        pf_long = y + dy
        
        # calculate the lenght at the end of acceleration 
        pc = pi_long + 0.5 *ac * tc**2
        # calculate the length of the constant speed movement.
        dl = pf_long - ( 2 * pc - pi_long)
        if (np.sign(dy) * dl < 0):
            # Gestion case of no constant movement 
            tc = np.sqrt(dy / ac)
            tf = 2 * tc
            vc = ac * tc
            ty, py = interpolation(tc, tf, ac, dT, pi_long, pf_long)
            vy = vc
            ay = ac
        else:
            #Calculate the time of movement at constant speed
            tl = dl / vc
            #Total movement time - acceleration time is equal to deceleration time.
            tf = tl + 2 * tc
            # Interpolation 
            ty , py= interpolation(tc, tf, ac, dT, pi_long, pf_long)
            vy = vc
            ay = ac
            
        # Calcule for the other axes 
        vx = dx / (tf - tc)
        ax = (vx / tc)
        tx, px = interpolation(tc, tf, ax,dT, x, x+dx)
        
        vz = dz / (tf - tc)
        az = (vz / tc)
        tz, pz = interpolation(tc, tf, az,dT, z, z+dz)
        
    else :
        vc = np.sign(dz) * vc
        ac = np.sign(dz) * ac
        
        pi_long = z
        pf_long = z + dz
        
        # calculate the lenght at the end of acceleration 
        pc = pi_long + 0.5 *ac * tc**2
        # calculate the length of the constant speed movement.
        dl = pf_long - ( 2 * pc - pi_long)
        
        
        if (np.sign(dz) * dl < 0):
            # Gestion case of no constant movement 
            tc = np.sqrt(dz / ac)
            tf = 2 * tc
            vc = ac * tc
            tz, pz = interpolation(tc, tf, ac, dT, pi_long, pf_long)
            vz = vc
            az = ac
        else:
            #Calculate the time of movement at constant speed
            tl = dl / vc
            #Total movement time - acceleration time is equal to deceleration time.
            tf = tl + 2 * tc
            # Interpolation 
            tz, pz = interpolation(tc, tf, ac, dT, pi_long, pf_long)
            vz = vc
            az = ac
            
        # Calcule for the other axes 
        vx = dx / (tf - tc)
        ax = (vx / tc)
        tx, px = interpolation(tc, tf, ax,dT, x, x+dx)
        
        vy = dy / (tf - tc)
        ay = (vy / tc)
        ty, py = interpolation(tc, tf, ay,dT, y, y+dy)
    

    
    t_axes = [tx,ty,tz]
    p_axes = [px,py,pz]
    v_axes = [vx,vy,vz]
    a_axes = [ax,ay,az]
    time = [tc,tf]
    
    return (t_axes, p_axes ,v_axes , a_axes, time)

def main():
    rclpy.init()

    minimal_client = MinimalClientAsync()
    
    rclpy.spin(minimal_client)

    minimal_client.destroy_node()
    rclpy.shutdown()
if __name__ == '__main__':
    main()
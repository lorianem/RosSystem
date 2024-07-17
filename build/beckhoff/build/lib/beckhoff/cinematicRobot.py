
import numpy as np 
import matplotlib.pyplot as plt 

    
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

def affichage(tx, px, ty, py, tz, pz, vx ,vy , vz, ax, ay,az,tc, tf ):
    
    fig, axs = plt.subplots(3, 1, layout='constrained')
    axs[0].plot(tx, px, label="Pos X")
    axs[0].plot(ty, py, label="Pos Y")
    axs[0].plot(tz, pz,label=" Pos Z")
    axs[0].set_xlabel('Time (s)')
    axs[0].set_ylabel('position (mm)')
    axs[0].legend()
    
    axs[1].plot([0, tc, tf-tc,tf], [0, vx, vx,  0], label="Vel X")
    axs[1].plot([0, tc, tf-tc,tf], [0, vy, vy,  0], label="Vel Y")
    axs[1].plot([0, tc, tf-tc,tf], [0, vz, vz,   0],label="Vel Z")
    axs[1].set_xlabel('Time (s)')
    axs[1].set_ylabel('velocity (mm/s)')
    axs[1].legend()
    
    axs[2].step([0, tc, tf-tc,tf], [0, ax, 0,  -ax], label="Acc X")
    axs[2].step([0, tc, tf-tc,tf], [0, ay, 0,  -ay], label="Acc Y")
    axs[2].step([0, tc, tf-tc,tf], [0, az, 0,  -az], label="Acc Z")
    axs[2].set_xlabel('Time (s)')
    axs[2].set_ylabel('Acceleration (mm/s2)')
    axs[2].legend() 
    
    plt.show()
    
    
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
        print(ty, py)
        print(tz, pz)
    
    
    #Affichage 
    affichage(tx, px, ty, py, tz, pz, vx ,vy , vz, ax, ay,az,tc, tf )
    
    t_axes = [tx,ty,tz]
    p_axes = [px,py,pz]
    v_axes = [vx,vy,vz]
    a_axes = [ax,ay,az]
    time = [tc,tf]
    
    return (t_axes, p_axes ,v_axes , a_axes, time)

kinematicPlan(0,0,0,20,-100,50,100,5000)
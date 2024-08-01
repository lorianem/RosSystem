import numpy as np 
import matplotlib.pyplot as plt 

def affichage(tx, px, ty, py, tz, pz, vx ,vy , vz, ax, ay, az, tc, tf ):
    """
    Display the position, velocity, and acceleration profiles for the given axes over time.
    
    Args:
        tx, ty, tz (array): time arrays for x, y, and z axes.
        px, py, pz (array): position arrays for x, y, and z axes.
        vx, vy, vz (float): maximum velocities for x, y, and z axes.
        ax, ay, az (float): accelerations for x, y, and z axes.
        tc (float): acceleration time.
        tf (float): final time of the movement.
    """
    fig, axs = plt.subplots(3, 1, layout='constrained')
    axs[0].plot(tx, px, label="Pos X")
    axs[0].plot(ty, py, label="Pos Y")
    axs[0].plot(tz, pz,label="Pos Z")
    axs[0].set_xlabel('Time (s)')
    axs[0].set_ylabel('Position (mm)')
    axs[0].legend()
    
    axs[1].plot([0, tc, tf-tc, tf], [0, vx, vx, 0], label="Vel X")
    axs[1].plot([0, tc, tf-tc, tf], [0, vy, vy, 0], label="Vel Y")
    axs[1].plot([0, tc, tf-tc, tf], [0, vz, vz, 0], label="Vel Z")
    axs[1].set_xlabel('Time (s)')
    axs[1].set_ylabel('Velocity (mm/s)')
    axs[1].legend()
    
    axs[2].step([0, tc, tf-tc, tf], [0, ax, 0, -ax], label="Acc X")
    axs[2].step([0, tc, tf-tc, tf], [0, ay, 0, -ay], label="Acc Y")
    axs[2].step([0, tc, tf-tc, tf], [0, az, 0, -az], label="Acc Z")
    axs[2].set_xlabel('Time (s)')
    axs[2].set_ylabel('Acceleration (mm/s²)')
    axs[2].legend() 
    
    plt.show()
       
def interpolation(tc, tf, ac, dT, pi, pf):
    """
    Calculate position profiles for the given time intervals and acceleration.
    
    Args:
        tf (float): final time of the movement.
        ac (float): acceleration of the axis.
        dT (float): time step.
        pi (float): initial position.
        pf (float): final position.

    Returns:
        time (np.array): array of each sample time.
        pose (np.array): array of each position.
    """
    t1 = np.arange(0, tc, dT)  # Acceleration phase
    t2 = np.arange(tc, tf - tc, dT)  # Constant speed phase
    t3 = np.arange(tf - tc, tf, dT)  # Deceleration phase
    
    p1 = pi + 0.5 * ac * t1 ** 2
    p2 = pi + ac * tc * (t2 - (tc / 2))
    p3 = pf - 0.5 * ac * (t3 - tf) ** 2 

    time = np.concatenate((t1, t2, t3))
    pose = np.concatenate((p1, p2, p3))
    return time, pose  

def modeAdapt(x, y, z, dx, dy, dz, mode): 
    """
    Adjust displacement based on the selected mode.
    
    Args:
        x, y, z (float): current positions.
        dx, dy, dz (float): displacements.
        mode (str): mode of movement ("a" for absolute, "r" for relative).

    Returns:
        dx, dy, dz (float): adjusted displacements.
    """
    if mode == "a": 
        dx -= x
        dy -= y 
        dz -= z
    return dx, dy, dz

def longMovement(x, dx, ac, vc, tc, dT): 
    """
    Calculate long movement trajectory.
    
    Args:
        x (float): initial position.
        dx (float): displacement.
        ac (float): acceleration.
        vc (float): velocity.
        tc (float): acceleration time.
        dT (float): time step.

    Returns:
        tx, px (array): time and position arrays.
        ac, vc (float): adjusted acceleration and velocity.
    """
    vc = np.sign(dx) * vc
    ac = np.sign(dx) * ac
    
    pi_long = x
    pf_long = x + dx
    
    # Calculate the length at the end of acceleration 
    pc = pi_long + 0.5 * ac * tc ** 2
    # Calculate the length of the constant speed movement
    dl = pf_long - (2 * pc - pi_long)

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
    return tx, px, ac, vc
        
def okFinalPos(x, dx, minLim, maxLim): 
    """
    Ensure the final position is within limits.
    
    Args:
        x (float): current position.
        dx (float): displacement.
        minLim (float): minimum limit.
        maxLim (float): maximum limit.

    Returns:
        dx (float): adjusted displacement.
    """
    finalPos = x + dx
    if finalPos > maxLim: 
        return maxLim - x
    elif finalPos < minLim: 
        return minLim - x
    else: 
        return dx
    
def okVelAcc(vel, acc, maxVel, maxAcc):
    """
    Ensure the velocity and acceleration are within limits.
    
    Args:
        vel (float): velocity.
        acc (float): acceleration.
        maxVel (float): maximum velocity.
        maxAcc (float): maximum acceleration.

    Returns:
        vel, acc (float): adjusted velocity and acceleration.
    """
    if vel > maxVel: 
        vel = maxVel
    if acc > maxAcc:
        acc = maxAcc
    return abs(vel), abs(acc)

def kinematicPlan(x, y, z, dx, dy, dz, vcref, acref, mode):
    """
    Plan the movement trajectory for the robot.

    Args:
        x (float): current x position (mm).
        y (float): current y position (mm).
        z (float): current z position (mm).
        dx (float): relative x displacement (mm).
        dy (float): relative y displacement (mm).
        dz (float): relative z displacement (mm).
        vcref (float): reference velocity (mm/s).
        acref (float): reference acceleration (mm/s²).
        mode (str): type of movement command ("a" for absolute position, "r" for relative).

    Returns:
        t_axes (array): array of each sample time [axis][sample time].
        p_axes (array): array of positions for each sample time for each axis [axis][position].
        v_axes (array): array of maximum velocities for each axis.
        a_axes (array): array of accelerations for each axis.
        time (array): array of key times [acceleration time, final time].
    """
    dx, dy, dz = modeAdapt(x, y, z, dx, dy, dz, mode)
    dx = okFinalPos(x, dx, 0, 500)
    dy = okFinalPos(y, dy, -1100, 0)
    dz = okFinalPos(z, dz, 0, 900)
    
    # Sample time 
    dT = 1/4000
    # Desired movement speed (mm/s).
    vc = vcref
    # Acceleration and deceleration (mm/s²).
    ac = acref
    # Calculate the acceleration time 
    tc = vc / ac
    
    # Define longest movement 
    if abs(dx) > abs(dy) and abs(dx) > abs(dz):
        
        vc = np.sign(dx) * vc
        ac = np.sign(dx) * ac
        
        pi_long = x
        pf_long = x + dx
        
        # Calculate the length at the end of acceleration 
        pc = pi_long + 0.5 * ac * tc ** 2
        # Calculate the length of the constant speed movement
        dl = pf_long - (2 * pc - pi_long)
    
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
            
        # Calculate for the other axes 
        vy = dy / (tf - tc)
        ay = (vy / tc)
        ty, py = interpolation(tc, tf, ay, dT, y, y + dy)
        
        vz = dz / (tf - tc)
        az = (vz / tc)
        tz, pz = interpolation(tc, tf, az, dT, z, z + dz)
        
    elif abs(dy) > abs(dx) and abs(dy) > abs(dz):

        vc = np.sign(dy) * vc
        ac = np.sign(dy) * ac
        
        pi_long = y
        pf_long = y + dy
        
        # Calculate the length at the end of acceleration 
        pc = pi_long + 0.5 * ac * tc ** 2
        # Calculate the length of the constant speed movement
        dl = pf_long - (2 * pc - pi_long)
        if (np.sign(dy) * dl < 0):
            # Case of no constant movement 
            tc = np.sqrt(dy / ac)
            tf = 2 * tc
            vc = ac * tc
            ty, py = interpolation(tc, tf, ac, dT, pi_long, pf_long)
            vy = vc
            ay = ac
        else:
            # Calculate the time of movement at constant speed
            tl = dl / vc
            # Total movement time - acceleration time is equal to deceleration time
            tf = tl + 2 * tc
            # Interpolation 
            ty, py = interpolation(tc, tf, ac, dT, pi_long, pf_long)
            vy = vc
            ay = ac
            
        # Calculate for the other axes 
        vx = dx / (tf - tc)
        ax = (vx / tc)
        tx, px = interpolation(tc, tf, ax, dT, x, x + dx)
        
        vz = dz / (tf - tc)
        az = (vz / tc)
        tz, pz = interpolation(tc, tf, az, dT, z, z + dz)
        
    else:
        vc = np.sign(dz) * vc
        ac = np.sign(dz) * ac
        
        pi_long = z
        pf_long = z + dz
        
        # Calculate the length at the end of acceleration 
        pc = pi_long + 0.5 * ac * tc ** 2
        # Calculate the length of the constant speed movement
        dl = pf_long - (2 * pc - pi_long)
        
        if (np.sign(dz) * dl < 0):
            # Case of no constant movement 
            tc = np.sqrt(dz / ac)
            tf = 2 * tc
            vc = ac * tc
            tz, pz = interpolation(tc, tf, ac, dT, pi_long, pf_long)
            vz = vc
            az = ac
        else:
            # Calculate the time of movement at constant speed
            tl = dl / vc
            # Total movement time - acceleration time is equal to deceleration time
            tf = tl + 2 * tc
            # Interpolation 
            tz, pz = interpolation(tc, tf, ac, dT, pi_long, pf_long)
            vz = vc
            az = ac
            
        # Calculate for the other axes 
        vx = dx / (tf - tc)
        ax = (vx / tc)
        tx, px = interpolation(tc, tf, ax, dT, x, x + dx)
        
        vy = dy / (tf - tc)
        ay = (vy / tc)
        ty, py = interpolation(tc, tf, ay, dT, y, y + dy)
    
    # Display the results
    # affichage(tx, px, ty, py, tz, pz, vx ,vy , vz, ax, ay, az, tc, tf )
    
    t_axes = [tx, ty, tz]
    p_axes = [px, py, pz]
    v_axes = [vx, vy, vz]
    a_axes = [ax, ay, az]
    time = [tc, tf]

    return t_axes, p_axes, v_axes, a_axes, time

# kinematicPlan(450, -800, 500, 20, -100, 50, 100, 5000, "a")

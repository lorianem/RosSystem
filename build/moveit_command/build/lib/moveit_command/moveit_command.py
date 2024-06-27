import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from moveit_configs_utils import MoveItConfigsBuilder
from moveit_commander import MoveGroupCommander, PlanningSceneInterface, RobotCommander
import transforms3d as t3d


def set_orientation_around_x(angle_rad):
    """ Returns a quaternion for a rotation around the X-axis. """
    return t3d.quaternions.axangle2quat([1, 0, 0], angle_rad)

def main():
    rclpy.init()
    node = Node("set_orientation_around_x")

    move_group = MoveGroupCommander("arm")

    # Définir la position cible
    pose_goal = PoseStamped()
    pose_goal.header.frame_id = "base_link"  # Adapter selon votre frame de base
    pose_goal.pose.position.x = 0.4
    pose_goal.pose.position.y = 0.1
    pose_goal.pose.position.z = 0.4

    # Définir l'orientation cible
    angle_rad = 1.57  # Par exemple, une rotation de 90 degrés autour de l'axe X
    quaternion = set_orientation_around_x(angle_rad)
    pose_goal.pose.orientation.x = 0.0
    pose_goal.pose.orientation.y = 0.0
    pose_goal.pose.orientation.z = 0.0
    pose_goal.pose.orientation.w = 1.0

    move_group.set_pose_target(ppose_goal.pose)

    # Planifier et exécuter le mouvement
    plan = move_group.go(wait=True)
    move_group.stop()
    move_group.clear_pose_targets()

    if plan:
        node.get_logger().info("Planification réussie. Exécution du plan...")
    else:
        node.get_logger().warn("La planification a échoué.")

    rclpy.shutdown()

if __name__ == '__main__':
    main()

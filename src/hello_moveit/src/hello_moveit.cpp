#include <moveit/move_group_interface/move_group_interface.h>
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <tf2/LinearMath/Quaternion.h>

tf2::Quaternion setOrientationAroundX(double angle_rad) {
    tf2::Quaternion q;
    q.setRPY(angle_rad, 0, 0);  // Rotation around the X-axis
    return q;
}

int main(int argc, char * argv[]) {
  // Initialize ROS and create the Node
  rclcpp::init(argc, argv);
  auto const node = std::make_shared<rclcpp::Node>(
    "hello_moveit",
    rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true)
  );

  // Create a ROS logger
  auto const logger = rclcpp::get_logger("hello_moveit");

  // Create the MoveIt MoveGroup Interface
  using moveit::planning_interface::MoveGroupInterface;
  auto move_group_interface = MoveGroupInterface(node, "robot_without_rot");

  // Set planning time and attempts
  move_group_interface.setPlanningTime(10.0);  // Increase planning time to 5 seconds

  // Set a target Pose
  auto const target_pose = []{
    geometry_msgs::msg::Pose msg;
    
    msg.position.x = 0.4;
    msg.position.y = -0.3;
    msg.position.z = 0.80;

    msg.orientation.x = 0;
    msg.orientation.y = 0;
    msg.orientation.z = 0;
    msg.orientation.w = 1;

    return msg;
  }();
  move_group_interface.setPoseTarget(target_pose);

  // Create a plan to that target pose
  auto const [success, plan] = [&move_group_interface]{
    moveit::planning_interface::MoveGroupInterface::Plan msg;
    auto const ok = static_cast<bool>(move_group_interface.plan(msg));
    return std::make_pair(ok, msg);
  }();

  // Execute the plan
  if(success) {
    move_group_interface.execute(plan);
  } else {
    RCLCPP_ERROR(logger, "Planning failed!");
    // Print the target pose for debugging
    RCLCPP_ERROR(logger, "Target Pose: [x: %f, y: %f, z: %f, qx: %f, qy: %f, qz: %f, qw: %f]",
                 target_pose.position.x, target_pose.position.y, target_pose.position.z,
                 target_pose.orientation.x, target_pose.orientation.y, target_pose.orientation.z, target_pose.orientation.w);
  }

  // Shutdown ROS
  rclcpp::shutdown();
  return 0;
}

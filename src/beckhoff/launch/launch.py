import launch
import launch_ros.actions

def generate_launch_description():
    return launch.LaunchDescription([
        launch_ros.actions.Node(
            package='beckhoff',
            executable='communication',
            name='communication'),
  ])
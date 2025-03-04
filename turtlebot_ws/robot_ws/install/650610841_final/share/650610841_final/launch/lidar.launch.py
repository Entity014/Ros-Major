import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():
    ld = LaunchDescription()

    lidar_launch_path = PathJoinSubstitution(
        [FindPackageShare("sllidar_ros2"), "launch", "sllidar_a3_launch.py"]
    )
    launch_lidar = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(lidar_launch_path),
    )

    node_lidar_controller = Node(
        package="650610841_final",
        executable="lidar_controller",
    )
    node_lidar_collision = Node(
        package="650610841_final",
        executable="lidar_collision",
    )

    ld.add_action(launch_lidar)
    ld.add_action(node_lidar_controller)
    ld.add_action(node_lidar_collision)

    return ld

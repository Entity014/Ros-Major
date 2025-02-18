import os
from glob import glob
from setuptools import find_packages, setup

package_name = "lidar_650610841"

setup(
    name=package_name,
    version="0.0.0",
    packages=find_packages(exclude=["test"]),
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
        (
            os.path.join("share", package_name, "launch"),
            glob(os.path.join("launch", "*launch.[pxy][yma]*")),
        ),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="entity014",
    maintainer_email="radlove.012@gmail.com",
    description="TODO: Package description",
    license="Apache-2.0",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "lidar_controller = lidar_650610841.lidar_controller:main",
            "lidar_collision = lidar_650610841.lidar_collision:main",
            "lidar_convert = lidar_650610841.lidar_convert:main",
            "teleop_python = lidar_650610841.teleop_python:main",
        ],
    },
)

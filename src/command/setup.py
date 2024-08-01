from setuptools import find_packages, setup

package_name = 'command'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='student',
    maintainer_email='loriane.mechiche@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'commandAxis = command.commandAxis:main',
            'commandHead = command.commandHeadRotation:main',
            'commandGripper = command.commandGripper:main',
            'commandLift = command.commandLiftCollumn:main',
            'getPosLift = command.srvClient:main',
            'listenerPosAxis = beckhoff.listenerPos:main',
        ],
    },
)
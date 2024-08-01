# TOMATO ROBOT (TOBOT)

## Presentation 

This robot is built to work in above-ground tomato fields. It is designed to pass between rows of tomatoes to perform various manipulations. This repository contains all the ROS2 programs for controlling the Cartesian manipulator. This project was completed during my internship at the RoboLab of the Faculty of Electrical Engineering, University of Ljubljana.

[images ]


## Table of Contents
- [Project Title](#tomato-robot-tobot)
- [Presentation](#presentation)
- [Table of Contents](#table-of-contents)
- [Installation](#installation)
  - [ROS Installation](#ros-installation)
  - [RealSense SDK](#realsense-sdk)
  - [Python Libraries](#python-libraries)
  - [Project Installation](#project-installation)
- [ROS Packages Description](#ros-packages-description)
  - [Beckhoff](#beckhoff)
  - [Platform Lift](#platform-lift)
  - [Camera](#camera)

## Installation 

### ROS Installation 

This project uses ROS2 Humble. To install, follow the steps [here](https://docs.ros.org/en/humble/Installation.html).

### RealSense SDK

The RealSense L515 camera is an EOL product, so you need to install SDK version 2.54.2. While it's not essential to install this SDK, if you choose to, follow these steps:

#### Prerequisites

Ensure your system is up to date:

```bash
sudo apt update
sudo apt upgrade -y
```

#### Step 1: Install Necessary Dependencies

Install the required dependencies for the RealSense SDK:

```bash
sudo apt-get install git libssl-dev libusb-1.0-0-dev pkg-config libgtk-3-dev -y
sudo apt-get install libglfw3-dev libgl1-mesa-dev libglu1-mesa-dev -y
```

#### Step 2: Clone the librealsense Repository

Clone the `librealsense` repository from GitHub:

```bash
git clone https://github.com/IntelRealSense/librealsense.git
cd librealsense
git checkout v2.54.2
```

#### Step 3: Build and Install the SDK

Create a build directory and compile the SDK:

```bash
mkdir build && cd build
cmake ../ -DBUILD_EXAMPLES=true -DCMAKE_BUILD_TYPE=Release
make -j4
sudo make install
```

#### Step 4: Configure udev Rules

To allow all users to access RealSense devices, install the `udev` rules:

```bash
sudo cp config/99-realsense-libusb.rules /etc/udev/rules.d/
sudo udevadm control --reload-rules && udevadm trigger
```

#### Step 5: Verify the Installation

You can verify that the SDK is correctly installed by running an example provided with the SDK:

```bash
realsense-viewer
```

#### Step 6: Install Python Packages (Optional)

If you wish to use the Python bindings for RealSense, install them with pip:

```bash
pip install pyrealsense2==2.54.2
```

### Python Libraries 

| Library   | Pip Installation Command  | Current Version |
| ------------- |:-------------:|------------- |
| numpy     | ```pip install "numpy >= 1.17.3, <1.25.0" ```   | 1.24.0 |
| openCV      | ```pip install opencv-python```    | |
| open3D     | ```pip install open3d```    | |
| matplotlib     | ```pip install matplotlib```    | |
| realsense viewer     | ```pip install pyrealsense2==2.54.2```    | 2.54.2 |
| Scipy | ```pip install scipy``` | 1.8.0 |
| PyADS | ```pip install pyads``` | |

### Project Installation

To get started with the TOBOT project, follow these steps to install and set up the necessary project files and dependencies:

#### Step 1: Clone the Repository

First, you need to clone the project repository from GitHub. This will download all the necessary files to your local machine.

```bash
git clone https://github.com/lorianem/RosSystem.git
```

#### Step 2: Navigate to the Project Directory

After cloning the repository, navigate to the project directory.

```bash
cd RosSystem
```

#### Step 3: Install ROS2 Packages

Make sure you have ROS2 Humble installed on your system. If not, follow the [ROS2 Humble installation guide](https://docs.ros.org/en/humble/Installation.html). Once ROS2 is installed, install the required ROS2 packages for the project.

```bash
rosdep install -i --from-path src --rosdistro humble -y
```

#### Step 4: Build the Project

Build the project using `colcon` to compile all the packages and dependencies.

```bash
colcon build
```

#### Step 5: Source the Environment

After building the project, source the environment to overlay this workspace on top of your current ROS2 installation.

```bash
source install/local_setup.bash
```

#### Step 6: Run the Project

Now you can run the various nodes and services defined in the project. For example, to start a particular node:

```bash
ros2 run <package_name> <node_name>
```

Replace `<package_name>` with the actual package name and `<node_name>` with the specific node you want to run.


## ROS Packages Description  

### Beckhoff 

This packages manages the communication with the beckhoff module, to move the different axis, the rotation of the head and the gripper.
This communication is done with PyADS to communicate via PLC to beckhoff. 

#### Interfaces

- [TargetPose.srv](#target-pose-service)
- [CartesianMove.srv](#cartesian-move-service)
- [HeadRotation.srv](#head-service)
- [Gripper.srv](#gripper-service)
- [Position.msg](#position-message)
  
##### Target Pose service 

Request:

|  Name   | Type | description |
| ------------- |:-------------:|------------- |
| dx | float 64    | deplacement of robot selon X (mm)|
| dy | float 64    | deplacement of robot selon Y (mm) |
| dz | float 64    | deplacement of robot selon Z (mm)|
| vel | float 64    | max velocity desire (mm/s)|
| mode | string   | choose the type of the description of the movement r = relative / a = absolute |

Response:

|  Name   | Type | description |
| ------------- |:-------------:|------------- |
| feedback | string  | |

##### Cartesian Move service 

Request:

|  Name   | Type | description |
| ------------- |:-------------:|------------- |
| x | float 64    | final X postion (mm)|
| y | float 64    | final Y postion (mm)|
| z | float 64    | final Z postion (mm)|
| vel_x | float 64    | velocity of the x axis (mm/s)|
| vel_y | float 64    | velocity of the y axis (mm/s)|
| vel_z | float 64    | velocity of the z axis (mm/s)|
| acc_x | float 64    | acceleration of the x axis (mm/s)|
| acc_y | float 64    | acceleration of the y axis (mm/s)|
| acc_z | float 64    | acceleration of the z axis (mm/s)|

Response:

|  Name   | Type | description |
| ------------- |:-------------:|------------- |
| feedback | string  | |

##### Head service 

Request:

|  Name   | Type | description |
| ------------- |:-------------:|------------- |
| deg | float 64    | deg of rotation of the head (deg)|
| vel | float 64    | max velocity desire (deg/s)|

Response:

|  Name   | Type | description |
| ------------- |:-------------:|------------- |
| feedback | string  | |

##### Gripper service 

Request:

|  Name   | Type | description |
| ------------- |:-------------:|------------- |
| status | boolean  | Status of the gripper, false = close / true = open |

Response:

|  Name   | Type | description |
| ------------- |:-------------:|------------- |
| feedback | string  | |

##### Position message 

|  Name   | Type | description |
| ------------- |:-------------:|------------- |
| x | float 64    | actual X postion (mm)|
| y | float 64    | actual Y postion (mm)|
| r | float 64    | actual R postion (mm)|

#### Nodes 

### Platform Lift 

#### Interfaces

##### Position Lift Service 

Request: 
``` none ```
Response: 

|  Name   | Type | description |
| ------------- |:-------------:|------------- |
| x | float 64    | actual X postion (mm)|

##### MoveLiftAction 

Request:

|  Name   | Type | description |
| ------------- |:-------------:|------------- |
| goal_position | unit16  | z goal position |

Response:

|  Name   | Type | description |
| ------------- |:-------------:|------------- |
| sucess | bool  | |

Feedback:

|  Name   | Type | description |
| ------------- |:-------------:|------------- |
| current_position | unit16  | current position z |

#### Node 

### Camera 

# TOMATO ROBOT (TOBOT)

## Table of Contents
- [Project Title](#tomato-robot-tobot)
- [Table of Contents](#table-of-contents)
- [Presentation](#presentation)
- [Installation](#installation)
- [Ros packages description](#ros-packages-description)

## Presentation 
  
This robot is build to work in above-ground tomato fields, It build to pass between to range of tomato to do a lot of different manipulation.
On this deposit, there are all the ros2 programm of the manipulation of the caatesian manipulator.
I do this during my intership on the RoboLab of the electronical engineering faculty of ljubljana 

[image] 


## Installation 

### ROS installation 

This project use ROS2 Humble, to install follow the step  [Here](https://docs.ros.org/en/humble/Installation.html).

### Real Sense SDK

Cameras Real-Sense L515 is an EOL product, you need to install sdk version : 2.54.2 
It's not usefull to install this one, but if you want follow this step : 

Sure! Here is the text formatted in English to be added to a README file:

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

### Python Librairies 

| Librairie   | pip installation command line  | Current version |
| ------------- |:-------------:|------------- |
| numpy     | ```pip install "numpy >= 1.17.3, <1.25.0" ```   | 1.24.0 
| openCV      | ```pip install opencv-python  ```    |
| open3D     | ```pip install open3d  ```    |
| matplotlib     | ```pip install matplotlib ```    |
| realsense viewer     | ``` pip install pyrealsense2==2.54.2 ```    |
| Scipy | pip install scipy | 1.8.0

### Project installation 
``` git clone https://github.com/lorianem/RosSystem.git ```

## Ros packages description  

### Beckhoff 

### Platform Lift 

### Camera 

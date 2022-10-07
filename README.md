# Mobile Robotics Labs
Lab activities to learn ROS at the FAMU-FSU College of Engineering

## Installation
### In `mobile_ws/src`
```
git clone https://github.com/JTylerBoylan/hybrid_astar
```

## Building & Running
### In `catkin_ws`
```
catkin_make
source devel/setup.bash
roslaunch hybrid_astar planner.launch
```

## Parameters
Some parameters can be set from the `planner.launch` file. This is how you change the map file, the starting odometry, the goal point, and the topics & frame ids of the planner. Changing these parameters doesn't require you to rebuild the package.


#include "ros/ros.h"
#include "turtlesim/Pose.h"
#include <iostream>
void pose_callback(const turtlesim::Pose::ConstPtr& msg)
{

    ROS_INFO("Received (x,y) = (%f,%f)",msg->x,msg->y);

}

int main(int argc, char **argv){

    ros::init(argc, argv,"location_monitor");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("turtle1/pose",10,pose_callback);
    ros::spin();
    return 0;

}
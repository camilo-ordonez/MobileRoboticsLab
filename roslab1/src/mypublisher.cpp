// Code to publish commands for turtlesim
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <stdlib.h>

int main(int argc, char **argv){

    // Initialize the ROS system and become a node
    ros::init(argc, argv,"publish_velocity");
    ros::NodeHandle nh;

    // Create a publisher object
    ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("turtle1/cmd_vel",100);

    // loop at 5Hz until the node is shut down
    ros::Rate rate(5);
 
    while(ros::ok()) {
    
        // create and fill in the message.
        geometry_msgs::Twist msg;
        msg.linear.x = 0.8;
        msg.angular.z = 0.3;

        // publish the message
        pub.publish(msg);

        // Wait until it's time for next iteration
        rate.sleep();

    }


}

#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "talker");
  ros::NodeHandle n;
  ros::Rate loop_rate(10);
  int count = 0;
  while (ros::ok())
  {
    ++count;
    loop_rate.sleep();
  }

  return 0;
}

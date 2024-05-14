/**
 * @file base_controller.cpp
 * @author Toshiki Nakamura
 * @brief C++ implementation of base controller
 * @copyright Copyright (c) 2024
 */

#include "base_controller/base_controller.h"

BaseController::BaseController(void) : private_nh_("~")
{
  private_nh_.param<int>("hz", hz_, 10);

  ROS_INFO_STREAM(ros::this_node::getName() << " node has started..");
  ROS_INFO_STREAM("hz: " << hz_);
}

void BaseController::process(void)
{
  ros::Rate loop_rate(hz_);
  while (ros::ok())
  {
    ros::spinOnce();
    loop_rate.sleep();
  }
}

int main(int argc, char *argv[])
{
  ros::init(argc, argv, "base_controller");
  BaseController base_controller;
  base_controller.process();

  return 0;
}

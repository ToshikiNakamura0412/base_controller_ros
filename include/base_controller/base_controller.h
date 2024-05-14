/**
 * @file base_controller.h
 * @author Toshiki Nakamura
 * @brief C++ implementation of base controller
 * @copyright Copyright (c) 2024
 */

#ifndef BASE_CONTROLLER_BASE_CONTROLLER_H
#define BASE_CONTROLLER_BASE_CONTROLLER_H

#include <ros/ros.h>

class BaseController
{
public:
  BaseController(void);
  void process(void);

private:
  int hz_;

  ros::NodeHandle nh_;
  ros::NodeHandle private_nh_;
};

#endif  // BASE_CONTROLLER_BASE_CONTROLLER_H

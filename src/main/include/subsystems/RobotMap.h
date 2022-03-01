// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/BuiltInAccelerometer.h>
#include <frc/filter/LinearFilter.h>
#include "Constants.h"
#include "libraries/Point.h"


using namespace frc;


class RobotMap : public frc2::SubsystemBase 
{

 public:

  RobotMap();

  void setStartLocation(Point& location);
  void update();

  double getSpeedX();
  double getSpeedY();
  double getSpeedZ();


//for testing
  double getAccelerationX(); 
  double getAccelerationY(); 
  double getAccelerationZ();
//

  Point getLocation();
  
 private:

  double getFilteredAcceleration(double acceleration);

  BuiltInAccelerometer accelerometer;
  frc::LinearFilter<double>* filter;

  double currentSpeedX;
  double currentSpeedY;
  double currentSpeedZ;

  Point location;

};

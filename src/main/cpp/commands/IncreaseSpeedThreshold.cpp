// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/IncreaseSpeedThreshold.h"
#include <iostream>

IncreaseSpeedThreshold::IncreaseSpeedThreshold(DriveTrain* driveTrain) 
{
  std::cout << "mazafaka" << std::endl; 
  //AddRequirements(driveTrain);
  double speedThreshold = driveTrain->getSpeedThreshold();
  driveTrain->setSpeedThreshold(speedThreshold + THRESHOLD_CHANGE);
}

bool IncreaseSpeedThreshold::IsFinished() {
  return true;
}

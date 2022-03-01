// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/IncreaseSpeedThreshold.h"
#include <iostream>

IncreaseSpeedThreshold::IncreaseSpeedThreshold(DriveTrain* driveTrain) 
{

  double speedThreshold = driveTrain->getSpeedThreshold();
  driveTrain->setSpeedThreshold(speedThreshold);
}

bool IncreaseSpeedThreshold::IsFinished() {
  return true;
}

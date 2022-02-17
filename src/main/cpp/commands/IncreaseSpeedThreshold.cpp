// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/IncreaseSpeedThreshold.h"

IncreaseSpeedThreshold::IncreaseSpeedThreshold(DriveTrain* driveTrain) 
{ 
  AddRequirements(driveTrain);
  double speedThreshold = driveTrain->getSpeedThreshold();
  driveTrain->setSpeedThreshold(speedThreshold + THRESHOLD_CHANGE);
}

bool IncreaseSpeedThreshold::IsFinished() {
  return true;
}

// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/driveBack.h"

DriveBack::DriveBack(DriveTrain* driveTrain, Warden* warden) {
  
}

void DriveBack::Initialize() {
  driveTrain->setDefault();
}


void DriveBack::Execute() {
  driveTrain->setSpeed(0.5);
}


void DriveBack::End(bool interrupted) {
  
}


bool DriveBack::IsFinished() {
  return warden->isNear(IMPACT_DISTANCE);
}
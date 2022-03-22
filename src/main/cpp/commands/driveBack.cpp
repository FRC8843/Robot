// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/driveBack.h"

driveBack::driveBack(DriveTrain* driveTrain, Warden* warden) {
  
}

void driveBack::Initialize() {
  driveTrain->setDefault();
}


void driveBack::Execute() {
  driveTrain->setSpeed(0.5);
}


void driveBack::End(bool interrupted) {
  
}


bool driveBack::IsFinished() {
  return warden->isNear(IMPACT_DISTANCE);
}
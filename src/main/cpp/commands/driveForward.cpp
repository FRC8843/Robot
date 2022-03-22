// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/driveForward.h"

driveForward::driveForward(DriveTrain* driveTrain, Warden* warden, CommandHelper nextCommand) {
  this->driveTrain = driveTrain;
  this->warden = warden;
  this->nextCommand = nextCommand;
}


void driveForward::Initialize() {
  driveTrain->setRotationThreshold(0);
  driveTrain->setRotation(0);
  driveTrain->setSpeed(0.1);
  driveTrain->setSpeedThreshold(0.7);
}


void driveForward::Execute() {
  driveTrain->setSpeed(0.6);
}


void driveForward::End(bool interrupted) {
  nextCommand->Schedule();
}


bool driveForward::IsFinished() {
  return warden->isNear(IMPACT_DISTANCE);
}

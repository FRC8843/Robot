// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/driveForward.h"

driveForward::driveForward(DriveTrain* driveTrain, Warden* warden, int time) {
  this->driveTrain = driveTrain;
  this->timer = frc::Timer();
  this->time = time;
  this->warden = warden;
}


void driveForward::Initialize() {
  driveTrain->setDefault();
  timer.Start();
}


void driveForward::Execute() {
  driveTrain->setSpeed(-0.5);
}


void driveForward::End(bool interrupted) {

}


bool driveForward::IsFinished() {
  if (warden != nullptr)
    return warden->isNear(IMPACT_DISTANCE);
  return timer.HasElapsed((units::time::second_t)time);
}

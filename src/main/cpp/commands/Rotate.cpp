// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/Rotate.h"

Rotate::Rotate(DriveTrain* driveTrain, int degrees) {
  AddRequirements(driveTrain);
  this->driveTrain = driveTrain;
  this->degrees = degrees;
  timer = frc::Timer();
}


void Rotate::Initialize() {
  timer.Start();
  driveTrain->setRotation(0);
  
}


void Rotate::Execute() {
  driveTrain->setRotation(0.5);
}


void Rotate::End(bool interrupted) {
  driveTrain->setRotation(0);
}


bool Rotate::IsFinished() {
  return timer.HasElapsed((units::time::second_t)(degrees * ROTATION_TIME_RATIO));
}

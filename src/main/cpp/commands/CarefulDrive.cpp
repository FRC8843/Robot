// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/CarefulDrive.h"

CarefulDrive::CarefulDrive(DriveTrain* driveTrain, Warden* warden) {
  this->train = driveTrain;
  this->warden = warden;
}


void CarefulDrive::Initialize() {
  train->setRotation(0);
  train->setRotationThreshold(0.8);
  train->setSpeed(0);
  train->setSpeedThreshold(0.8);
}


void CarefulDrive::Execute() {
  if (warden->getBackDistance() <= IMPACT_DISTANCE ||  
    warden->getFrontDistance() <= IMPACT_DISTANCE)
    direction *= -1;

  train->setSpeed(direction * ROBOT_AUTO_DRIVING_SPEED);
  train->Drive();


}


void CarefulDrive::End(bool interrupted) {}


bool CarefulDrive::IsFinished() {
  return false;
}

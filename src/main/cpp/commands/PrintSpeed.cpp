// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/PrintSpeed.h"
#include <iostream>
PrintSpeed::PrintSpeed(DriveTrain* driveTrain) {
 this->driveTrain = driveTrain;
}


void PrintSpeed::Initialize() {
std::cout << "starting velocity tracking";
}


void PrintSpeed::Execute() {
std::cout << driveTrain->getActualSpeed() << std::endl;
}


void PrintSpeed::End(bool interrupted) {

}


bool PrintSpeed::IsFinished() {
  return false;
}

// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/Throw.h"

Throw::Throw(Elevator* elevator) {
  this->elevator = elevator;
  timer = frc::Timer();
}


void Throw::Initialize() {
  this->elevator->setMotor(0);
  timer.Start();
}


void Throw::Execute() {
  this->elevator->setMotor(ELEVATOR_THROW_SPEED);
}


void Throw::End(bool interrupted) {
  this->elevator->setMotor(0);
}


bool Throw::IsFinished() {
  return timer.HasElapsed((units::time::second_t)2);
}

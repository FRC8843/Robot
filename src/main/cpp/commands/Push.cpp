// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/Push.h"

Push::Push(Elevator* elevator)
{
  AddRequirements(elevator);
  this->elevator = elevator;
}


void Push::Initialize()
{
}


void Push::Execute()
{
  this->elevator->setMotor(-ELEVATOR_MOTOR_ROTATION_PERCENTAGE);
}

void Push::End(bool interrupted)
{
  this->elevator->setMotor(0);
}

bool Push::IsFinished() {
  return false;
}

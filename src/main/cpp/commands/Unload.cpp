// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/Unload.h"

Unload::Unload(Elevator* elevator)
{
  AddRequirements(elevator);
  this->elevator = elevator;
}


void Unload::Initialize()
{
}


void Unload::Execute()
{
  this->elevator->setMotor(-ELEVATOR_UNLOAD_SPEED);
}

void Unload::End(bool interrupted)
{
  this->elevator->setMotor(0);
}

bool Unload::IsFinished() {
  return false;
}

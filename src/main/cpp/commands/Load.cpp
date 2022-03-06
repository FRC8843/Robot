// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/Load.h"

Load::Load(Elevator* elevator) 
{
  this->elevator = elevator;
  AddRequirements(elevator);
}

void Load::Initialize()
{
  
}


void Load::Execute() 
{
  this->elevator->setMotor(ELEVATOR_LOAD_SPEED);
}

void Load::End(bool interrupted)
{
  this->elevator->setMotor(0);
}

bool Load::IsFinished() 
{
  return false;
}

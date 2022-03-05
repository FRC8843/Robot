// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/Pull.h"

Pull::Pull(Elevator* elevator) 
{
  this->elevator = elevator;
  AddRequirements(elevator);
}

void Pull::Initialize()
{
  
}


void Pull::Execute() 
{
  this->elevator->setMotor(ELEVATOR_MOTOR_ROTATION_PERCENTAGE);
}

void Pull::End(bool interrupted)
{
  this->elevator->setMotor(0);
}

bool Pull::IsFinished() 
{
  return false;
}

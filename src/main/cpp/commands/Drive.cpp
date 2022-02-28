// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.
#include "commands/Drive.h"
#include <iostream>

Drive::Drive(DriveTrain* subsystem) 
{
  m_train = subsystem;
  m_controller = new XboxController(CONTROLLER_PORT);
}


void Drive::Initialize() 
{
  m_train->setRotationThreshold(0.8);
  m_train->setSpeedThreshold(0.8);
  m_train->setSpeed(0);
  m_train->setRotation(0);
}

void Drive::Execute() 
{
    m_train->setSpeed(m_controller->GetRightTriggerAxis() - m_controller->GetLeftTriggerAxis());
    m_train->setRotation(-m_controller->GetRightX());
    m_train->Drive(); 
}



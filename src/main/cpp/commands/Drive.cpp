// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.
#include "commands/Drive.h"


Drive::Drive(DriveTrain* subsystem) 
{
  m_train = subsystem;
  m_controller = new frc::XboxController(CONTROLLER_PORT);
}



void Drive::Initialize() 
{
  AddRequirements(m_train);
  m_train->setRotationThreshold(ROTATION_THRESHOLD * 2);
  m_train->setSpeedThreshold(SPEED_THRESHOLD * 2);
  m_train->setSpeed(0);
  m_train->setRotation(0);
}
#include <iostream>
void Drive::Execute() 
{
  //std::cout << m_controller->GetRightX() << std::endl;
  m_train->setSpeed(m_controller->GetRightTriggerAxis() - m_controller->GetLeftTriggerAxis());
  m_train->setRotation(m_controller->GetRightX()); // rotation function not written
  m_train->Drive(); 
}



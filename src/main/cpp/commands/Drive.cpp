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
  m_train->setRotationThreshold(ROTATION_THRESHOLD);
  m_train->setSpeedThreshold(SPEED_THRESHOLD);
  m_train->setSpeed(0);
  m_train->setRotation(0);
}

void Drive::Execute() 
{

  if (m_controller->GetAButtonReleased())
    m_train->setSpeedThreshold(m_train->getSpeedThreshold() + SPEED_THRESHOLD);
    
  else if (m_controller->GetXButtonReleased())
    m_train->setSpeedThreshold(m_train->getSpeedThreshold() - SPEED_THRESHOLD);

  else if (m_controller->GetYButtonReleased())
    m_train->setRotationThreshold(m_train->getRotationThreshold() + ROTATION_THRESHOLD);
    
  else if (m_controller->GetBButtonReleased())
    m_train->setRotationThreshold(m_train->getRotationThreshold() - ROTATION_THRESHOLD);


  m_train->setSpeed(m_controller->GetRightTriggerAxis() - m_controller->GetLeftTriggerAxis());
  m_train->setRotation(m_controller->GetRightX());

  m_train->Drive(); 

}



// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/Drive.h"


Drive::Drive(DriveTrain* subsystem) 
{
  m_train = subsystem;
  m_train = new DriveTrain();
  m_controller = new XboxController(XBOX_CONTROLLER_PORT);
}



void Drive::Initialize() 
{
  m_train->setRotationThreshold(FIRST_ROTATION_THRESHOLD);
  m_train->setSpeedThreshold(FIRST_SPEED_THRESHOLD);
  m_train->setSpeed(0);
  m_train->setRotation(0);
}

void Drive::Execute() 
{

  if (m_controller->GetAButtonReleased())
    m_speedThreshold = FIRST_SPEED_THRESHOLD;

  if (m_controller->GetXButtonReleased())
    m_speedThreshold = SECOND_SPEED_THRESHOLD;

  if (m_controller->GetYButtonReleased())
    m_speedThreshold = THIRD_SPEED_THRESHOLD;

  if (m_controller->GetBButtonReleased())
    m_speedThreshold = FOURTH_SPEED_THRESHOLD;

  
  if (m_controller->GetLeftY() == 1)
    m_rotationThreshold = FIRST_ROTATION_THRESHOLD;

  if (m_controller->GetLeftX() == -1)
    m_rotationThreshold = SECOND_ROTATION_THRESHOLD;

  if (m_controller->GetLeftY() == -1)
    m_rotationThreshold = THIRD_ROTATION_THRESHOLD;

  if (m_controller->GetLeftX() == 1)
    m_rotationThreshold = FOURTH_ROTATION_THRESHOLD;
  

    m_train->setRotationThreshold(m_rotationThreshold);
    m_train->setSpeedThreshold(m_speedThreshold);

    m_train->setSpeed(m_controller->GetRightTriggerAxis() - m_controller->GetLeftTriggerAxis());
    m_train->setRotation(m_controller->GetRightX());

    m_train->Drive(); 
}



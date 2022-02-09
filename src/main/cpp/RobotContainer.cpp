// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.
// צריך יותר סדר פה מארק
#include "RobotContainer.h"
#include<iostream>

RobotContainer::RobotContainer()
{
  std::cout << "container constructor called " << std::endl;
  m_driveSubsystem = new DriveTrain();
  m_driveCommand = new Drive(m_driveSubsystem);
  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {

}
frc2::Command* RobotContainer::GetTeleopCommand()
{
  return m_driveCommand;
}

frc2::Command* RobotContainer::GetAutonomousCommand() {

  return nullptr;
}

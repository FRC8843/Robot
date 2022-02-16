// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.
// צריך יותר סדר פה מארק
// מי זה?

#include "RobotContainer.h"


RobotContainer::RobotContainer()
{
  m_controller = new XboxController(CONTROLLER_PORT);
  
  m_driveSubsystem = new DriveTrain();
  m_driveCommand = new Drive(m_driveSubsystem);

  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {

}
Command* RobotContainer::GetTeleopCommand()
{
  return m_driveCommand;
}

Command* RobotContainer::GetAutonomousCommand() {

  return nullptr;
}

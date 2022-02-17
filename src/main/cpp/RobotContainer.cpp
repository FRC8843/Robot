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

  buttonA = new JoystickButton(m_controller, BUTTON_A_NUMBER);
  buttonB = new JoystickButton(m_controller, BUTTON_B_NUMBER);
  buttonX = new JoystickButton(m_controller, BUTTON_X_NUMBER);
  buttonY = new JoystickButton(m_controller, BUTTON_Y_NUMBER);


  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {
  // double speed_threshold = m_driveSubsystem ->getSpeedThreshold();
  // double rotation_threshold = m_driveSubsystem->getRotationThreshold();
  // buttonA->Debounce(100_ms).WhenPressed(
  //   m_driveSubsystem->setSpeedThreshold(
  //     rotation_threshold + 0.1;
  //   )
  //   );
  // buttonB->Debounce(100_ms).WhenPressed(
  //   m_driveSubsystem->setSpeedThreshold(
  //     rotation_threshold - 0.1;
  //   )
  //   );
  // buttonX->Debounce(100_ms).WhenPressed(
  // m_driveSubsystem->setSpeedThreshold(
  //   speed_threshold + 0.1;
  // )
  // );
  // buttonY->Debounce(100_ms).WhenPressed(
  // m_driveSubsystem->setSpeedThreshold(
  //   speed_threshold - 0.1;
  // )
  // );
}
Command* RobotContainer::GetTeleopCommand()
{
  return m_driveCommand;
}

Command* RobotContainer::GetAutonomousCommand() {

  return nullptr;
}

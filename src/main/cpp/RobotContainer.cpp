// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.
// צריך יותר סדר פה מארק
#include "RobotContainer.h"

RobotContainer::RobotContainer()
{
  this->controller = new XboxController(CONTROLLER_PORT);

  this->driveTrain = new DriveTrain();
  this->robotMap = new RobotMap();
  
  this->startAutoDriveCommand = new StartAutoDrive(driveTrain);
  this->teleopDriveCommand = new Drive(driveTrain);
  this->updateMapCommand = new UpdateMap(robotMap);

  
  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {
  //frc2::JoystickButton button = new frc2::JoystickButton(m_controller, 0);

}
Command* RobotContainer::getUpdateMapCommand(){
  return this->updateMapCommand;
}

Command* RobotContainer::getStartAutoDriveCommand(){
  return this->startAutoDriveCommand;
}
Command* RobotContainer::getTeleopDriveCommand(){
  return this->teleopDriveCommand;
}

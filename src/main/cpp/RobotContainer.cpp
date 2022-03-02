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

  buttonA = new JoystickButton(controller, BUTTON_A_NUMBER);
  buttonB = new JoystickButton(controller, BUTTON_B_NUMBER);
  buttonX = new JoystickButton(controller, BUTTON_X_NUMBER);
  buttonY = new JoystickButton(controller, BUTTON_Y_NUMBER);

  ConfigureButtonBindings();
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

void RobotContainer::ConfigureButtonBindings() 
{
  buttonA->WhileHeld(pullCommand);
  buttonB->WhileHeld(pushCommand);
  
}
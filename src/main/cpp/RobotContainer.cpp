// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.
// צריך יותר סדר פה מארק
// זין זיו תלמד לקרוא
#include "RobotContainer.h"

RobotContainer::RobotContainer()
{
  this->controller = new XboxController(CONTROLLER_PORT);

  this->driveTrain = new DriveTrain();
  this->robotMap = new RobotMap();
  
  this->startAutoDriveCommand = new StartAutoDrive(driveTrain);
  this->teleopDriveCommand = new Drive(driveTrain);
  this->updateMapCommand = new UpdateMap(robotMap);
  this->printLocation = new PrintLocation(robotMap);

  buttonA = new JoystickButton(controller, XboxController::Button::kA);
  buttonB = new JoystickButton(controller, XboxController::Button::kB);
  buttonX = new JoystickButton(controller, XboxController::Button::kX);
  buttonY = new JoystickButton(controller, XboxController::Button::kY);

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
Command* RobotContainer::getPrintLocationCommand()
{
  return this->printLocation;
}
void RobotContainer::ConfigureButtonBindings() 
{
  buttonA->WhileHeld(pullCommand());
  buttonB->WhileHeld(pushCommand());

}
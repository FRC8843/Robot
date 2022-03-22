// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "Constants.h"

#include "subsystems/DriveTrain.h"
#include "subsystems/Elevator.h"
#include "subsystems/Warden.h"

#include "commands/Drive.h"
#include "commands/StartAutoDrive.h"
#include "commands/Load.h"
#include "commands/Unload.h"
#include "commands/Throw.h"
#include "commands/CarefulDrive.h"
#include "commands/Rotate.h"
#include "commands/AutoDrive.h"


#include <frc/XboxController.h>
#include <frc2/command/button/JoystickButton.h>

using namespace frc2;
class RobotContainer 
{
 public:
  RobotContainer();

  Command* getUpdateMapCommand();
  Command* getAutoDriveCommand();
  Command* getTeleopDriveCommand();
  
 private:

//controllers 
  XboxController* controller;
//

//subsystems
  DriveTrain* driveTrain;
  Elevator* elevator;
  Warden* warden;
//

//commands
  Drive* teleopDriveCommand;
  StartAutoDrive* startAutoDriveCommand;
  Load* loadCommand;
  Unload* unloadCommand;
  Throw* throwCommand;
  CarefulDrive* carfulDriveCommand;
  Rotate* rotateCommand;
  AutoDrive* autoDriveCommand;
//

//buttons
JoystickButton* buttonA;
JoystickButton* buttonB;
JoystickButton* buttonX;
JoystickButton* buttonY;
//

  void ConfigureButtonBindings();
  void initSubsystems();
  void initCommands();
  void initButtons();
  void initControllers();
};

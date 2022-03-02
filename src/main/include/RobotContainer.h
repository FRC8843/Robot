// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "Constants.h"

#include "subsystems/DriveTrain.h"
#include "subsystems/RobotMap.h"
#include "subsystems/Elevator.h"

#include "commands/Drive.h"
#include "commands/StartAutoDrive.h"
#include "commands/UpdateMap.h"
#include "commands/Pull.h"
#include "commands/Push.h"
#include "commands/PrintLocation.h"

#include <frc/XboxController.h>
#include <frc2/command/button/JoystickButton.h>

using namespace frc2;
class RobotContainer 
{
 public:
  RobotContainer();

  Command* getUpdateMapCommand();
  Command* getStartAutoDriveCommand();
  Command* getTeleopDriveCommand();
  Command* getPrintLocationCommand();
  
 private:

//controllers 
  XboxController* controller;
//

//subsystems
  DriveTrain* driveTrain;
  RobotMap* robotMap;
  Elevator* elevator;
//

//commands
  Drive* teleopDriveCommand;
  StartAutoDrive* startAutoDriveCommand;
  UpdateMap* updateMapCommand;
  Pull* pullCommand;
  Push* pushCommand;
  PrintLocation* printLocation;
//

//buttons
JoystickButton* buttonA;
JoystickButton* buttonB;
JoystickButton* buttonX;
JoystickButton* buttonY;
//

  void ConfigureButtonBindings();
};

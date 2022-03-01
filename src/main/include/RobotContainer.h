// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "Constants.h"

#include "subsystems/DriveTrain.h"
#include "subsystems/RobotMap.h"

#include "commands/Drive.h"
#include "commands/StartAutoDrive.h"
#include "commands/UpdateMap.h"

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
   
 private:

//controllers 
  XboxController* controller;
//

//subsystems
  DriveTrain* driveTrain;
  RobotMap* robotMap;
//

//commands
  
  Drive* teleopDriveCommand;
  StartAutoDrive* startAutoDriveCommand;
  UpdateMap* updateMapCommand;
//

  void ConfigureButtonBindings();
};

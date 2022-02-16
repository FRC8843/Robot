// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/Command.h>
#include "subsystems/DriveTrain.h"
#include "commands/Drive.h"
#include <frc/XboxController.h>

using namespace frc;
using namespace frc2;

class RobotContainer {
 public:
  RobotContainer();
 

  Command* GetAutonomousCommand();
  Command* GetTeleopCommand();
     
 private:

  XboxController* m_controller;


  DriveTrain* m_driveSubsystem;
  Drive* m_driveCommand;


  void ConfigureButtonBindings();
};

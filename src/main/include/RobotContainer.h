// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/Command.h>
#include "subsystems/DriveTrain.h"
#include "commands/Drive.h"
#include "subsystems/ExampleSubsystem.h"
#include "commands/ExampleCommand.h"

class RobotContainer {
 public:
  RobotContainer();

  frc2::Command* GetAutonomousCommand();
  frc2::Command* GetTeleopCommand();
   
 private:

  //ExampleSubsystem  m_subsystem;
  //ExampleCommand  m_autonomousCommand;
  DriveTrain* m_driveSubsystem;
  Drive* m_driveCommand;


  void ConfigureButtonBindings();
};

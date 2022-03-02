// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include "subsystems/RobotMap.h"
#include <iostream>

using namespace std;
class PrintLocation : public frc2::CommandHelper<frc2::CommandBase, PrintLocation> {
 public:
  PrintLocation(RobotMap* robotMap);

  void Execute() override;

 private:
  RobotMap* map;
};

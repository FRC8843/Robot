// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include <frc/Timer.h>
#include "subsystems/DriveTrain.h"


class StartAutoDrive : public frc2::CommandHelper<frc2::CommandBase, StartAutoDrive> {
 public:
  StartAutoDrive(DriveTrain* driveTrain);

  void Initialize() override;

  void Execute() override;

  void End(bool interrupted) override;

  bool IsFinished() override;

 private:

  DriveTrain* driveTrain;
  frc::Timer timer;

};

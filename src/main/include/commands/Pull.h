// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include "subsystems/Elevator.h"
#include "Constants.h"

class Pull
    : public frc2::CommandHelper<frc2::CommandBase, Pull> {
 public:
  Pull(Elevator* elevator);

  void Initialize() override;

  void Execute() override;

  void End(bool interrupted) override;

  bool IsFinished() override;

  private:
    Elevator* elevator;
};

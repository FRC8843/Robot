// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include "subsystems/DriveTrain.h"
#include "Constants.h"
#include <frc/XboxController.h>


using namespace frc;
class Drive : public frc2::CommandHelper<frc2::CommandBase, Drive> {
 public:

    Drive(DriveTrain* driveSubsystem, XboxController* driveController);

    void Initialize() override;

    void Execute() override;

  private:

    DriveTrain* driveTrain;
    XboxController* driveController; 
};

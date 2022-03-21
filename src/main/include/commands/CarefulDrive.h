// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include <subsystems/DriveTrain.h>
#include <subsystems/Warden.h>

class CarefulDrive : public frc2::CommandHelper<frc2::CommandBase, CarefulDrive> {
 public:
  CarefulDrive(DriveTrain* driveTrain, Warden* warden);

  void Initialize() override;

  void Execute() override;

  void End(bool interrupted) override;

  bool IsFinished() override;
  
 private:
  
  Warden* warden;
  DriveTrain* train;
  int direction = -1;


};

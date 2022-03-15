// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once
#include <libraries/Point.h>
#include <frc2/command/SubsystemBase.h>
#include <subsystems/DriveTrain.h>
#include "Constants.h"

class Map : public frc2::SubsystemBase {
 public:

  Map(DriveTrain* driveTrain);
  void update();
  Point getLocation();


 private:
 double getVelocityX();
 double getVelocityY();
 double getVelocityZ();

  Point location;
  DriveTrain* driveTrain;
};

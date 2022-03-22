// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/Ultrasonic.h>
#include "Constants.h"

class Warden : public frc2::SubsystemBase {
 public:
  Warden();

  
  void Periodic() override;
  double getFrontDistance();
  double getBackDistance();
  bool isNear(double distance);

 private:
  frc::Ultrasonic* frontSensor;
  frc::Ultrasonic* backSensor;
};

// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "rev/CANSparkMax.h"
#include <frc2/command/SubsystemBase.h>
#include "Constants.h"

using namespace rev;

class Elevator : public frc2::SubsystemBase {
 public:
  Elevator();
  void setMotor(double percentage);

 private:
    CANSparkMax* elevatorMotor;

 
  
};

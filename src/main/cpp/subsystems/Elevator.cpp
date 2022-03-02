// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Elevator.h"

Elevator::Elevator()
{
    this->elevatorMotor = new CANSparkMax(ELEVATOR_MOTOR_ID, CANSparkMax::MotorType::kBrushed);
}

void Elevator::setMotor(double percentage)
{
    elevatorMotor->Set(percentage);
}
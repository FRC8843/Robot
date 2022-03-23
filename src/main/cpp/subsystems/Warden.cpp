// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Warden.h"

Warden::Warden() {
    backSensor = new frc::Ultrasonic(BACK_ULTRASONIC_PINOUT);
    frontSensor = new frc::Ultrasonic(FRONT_ULTRASONIC_PINOUT);

    backSensor->SetAutomaticMode(true);
    frontSensor->SetAutomaticMode(true);
}
double Warden::getBackDistance(){
    return (double)backSensor->GetRange() - ULTRASONIC_MEASURE_OFFSET - BACK_ULTRASONIC_OFFSET;
}
double Warden::getFrontDistance(){
    return (double)backSensor->GetRange() - ULTRASONIC_MEASURE_OFFSET - FRONT_ULTRASONIC_OFFSET;
}

bool Warden::isNear(double distance){
       return getBackDistance() <= distance; // ||
    //          getFrontDistance() <= distance;
}
void Warden::Periodic() {}

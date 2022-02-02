// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Constants.h"
#include "subsystems/DriveTrain.h"

DriveTrain::DriveTrain() 
{   
    this->m_leftLeadingMotor = new CANSparkMax(LEFT_LEADING_MOTOR_ID, CANSparkMax::MotorType::kBrushed);
    this->m_leftFollowingMotor = new CANSparkMax(LEFT_FOLLOWING_MOTOR_ID, CANSparkMax::MotorType::kBrushed);
    this->m_rightFollowingMotor = new CANSparkMax(RIGHT_FOLLOWING_MOTOR_ID, CANSparkMax::MotorType::kBrushed);
    this->m_rightLeadingMotor = new CANSparkMax(RIGHT_LEADING_MOTOR_ID, CANSparkMax::MotorType::kBrushed);
    
    this->m_drive = new DifferentialDrive(m_leftLeadingMotor, m_rightLeadingMotor);
}


void DriveTrain::Periodic() 
{

}


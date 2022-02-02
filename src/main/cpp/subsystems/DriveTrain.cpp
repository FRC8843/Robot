// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Constants.h"
#include "subsystems/DriveTrain.h"

DriveTrain::DriveTrain() 
{
    this->m_leftLeadingMotor{LEFT_LEADING_MOTOR_ID, CANSparkMax::MotorType::kBrushed};
    this->m_leftFollowingMotor{LEFT_FOLLOWING_MOTOR_ID, CANSparkMax::MotorType::kBrushed};
    this->m_rightFollowingMotor{RIGHT_FOLLOWING_MOTOR_ID, CANSparkMax::MotorType::kBrushed};
    this->m_rightLeadingMotor{RIGHT_LEADING_MOTOR_ID, CANSparkMax::MotorType::kBrushed};
    this->m_drive{m_leftLeadingMotor, m_rightLeadingMotor};
}

// This method will be called once per scheduler run
void DriveTrain::Periodic() 
{

}


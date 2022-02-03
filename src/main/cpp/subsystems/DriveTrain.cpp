#include "subsystems/DriveTrain.h"

DriveTrain::DriveTrain() 
{   
    m_leftLeadingMotor = new CANSparkMax(LEFT_LEADING_MOTOR_ID, CANSparkMax::MotorType::kBrushed);
    m_leftFollowingMotor = new CANSparkMax(LEFT_FOLLOWING_MOTOR_ID, CANSparkMax::MotorType::kBrushed);
    m_rightFollowingMotor = new CANSparkMax(RIGHT_FOLLOWING_MOTOR_ID, CANSparkMax::MotorType::kBrushed);
    m_rightLeadingMotor = new CANSparkMax(RIGHT_LEADING_MOTOR_ID, CANSparkMax::MotorType::kBrushed);

    m_drive = new DifferentialDrive(*m_leftLeadingMotor, *m_rightLeadingMotor);
}

void DriveTrain::setRotationThreshold(double rotationThreshold)
{
    m_rotationThreshold = rotationThreshold;
}

void DriveTrain::setSpeedThreshold(double speedThreshold)
{
    m_rotationThreshold = speedThreshold;
}

void DriveTrain::setSpeed(double speed)
{
    m_speed = speed;
}

void DriveTrain::setRotation(double rotation)
{
    m_rotationThreshold = rotation;
}

void DriveTrain::Periodic() 
{
    if (m_speed > m_speedThreshold)
        setSpeed(m_speedThreshold);

    if (m_rotation > m_rotationThreshold)
        setRotation(m_rotationThreshold);

    m_drive->ArcadeDrive(m_rotation, m_speed);
}


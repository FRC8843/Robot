#include "subsystems/DriveTrain.h"

DriveTrain::DriveTrain() 
{   
    
    m_leftLeadingMotor = new CANSparkMax(LEFT_LEADING_MOTOR_ID, CANSparkMax::MotorType::kBrushed);
    m_leftFollowingMotor = new CANSparkMax(LEFT_FOLLOWING_MOTOR_ID, CANSparkMax::MotorType::kBrushed);
    m_rightFollowingMotor = new CANSparkMax(RIGHT_FOLLOWING_MOTOR_ID, CANSparkMax::MotorType::kBrushed);
    m_rightLeadingMotor = new CANSparkMax(RIGHT_LEADING_MOTOR_ID, CANSparkMax::MotorType::kBrushed);
    m_leftFollowingMotor->Follow(*m_leftLeadingMotor);
    m_rightFollowingMotor->Follow(*m_rightLeadingMotor);

    m_drive = new DifferentialDrive(*m_leftLeadingMotor, *m_rightLeadingMotor);


}

DriveTrain::~DriveTrain()
{
    delete m_leftLeadingMotor;
    delete m_leftFollowingMotor;
    delete m_rightLeadingMotor;
    delete m_rightLeadingMotor;
    delete m_drive;
}


void DriveTrain::setRotationThreshold(double rotationThreshold)
{
m_rotationThreshold = rotationThreshold;
}

void DriveTrain::setSpeedThreshold(double speedThreshold)
{
m_speedThreshold = speedThreshold;
}

void DriveTrain::setSpeed(double speed)
{
m_speed = speed;
}

void DriveTrain::setRotation(double rotation)
{
m_rotation = rotation;
}


double DriveTrain::getSpeed()
{
return  m_speed;
}

double DriveTrain::getRotation()
{
return m_rotation;
}

double DriveTrain::getRotationThreshold()
{
return m_rotationThreshold;
}

double DriveTrain::getSpeedThreshold()
{
return m_speedThreshold;
}


void DriveTrain::Drive() 
{
    if (m_speed > m_speedThreshold)
        setSpeed(m_speedThreshold);
    else if(m_speed < -m_speedThreshold)
        setSpeed(-m_speedThreshold);

    if (m_rotation > m_rotationThreshold)
        setRotation(m_rotationThreshold);
    else if(m_rotation < -m_rotationThreshold)
        setRotation(-m_rotationThreshold);
    // m_speed *= m_speedThreshold;
    // m_rotation *= m_rotationThreshold;

    m_drive->ArcadeDrive(m_rotation, m_speed);
}


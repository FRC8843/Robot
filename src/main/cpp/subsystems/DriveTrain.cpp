#include "subsystems/DriveTrain.h"
#include "math.h"

DriveTrain::DriveTrain() 
{   
   
    m_leftLeadingMotor = new CANSparkMax(LEFT_LEADING_MOTOR_ID, CANSparkMax::MotorType::kBrushed);
    m_leftFollowingMotor = new CANSparkMax(LEFT_FOLLOWING_MOTOR_ID, CANSparkMax::MotorType::kBrushed);
    m_rightFollowingMotor = new CANSparkMax(RIGHT_FOLLOWING_MOTOR_ID, CANSparkMax::MotorType::kBrushed);
    m_rightLeadingMotor = new CANSparkMax(RIGHT_LEADING_MOTOR_ID, CANSparkMax::MotorType::kBrushed);

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

double map(double x, double in_min, double in_max, double out_min, double out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
void DriveTrain::Drive() 
{
    m_speed = map(m_speed, 0, 1.0, 0, m_speedThreshold);
    m_rotation = map(m_rotation, 0, 1.0, 0, m_rotationThreshold);
    m_drive->ArcadeDrive(m_rotation, m_speed);
}


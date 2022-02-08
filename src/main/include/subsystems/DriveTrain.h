
#pragma once

#include "rev/CANSparkMax.h"
#include <frc/drive/DifferentialDrive.h>
#include <frc2/command/SubsystemBase.h>
#include "Constants.h"

/// Main subsystem of the robot. In charge of basic operations with spark motors.



using namespace rev;
using namespace frc;

class DriveTrain : public frc2::SubsystemBase
{
    public:
        DriveTrain();
        void Drive();
        void setSpeedThreshold(double);
        void setRotationThreshold(double);
        void setRotation(double);
        void setSpeed(double);


    private:

        CANSparkMax* m_leftLeadingMotor;
        CANSparkMax* m_leftFollowingMotor;
        CANSparkMax* m_rightFollowingMotor;
        CANSparkMax* m_rightLeadingMotor;
        DifferentialDrive* m_drive;

        double m_speedThreshold;
        double m_rotationThreshold;
        double m_rotation;
        double m_speed;


        
};


//        DOCUMENTATION:
//  
//    Periodic -> executes the main drive logic
//    setSpeedThresold -> sets the speed Threshold of the robot     (use constants) 
//    setRotationThreshold -> sets the rotation speed of the robot  (use constants)
//    setSpeed -> sets the speed of the robot
//    setRotation -> sets the rotation of the robot

// all the rotation and speed variables are in range between -1 and 1
// when 0 is no speed/no rotation.

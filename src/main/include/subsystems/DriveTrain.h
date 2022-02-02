
#pragma once
#include "rev/CANSparkMax.h"
#include <frc/drive/DifferentialDrive.h>
#include <frc2/command/Subsystem.h>


/// Main subsystem of the robot. In charge of basic operations with spark motors.



using namespace rev;
using namespace frc;
class DriveTrain : public frc2::Subsystem
{
    public:
        DriveTrain();
        void Periodic() override;
        void addRotationThreshold();
        void addSpeedThreshold();



    protected:


    private:

        CANSparkMax* m_leftLeadingMotor;
        CANSparkMax* m_leftFollowingMotor;
        CANSparkMax* m_rightFollowingMotor;
        CANSparkMax* m_rightLeadingMotor;
        DifferentialDrive* m_drive;

        
};


//        DOCUMENTATION:
//  
//    Periodic -> executes a set of commands in a loop ? (not figured which commands yet)


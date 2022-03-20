
#include "Robot.h"
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc2/command/CommandScheduler.h>
#include <cameraserver/CameraServer.h>

void Robot::RobotInit() 
{
  frc::CameraServer::StartAutomaticCapture();
  teleopCommand = container.getTeleopDriveCommand();
  autonomousCommand = container.getStartAutoDriveCommand();
} 


void Robot::RobotPeriodic() {
  frc2::CommandScheduler::GetInstance().Run();
}


void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {}


void Robot::AutonomousInit()
{
  if (autonomousCommand != nullptr)
    autonomousCommand->Schedule();
}

void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() 
{
 
  if(teleopCommand != nullptr)
    teleopCommand->Schedule();
}


void Robot::TeleopPeriodic()
{

}


#include <frc/Ultrasonic.h>
#include <iostream>
frc::Ultrasonic dSensor = frc::Ultrasonic(3,4);
void Robot::TestPeriodic() 
{
std::cout << (float)dSensor.GetRange() << std::endl;
}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif

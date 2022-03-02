
#include "Robot.h"
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc2/command/CommandScheduler.h>
#include <cameraserver/CameraServer.h>

void Robot::RobotInit() 
{
  frc::CameraServer::StartAutomaticCapture();
  container.getUpdateMapCommand()->Schedule();
  
  //for test:
  container.getPrintLocationCommand()->Schedule();

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


void Robot::TestPeriodic() 
{

}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif

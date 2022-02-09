
#include "Robot.h"
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc2/command/CommandScheduler.h>

void Robot::RobotInit() {
  m_container = RobotContainer();
} 


void Robot::RobotPeriodic() {
  frc2::CommandScheduler::GetInstance().Run();
}


void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {}


void Robot::AutonomousInit() {
  m_autonomousCommand = m_container.GetAutonomousCommand();

  if (m_autonomousCommand != nullptr) {
    m_autonomousCommand->Schedule();
  }
}

void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() 
{
  m_teleopCommand = m_container.GetTeleopCommand();
  if(m_teleopCommand != nullptr)
    m_teleopCommand->Schedule();
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


#include "Robot.h"
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc2/command/CommandScheduler.h>

void Robot::RobotInit() {

}

/**
 * This function is called every robot packet, no matter the mode. Use
 * this for items like diagnostics that you want to run during disabled,
 * autonomous, teleoperated and test.
 *
 * <p> This runs after the mode specific periodic functions, but before
 * LiveWindow and SmartDashboard integrated updating.
 */
void Robot::RobotPeriodic() {
  frc2::CommandScheduler::GetInstance().Run();
}


void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {}


void Robot::AutonomousInit() {
  // m_autonomousCommand = m_container.GetAutonomousCommand();

  // if (m_autonomousCommand != nullptr) {
  //   m_autonomousCommand->Schedule();
  // }
}

void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {

  // if (m_autonomousCommand != nullptr) {
  //   m_autonomousCommand->Cancel();
  //   m_autonomousCommand = nullptr;
  // }
}


void Robot::TeleopPeriodic() {}


void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif

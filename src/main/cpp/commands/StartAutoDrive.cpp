#include "commands/StartAutoDrive.h"

StartAutoDrive::StartAutoDrive(DriveTrain* driveTrain) {
  //AddRequirements(driveTrain);
  this->driveTrain = driveTrain;
  timer = frc::Timer();
}

void StartAutoDrive::Initialize() 
{
  driveTrain->setRotationThreshold(MAX_ROTATION_THRESHOLD);
  driveTrain->setSpeedThreshold(MAX_SPEED_THRESHOLD);
  driveTrain->setSpeed(0);
  driveTrain->setRotation(0);
  timer.Start();
}

void StartAutoDrive::Execute() 
{
  driveTrain->setSpeed(ROBOT_AUTO_DRIVING_SPEED);
  driveTrain->Drive();
}

void StartAutoDrive::End(bool interrupted) 
{
  timer.Reset();
}

bool StartAutoDrive::IsFinished()
 {  
  return timer.HasElapsed((units::time::second_t)ROBOT_AUTO_DRIVING_TIME); 
 }

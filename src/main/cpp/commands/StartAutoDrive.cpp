
#include "commands/StartAutoDrive.h"

StartAutoDrive::StartAutoDrive(DriveTrain* driveTrain) {
  AddRequirements(driveTrain);
  this->driveTrain = driveTrain;
  timer = frc::Timer();
}


void StartAutoDrive::Initialize() 
{
  driveTrain->setRotationThreshold(0.8);
  driveTrain->setSpeedThreshold(0.8);
  driveTrain->setSpeed(0);
  driveTrain->setRotation(0);
  timer.Start();
}


void StartAutoDrive::Execute() 
{
  driveTrain->setSpeed(0.3);
  driveTrain->Drive();
}


void StartAutoDrive::End(bool interrupted) 
{
  timer.Reset();
}


bool StartAutoDrive::IsFinished()
 {  
  return timer.HasElapsed((units::time::second_t)(1)); // Questionable ??
 }

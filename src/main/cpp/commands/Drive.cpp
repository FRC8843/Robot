
#include "commands/Drive.h"
#include <iostream>

Drive::Drive(DriveTrain* driveSubsystem, XboxController* driveController) 
{
  this->driveTrain = driveSubsystem;
  this->driveController = driveController; 
}



void Drive::Initialize() 
{
  AddRequirements(driveTrain);
  driveTrain->setRotationThreshold(MAX_SPEED_THRESHOLD);
  driveTrain->setSpeedThreshold(MAX_ROTATION_THRESHOLD);
  driveTrain->setSpeed(0);
  driveTrain->setRotation(0);
}

void Drive::Execute() 
{
 driveTrain->setSpeed(driveController->GetLeftTriggerAxis() -driveController->GetRightTriggerAxis());
 driveTrain->setRotation(driveController->GetRightX());

 driveTrain->Drive(); 
}


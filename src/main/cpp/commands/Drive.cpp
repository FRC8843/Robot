
#include "commands/Drive.h"
#include <iostream>

Drive::Drive(DriveTrain* subsystem) 
{
  m_train = subsystem;
  m_controller = new XboxController(CONTROLLER_PORT);
}



void Drive::Initialize() 
{
  AddRequirements(m_train);
  m_train->setRotationThreshold(0.8);
  m_train->setSpeedThreshold(0.8);
  m_train->setSpeed(0);
  m_train->setRotation(0);
}

void Drive::Execute() 
{

  m_train->setSpeed( m_controller->GetLeftTriggerAxis() - m_controller->GetRightTriggerAxis());
  m_train->setRotation(m_controller->GetRightX());

  m_train->Drive(); 

}



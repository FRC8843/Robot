#include "RobotContainer.h"

RobotContainer::RobotContainer()
{
  this->controller = new XboxController(CONTROLLER_PORT);

  this->driveTrain = new DriveTrain();
  
  this->startAutoDriveCommand = new StartAutoDrive(driveTrain);
  this->teleopDriveCommand = new Drive(driveTrain, controller);

  this->elevator = new Elevator();

  this->loadCommand = new Load(elevator);
  this->unloadCommand = new Unload(elevator);
  this->throwCommand = new Throw(elevator);

  buttonA = new JoystickButton(controller, XboxController::Button::kA);
  buttonB = new JoystickButton(controller, XboxController::Button::kB);
  buttonX = new JoystickButton(controller, XboxController::Button::kX);
  buttonY = new JoystickButton(controller, XboxController::Button::kY);

 
  ConfigureButtonBindings();
}




Command* RobotContainer::getStartAutoDriveCommand(){
  return this->startAutoDriveCommand;
}
Command* RobotContainer::getTeleopDriveCommand(){
  return this->teleopDriveCommand;
}

void RobotContainer::ConfigureButtonBindings() 
{
  buttonA->WhileHeld(loadCommand);
  buttonB->WhileHeld(unloadCommand);
  buttonX->WhileHeld(throwCommand);
}
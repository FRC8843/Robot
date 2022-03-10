#include "RobotContainer.h"

RobotContainer::RobotContainer()
{
  this->controller = new XboxController(CONTROLLER_PORT);

  this->driveTrain = new DriveTrain();
  this->robotMap = new RobotMap();
  
  this->startAutoDriveCommand = new StartAutoDrive(driveTrain);
  this->teleopDriveCommand = new Drive(driveTrain, controller);
  this->updateMapCommand = new UpdateMap(robotMap);
  this->printLocation = new PrintLocation(robotMap);

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


Command* RobotContainer::getUpdateMapCommand(){
  return this->updateMapCommand;
}

Command* RobotContainer::getStartAutoDriveCommand(){
  return this->startAutoDriveCommand;
}
Command* RobotContainer::getTeleopDriveCommand(){
  return this->teleopDriveCommand;
}
Command* RobotContainer::getPrintLocationCommand()
{
  return this->printLocation;
}
void RobotContainer::ConfigureButtonBindings() 
{
  buttonA->WhileHeld(loadCommand);
  buttonB->WhileHeld(unloadCommand);
  buttonX->WhileHeld(throwCommand);
}
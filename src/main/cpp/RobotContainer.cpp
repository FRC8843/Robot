#include "RobotContainer.h"

RobotContainer::RobotContainer()
{
  initControllers();
  initSubsystems();
  initCommands();
  initButtons();
 
  ConfigureButtonBindings();
}




Command* RobotContainer::getStartAutoDriveCommand(){
  return this->carfulDriveCommand;
}
Command* RobotContainer::getTeleopDriveCommand(){
  return this->teleopDriveCommand;
}

void RobotContainer::ConfigureButtonBindings() 
{
  buttonA->WhileHeld(loadCommand);
  buttonB->WhileHeld(unloadCommand);
  buttonX->WhileHeld(throwCommand);
  buttonY->WhenPressed(rotateCommand);
}
void RobotContainer::initButtons(){

  buttonA = new JoystickButton(controller, XboxController::Button::kA);
  buttonB = new JoystickButton(controller, XboxController::Button::kB);
  buttonX = new JoystickButton(controller, XboxController::Button::kX);
  buttonY = new JoystickButton(controller, XboxController::Button::kY);

}

void RobotContainer::initSubsystems(){
  this->driveTrain = new DriveTrain();
  this->elevator = new Elevator();
  this->warden = new Warden();
}

void RobotContainer::initControllers(){
  this->controller = new XboxController(CONTROLLER_PORT);

}

void RobotContainer::initCommands(){
    
  this->startAutoDriveCommand = new StartAutoDrive(driveTrain);
  this->teleopDriveCommand = new Drive(driveTrain, controller);
  this->loadCommand = new Load(elevator);
  this->unloadCommand = new Unload(elevator);
  this->throwCommand = new Throw(elevator);
  this->carfulDriveCommand = new CarefulDrive(driveTrain, warden);
  this->rotateCommand = new Rotate(driveTrain, TELEOP_ROTATION_ANGLE);
}
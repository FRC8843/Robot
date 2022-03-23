// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/AutoDrive.h"

AutoDrive::AutoDrive(DriveTrain* driveTrain, Elevator* elevator, Warden* warden) {
  this->driveTrain = driveTrain;
  this->elevator = elevator;
  this->warden = warden;

  raceGroup.AddCommands(
      DriveForward(driveTrain, nullptr, 3),
      Load(elevator)
   ) ;

  sequentialGroup.AddCommands(
    DriveBack(driveTrain, warden),
    Throw(elevator),
    raceGroup,
    DriveBack(driveTrain, warden),
    Throw(elevator),
    DriveForward(driveTrain, warden, 5)
  );


}


void AutoDrive::Initialize() {

  
  
 sequentialGroup.Schedule();


}


void AutoDrive::Execute() {}


void AutoDrive::End(bool interrupted) {}


bool AutoDrive::IsFinished() {
  return false;
}

// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/AutoDrive.h"

AutoDrive::AutoDrive(DriveTrain* driveTrain, Elevator* elevator, Warden* warden) {
  this->driveTrain = driveTrain;
  this->elevator = elevator;
  this->warden = warden;
}


void AutoDrive::Initialize() {

  frc2::SequentialCommandGroup(
    driveBack(driveBack, warden),
    Throw(Elevator),
    frc2::ParallelRaceGroup(
      driveForward(driveTrain, nullptr, 3);
      Load(elevator)
    )
    driveBack(driveBack, warden),
    Throw(Elevator)
    driveForward(driveTrain, warden, 5)
  );


}


void AutoDrive::Execute() {}


void AutoDrive::End(bool interrupted) {}


bool AutoDrive::IsFinished() {
  return false;
}

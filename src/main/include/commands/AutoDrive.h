
#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

#include <subsystems/Elevator.h>
#include <subsystems/Warden.h>
#include <subsystems/DriveTrain.h>

#include <commands/driveBack.h>
#include <commands/driveForward.h>
#include <commands/Load.h>
#include <commands/Throw.h>


class AutoDrive : public frc2::CommandHelper<frc2::CommandBase, AutoDrive> {
 public:
  AutoDrive(DriveTrain* driveTrain, Elevator* elevator, Warden* warden);

  void Initialize() override;

  void Execute() override;

  void End(bool interrupted) override;

  bool IsFinished() override;

  private:

  DriveTrain* driveTrain;
  Elevator* elevator;
  Warden* warden;
};

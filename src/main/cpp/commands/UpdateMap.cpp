// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/UpdateMap.h"

UpdateMap::UpdateMap(RobotMap* robotMap) {
  this->robotMap = robotMap;
}


void UpdateMap::Execute()
{
  this->robotMap->update();
}



bool UpdateMap::IsFinished() {
  return false;
}

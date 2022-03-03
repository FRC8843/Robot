// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/PrintLocation.h"

PrintLocation::PrintLocation(RobotMap* robotMap)
{
  this->map = robotMap;
}


void PrintLocation::Execute() 
{
  double x = map->getLocation().x;
  double y = map->getLocation().y;
  double z = map->getLocation().z;

  cout << "{" << x << ", " << y << ", " << z << "}" << endl;
}



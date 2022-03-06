// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/TestPrint.h"

TestPrint::TestPrint() {
 
}

void TestPrint::Initialize() 
{
  std::cout << "print command invoked" << std::endl;
}

void TestPrint::Execute() 
{
  
}


void TestPrint::End(bool interrupted) {}

bool TestPrint::IsFinished() {
  return false;
}

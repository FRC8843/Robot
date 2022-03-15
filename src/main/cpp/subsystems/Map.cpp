// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Map.h"

Map::Map(DriveTrain* driveTrain) {
    this->location = {0,0,0};
    this->driveTrain = driveTrain;

}

Point Map::getLocation(){
    return this->location;
}
void Map::update(){

double x = this->location.x;
double y = this->location.y;
double z = this->location.z;

x += getVelocityX() * DEFAULT_LOOP_TIME;
y += getVelocityY() * DEFAULT_LOOP_TIME;
z += getVelocityZ() * DEFAULT_LOOP_TIME;

this->location = {x,y,z};

}
//unimplemented yet

double Map::getVelocityX(){
return 0;
}

double Map::getVelocityY(){
return 0; 
}

double Map::getVelocityZ(){
return 0;
}
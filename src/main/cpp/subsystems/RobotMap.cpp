// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/RobotMap.h"

RobotMap::RobotMap(){

    accelerometer = BuiltInAccelerometer();
    LinearFilter<double> core = LinearFilter<double>::MovingAverage(10);
    filter = &core;
    currentSpeedX = currentSpeedY = currentSpeedZ = 0;
}

void RobotMap::setStartLocation(Point& location)
{
    this->location = location;
}

double RobotMap::getFilteredAcceleration(double acceleration)
{
    return filter->Calculate(acceleration);
}


 // v = v0 + a * t
 //
double RobotMap::getSpeedX()
{
    currentSpeedX += getFilteredAcceleration(accelerometer.GetX()) * DEFAULT_LOOP_TIME;
    return currentSpeedX;
}
double RobotMap::getSpeedY()
{
    currentSpeedY += getFilteredAcceleration(accelerometer.GetY()) * DEFAULT_LOOP_TIME;     //Rule: v = v0 + a * t
    return currentSpeedY; 
}
double RobotMap::getSpeedZ()
{
    currentSpeedZ += getFilteredAcceleration(accelerometer.GetZ()) * DEFAULT_LOOP_TIME;
    return currentSpeedZ;
}

void RobotMap::update()
{
    double x = this->location.x;
    double y = this->location.y;
    double z = this->location.z;
    
    x += getSpeedX() * DEFAULT_LOOP_TIME; 
    y += getSpeedY() * DEFAULT_LOOP_TIME;   //Rule : x = x0 + v * t
    z += getSpeedZ() * DEFAULT_LOOP_TIME;

    this->location = {x, y, z};
}   
Point RobotMap::getLocation()
{
    return this->location;
}

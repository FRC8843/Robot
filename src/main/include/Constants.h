// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#define LEFT_LEADING_MOTOR_ID 11             
#define LEFT_FOLLOWING_MOTOR_ID 12           
#define RIGHT_LEADING_MOTOR_ID 21            
#define RIGHT_FOLLOWING_MOTOR_ID 22          
#define ELEVATOR_MOTOR_ID 1                  


#define CONTROLLER_PORT 0               


#define SPEED_THRESHOLD 0.1
#define ROTATION_THRESHOLD 0.1

#define MAX_SPEED_THRESHOLD 0.95
#define MAX_ROTATION_THRESHOLD 0.8
#define ELEVATOR_UNLOAD_SPEED 0.3
#define ELEVATOR_LOAD_SPEED 0.3
#define ELEVATOR_THROW_SPEED 0.85

#define DEFAULT_LOOP_TIME 0.2

#define ROBOT_AUTO_DRIVING_TIME 3
#define ROBOT_AUTO_DRIVING_SPEED 0.70

#define FRONT_ULTRASONIC_PINOUT 1,6 //trig, echo
#define BACK_ULTRASONIC_PINOUT 9, 7
#define ULTRASONIC_MEASURE_OFFSET 2 //centimeters
#define FRONT_ULTRASONIC_OFFSET 20  // <- measurment needed 
#define BACK_ULTRASONIC_OFFSET 20 // <- measurment needed
#define IMPACT_DISTANCE 10 //centimiters


#define TELEOP_ROTATION_ANGLE 180
#define ROTATION_TIME_RATIO 0.08
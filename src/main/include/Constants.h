// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

///////////////////////////////////////////////
//             Spark Max ID's                //
//                                           //
const short LEFT_LEADING_MOTOR_ID = 11;      //
const short LEFT_FOLLOWING_MOTOR_ID = 12;    //
const short RIGHT_LEADING_MOTOR_ID = 21;     //
const short RIGHT_FOLLOWING_MOTOR_ID = 22;   //
//                                           //
//                                           //
///////////////////////////////////////////////


///////////////////////////////////////////////
//            Robot Controllers              //
//                                           //
const short CONTROLLER_PORT = 0;    //
//                                           //
//                                           //
///////////////////////////////////////////////


///////////////////////////////////////////////
//            Driving Thresolds              //
//                                           //
const double FIRST_SPEED_THRESHOLD = 0.25;   //
const double SECOND_SPEED_THRESHOLD = 0.5;   //
const double THIRD_SPEED_THRESHOLD = 0.75;   //
const double FOURTH_SPEED_THRESHOLD = 1  ;   //
//                                           //
const double FIRST_ROTATION_THRESHOLD = 0.25;//
const double SECOND_ROTATION_THRESHOLD = 0.5;//
const double THIRD_ROTATION_THRESHOLD = 0.75;//
const double FOURTH_ROTATION_THRESHOLD = 1  ;//
// 

//                                           //
//                                           //
///////////////////////////////////////////////

#ifdef ADD_DRIVING_THRESHOLDS

#define SPEED_THRESHOLD 0.1
#define ROTATION_THRESHOLD 0.1
#define MAX_SPEED_THRESHOLD 1.0
#define MAX_ROTATION_THRESHOLD 1.0


#endif
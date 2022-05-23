#include <avr/wdt.h>
#include "DeviceDriverSet_xxx0.h"
#include "ApplicationFunctionSet_xxx0.cpp"

// Compiler was yelling at me for some reason so I decided to put the function here. 
// It should be in DeviceDriverSet_xxx0.cpp though as a part of the DeviceDriverSet_Motor class though.
// Please clean my code if you can. 
int straight(ConquerorCarMotionControl direction, int distance /*In centimeters */) {
  
  int cmPerSecond = 79; // Calibrate based on surface

  float msecondsToTravel = distance/cmPerSecond * 1000;

  int millisecondsToTravel = round(msecondsToTravel);

  ApplicationFunctionSet_ConquerorCarMotionControl(direction, 250 );

  delay(millisecondsToTravel);

  ApplicationFunctionSet_ConquerorCarMotionControl(stop_it, 250 );

  return 0;
  
}

DeviceDriverSet_Motor AppMotor;
Application_xxx Application_ConquerorCarxxx0;
MPU6050_getdata AppMPU6050getdata;
int time1 = 0;
int time2 = 0;
ConquerorCarMotionControl status = Forward;

void setup() {
  delay(10000);
  Serial.begin(9600);
  AppMotor.DeviceDriverSet_Motor_Init();
  AppMPU6050getdata.MPU6050_dveInit();
  delay(2000);
  AppMPU6050getdata.MPU6050_calibration();
  delay(2000);
  ApplicationFunctionSet_ConquerorCarMotionControl(status, 250 );  
  delay(1000);
  ApplicationFunctionSet_ConquerorCarMotionControl(stop_it, 250 );

//  straight(status, 122);

}

void loop() {
//  ApplicationFunctionSet_ConquerorCarMotionControl(status, 250);
//  time2 = millis();
//  if (3000 < abs(time2 - time1))
//  {
//    if (status == Forward)
//    {
//      status = Backward;
//    }
//    else
//    {
//      status = Forward;
//    }
//    time1 = time2;
//  }

//  AppMotor.turn(90); //Turns the robot 90 degrees clockwise, relative to its starting position.
//  delay(2000);
//  AppMotor.turn(-90); //Turns the robot 90 degrees counterclockwise, relative to its starting position.
//  delay(2000);
//  AppMotor.turn(0); //Turns robot to its starting position.
//  delay(2000);
//  AppMotor.turn(-120);
//  delay(2000);
//  AppMotor.turn(120);
//  delay(2000);
//  AppMotor.turn(150);
//  delay(2000);
//  AppMotor.turn(-150);
//  delay(2000);
//  AppMotor.turn(-180);
//  delay(2000);
//  AppMotor.turn(180);
//  delay(2000);
//  AppMotor.turn(-270);
//  delay(2000);
//  AppMotor.turn(270);
//  delay(2000);
//  AppMotor.turn(-360);
//  delay(2000);
//  AppMotor.turn(360);
//  delay(2000);
  
}
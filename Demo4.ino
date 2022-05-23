#include <avr/wdt.h>
#include "DeviceDriverSet_xxx0.h"
#include "ApplicationFunctionSet_xxx0.cpp"

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
//  delay(10000);
//  ApplicationFunctionSet_ConquerorCarMotionControl(status, 250 );  80 cm per second is the speed of the robot
//  delay(1000);
//  ApplicationFunctionSet_ConquerorCarMotionControl(stop_it, 250 );

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

  AppMotor.turn(90); //Turns the robot 90 degrees clockwise, relative to its starting position.
  delay(2000);
  AppMotor.turn(-90); //Turns the robot 90 degrees counterclockwise, relative to its starting position.
  delay(2000);
  AppMotor.turn(0); //Turns robot to its starting position.
  delay(2000);
  AppMotor.turn(-120);
  delay(2000);
  AppMotor.turn(120);
  delay(2000);
  AppMotor.turn(150);
  delay(2000);
  AppMotor.turn(-150);
  delay(2000);
  AppMotor.turn(-180);
  delay(2000);
  AppMotor.turn(180);
  delay(2000);
  AppMotor.turn(-270);
  delay(2000);
  AppMotor.turn(270);
  delay(2000);
  AppMotor.turn(-360);
  delay(2000);
  AppMotor.turn(360);
  delay(2000);
  
}
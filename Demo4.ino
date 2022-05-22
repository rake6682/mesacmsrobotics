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
  delay(20000);
  Serial.begin(9600);
  AppMotor.DeviceDriverSet_Motor_Init();
  AppMPU6050getdata.MPU6050_dveInit();
  AppMPU6050getdata.MPU6050_calibration();
  delay(2000);
//  delay(10000);
//  ApplicationFunctionSet_ConquerorCarMotionControl(status, 250 );  80 cm per second is the speed of the robot
//  delay(1000);
//  ApplicationFunctionSet_ConquerorCarMotionControl(stop_it, 250 );
  AppMotor.turn(90); //meant to be 90 degrees to the right(This line goes in an infinite loop after tuning about 500-540 degrees)
  delay(2000);
  AppMotor.turn(-90); //meant to turn 90 degrees left(This line never executes)
  delay(2000);

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
  
}
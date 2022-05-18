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
  Serial.begin(9600);
  AppMotor.DeviceDriverSet_Motor_Init();
  AppMPU6050getdata.MPU6050_dveInit();
  delay(5000);
  AppMPU6050getdata.MPU6050_calibration();
//  delay(10000);
//  ApplicationFunctionSet_ConquerorCarMotionControl(status /*direction*/, 250 /*speed*/); 80 cm per second
//  delay(1000);
//  ApplicationFunctionSet_ConquerorCarMotionControl(stop_it /*direction*/, 250 /*speed*/);
    ApplicationFunctionSet_ConquerorCarTurn(90);
  


}

void loop() {
//  ApplicationFunctionSet_ConquerorCarMotionControl(status /*direction*/, 250 /*speed*/);
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
//  
}

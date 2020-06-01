#include "Arduino.h"
#include "YahBoom_OMIBOX.h"


YahBoom_OMIBOX OMIBOX;
double i;
YahBoom_OMIBOX_IRrecv cIR_remote;
YahBoom_OMIBOX_RGBLED cRGB(8, 5);
YahBoom_OMIBOX_Buzzer cBuzzer(6);
YahBoom_OMIBOX_MotorServo cMotor;
YahBoom_OMIBOX_Matrix cMatrix;

void setup()
{
    OMIBOX.Init();
  cIR_remote.YahBoom_OMIBOX_IRrecv_Init();
  cRGB.RGBLED_Init();
  cMotor.YahBoom_OMIBOX_MotorServo_Init();
  cMatrix.YahBoom_OMIBOX_Matrix_Init();
}

void loop()
{
  i=cIR_remote.IR_Deal();
  if(i == 1)
  {
    cRGB.RGBLED_Show_All(0,0,0);
  }
  if(i == 2)
  {
    cRGB.RGBLED_Show_All(200,200,200);
  }
  if(i == 3)
  {
    cBuzzer.setBuzzer_Tone(392, 1);
  }
  if(i == 4)
  {
    cMotor.LeftMotor(1, 100);
    cMotor.RightMotor(1, 100);
    delay(0.3*1000);
    cMotor.LeftMotor(1, 0);
    cMotor.RightMotor(1, 0);
  }
  if(i == 5)
  {
    cMotor.LeftMotor(2, 100);
    cMotor.RightMotor(2, 100);
    delay(0.3*1000);
    cMotor.LeftMotor(1, 0);
    cMotor.RightMotor(1, 0);
  }
  if(i == 6)
  {
    cMotor.LeftMotor(2, 0);
    cMotor.RightMotor(1, 50);
    delay(0.3*1000);
    cMotor.LeftMotor(1, 0);
    cMotor.RightMotor(1, 0);
  }
  if(i == 7)
  {
    cMotor.LeftMotor(1, 50);
    cMotor.RightMotor(1, 0);
    delay(0.3*1000);
    cMotor.LeftMotor(1, 0);
    cMotor.RightMotor(1, 0);
  }
  if(i == 8)
  {
    cMotor.LeftMotor(2, 100);
    cMotor.RightMotor(1, 100);
    delay(0.3*1000);
    cMotor.LeftMotor(1, 0);
    cMotor.RightMotor(1, 0);
  }
  if(i == 9)
  {
    cMotor.LeftMotor(1, 100);
    cMotor.RightMotor(2, 100);
    delay(0.3*1000);
    cMotor.LeftMotor(1, 0);
    cMotor.RightMotor(1, 0);
  }
  if(i == 10)
  {
    cRGB.RGBLED_Show_All(200,0,0);
  }
  if(i == 12)
  {
    cRGB.RGBLED_Show_All(0,200,0);
  }
  if(i == 11)
  {
    cRGB.RGBLED_Show_All(0,0,200);
  }
  if(i == 13)
  {
    cMatrix.Static_picture(5);
  }
  if(i == 14)
  {
    cMatrix.Static_picture(9);
  }
  if(i == 15)
  {
    cMatrix.Static_picture(8);
  }
  if(i == 16)
  {
    cMatrix.Static_picture(7);
  }
  if(i == 17)
  {
    cMatrix.Static_picture(6);
  }
  if(i == 18)
  {
    cMatrix.Static_picture(4);
  }
  if(i == 19)
  {
    cMatrix.Static_picture(3);
  }
  if(i == 20)
  {
    cMatrix.Static_picture(2);
  }
  if(i == 21)
  {
    cMatrix.Static_picture(1);
  }

}

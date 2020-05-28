#include<Arduino.h>
#include <WMHead.h>
#include <WMBoard.h>

double angle_rad = PI/180.0;
double angle_deg = 180.0/PI;
WMRGBLed rgbLED(0,4);
WMPasBuzzer PasBuzzer(2);

WMLineFollower lineFollower1(11,12);
WMLineFollower lineFollower2(3,4);
WMLineFollower lineFollower3(A4,A5);

void setup() {
 rgbLED.setColor(0,0);
rgbLED.show();
  PasBuzzer.setBuzzerTone(87,500);

}

void loop() {
  if(lineFollower1.readSensorStatus(0)){
    PasBuzzer.setBuzzerTone(65,500);
  }

}

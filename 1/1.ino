#include <Wire.h>
#include <SparkFun_GridEYE_Arduino_Library.h>

GridEYE grideye;


void setup() {
  Wire.begin();
  grideye.begin();
  Serial.begin(9600);
}

void loop() {
  readAMG();
  delay(1000);
}

void readAMG() 
{
  for (unsigned char i = 0; i < 64; i++) 
  {
    Serial.print(grideye.getPixelTemperature(i));
    Serial.print(",");
  }
  Serial.println();
}

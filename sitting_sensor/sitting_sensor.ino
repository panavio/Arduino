// Include the libraries we need
#include "TempSensor.h"
#include "LCD.h"
#include "duduk.h"
#include "button.h"


void setup(void)
{
 
  // start serial port
  Serial.begin(9600);
  Tempsensor_init();
  Serial.print("Device 0 Resolution: ");
  Serial.print(Tempsensors.getResolution(insideThermometer), DEC); 
  Serial.println();
  LCDstart();

}

void loop(void)
{ 

  if(pencet()){
    float temp=Tempsensor_get();
    lcd.clear();
    lcd.print(temp);
    delay(100);
    int a = duduk();
    lcd.setCursor(13,0);
    lcd.print(a);
    
    if((a>500)&&(temp>28)){
      lcd.setCursor(0,1);
      lcd.print("Orang");
      tone(3, 500, 500);
      delay(100);
    }
    }
  else{
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("pencet");
      delay(1000);
  }
}

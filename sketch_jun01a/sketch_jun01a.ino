//sketch created by Akshay Joseph
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup()
{
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
  lcd.clear();
  pinMode(5, OUTPUT);
  
  lcd.setCursor(0,0);
  lcd.print("MQ5 Value");
  
  lcd.setCursor(0,1);
  lcd.print("MQ6 Value");
}

void loop()
{
  
  int MQ5Value = analogRead(A2);
  int MQ6Value = analogRead(A0);
  
  lcd.setCursor(12,0);
  lcd.print("    ");
  lcd.setCursor(12,0);
  lcd.print(MQ5Value);
  
  lcd.setCursor(12,1);
  lcd.print("    ");
  lcd.setCursor(12,1);
  lcd.print(MQ6Value);
  if((MQ5Value>150)||(MQ6Value>450)){
    //digitalWrite(5, HIGH);
  }
  else{
    //digitalWrite(5, LOW);
  }
  delay(200);
}

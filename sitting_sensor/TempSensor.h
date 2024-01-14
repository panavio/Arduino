#include <OneWire.h>
#include <DallasTemperature.h>
#include <Wire.h> 

// Data wire is plugged into port 2 on the Arduino
#define ONE_WIRE_BUS 2

// Setup a oneWire instance to communicate with any OneWire devices (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature. 
DallasTemperature Tempsensors(&oneWire);

// arrays to hold device address
DeviceAddress insideThermometer;

void Tempsensor_init(){
  Tempsensors.begin();
  if (!Tempsensors.getAddress(insideThermometer, 0)) Serial.println("Unable to find address for Device 0"); 

  Tempsensors.setResolution(insideThermometer, 9);
}

float Tempsensor_get(){
  float totaltemp = 0;
  for (int i=0;i<10;i++){
    Tempsensors.requestTemperatures();
    float tempC = Tempsensors.getTempC(insideThermometer);
    totaltemp = totaltemp + tempC;
    delay(1);
  }
  totaltemp=totaltemp/10;
  return totaltemp;
}

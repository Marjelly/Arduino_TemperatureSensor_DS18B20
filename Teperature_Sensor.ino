 
#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2

float temperature=0;

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);


void setup(void)
{
  
  Serial.begin(9600);
  sensors.begin();
}

void loop(void)
{ 
  
  sensors.requestTemperatures(); 
  Serial.println(sensors.getTempCByIndex(0));  
  temperature=sensors.getTempCByIndex(0);
}

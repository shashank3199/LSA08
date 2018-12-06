#include <LSA08.h>

LSA08 L;

void setup() 
{
  Serial.begin(9600);
  Serial2.begin(38400);
  L.AttachSerial(&Serial2);
  L.debugger.Initialize("LSA", &Serial);
}

void loop() 
{
  L.ReadLSA();
  if(L == 2)
    Serial.println("Perfectly On Line");
  else if(L == 5)
    Serial.println("Not on Line");
  else
    Serial.println("Requires Adjustement");     
}

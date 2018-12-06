#include <LSA08.h>

LSA08 L1,L2;

void setup() 
{
  Serial.begin(9600);
  Serial2.begin(38400);
  L1.AttachSerial(&Serial2);
  L1.SetBuffer(22,HIGH);
  L1.debugger.Initialize("LSA 1", &Serial);
  L2.AttachSerial(&Serial2);
  L2.SetBuffer(24,HIGH);
  L2.debugger.Initialize("LSA 2", &Serial);
}

void loop() 
{
  L1.ReadLSA();
  L2.ReadLSA();
}

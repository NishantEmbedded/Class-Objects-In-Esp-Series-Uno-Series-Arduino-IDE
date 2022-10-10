#include "LED.h"
LED L1(2);

void setup()
{
  Serial.begin(9600);
}
void loop()
{
L1.TOGGLE(2);
delay(100);
}

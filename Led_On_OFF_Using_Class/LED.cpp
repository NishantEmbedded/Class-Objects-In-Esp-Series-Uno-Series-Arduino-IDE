#include "LED.h"

//Section 1//
LED::LED(int pin)
{
  pinMode(pin,OUTPUT);
}

void LED::TURNON(int pinn)
{
  digitalWrite(pinn,HIGH);
}

void LED::TURNOFF(int pinn)
{
  digitalWrite(pinn,LOW);
}

void LED::TOGGLE(int pin)
{
  State=!State;
  digitalWrite(pin,State);
}

//Section 1 End//

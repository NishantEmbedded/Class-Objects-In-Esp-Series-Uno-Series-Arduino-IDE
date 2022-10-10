#ifndef LED_h
#define LED_h

#include <Arduino.h>

class LED
{
  private:
  int State=LOW;

  public:
  LED(int pin);
  void TURNON(int pin);
  void TURNOFF(int pin);
  void TOGGLE(int pin);
};
#endif

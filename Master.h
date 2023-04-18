#ifndef Master_h//if motor class is not yet defined
#define Master_h/
#include <Arduino.h>
#include <Wire.h>
void Req(){while(Wire.available()) {	// read all bytes received
Wire.Write();
  }}
void Recieved(){
	while(Wire.available()) {	// read all bytes received
	switch (Wire.Read()) {
  case 20:
    // statements

    break;
  case 21:
    // statements
    break;
  case 22:
    // statements
    break;
  case 23:
    // statements
    break;
  case 24:
    // statements
    break;
  case 25:
    // statements
    break;
  case 26:
    // statements
    break;
  default:
    // statements
    break;
}


class IO{
public:
IO();
void init();
void digitalWrite(int pin, bool value);
void digitalWrite(int pin, int value);
void digitalRead(int pin);
void slave(int pin,bool bvalue, int value);
void initSlave();
private:
};
#endif
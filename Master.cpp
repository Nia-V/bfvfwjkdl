#include "Master.h"
IO::IO(){}
void IO::init(){
  Serial.begin(9600);
Wire.begin();
}
void IO::digitalWrite(int pin, bool value){
   Wire.beginTransmission(0x08); 
	Wire.write(pin);        
	Wire.endTransmission(); 
     Wire.beginTransmission(0x08); 
	Wire.write(value);        
	Wire.endTransmission(); 
}
void IO::slave(int pin, bool value){
  int _pin = pin;
  digitalWrite((_pin-19), value);
	}
  digitalRead((_pin-19))
}
}
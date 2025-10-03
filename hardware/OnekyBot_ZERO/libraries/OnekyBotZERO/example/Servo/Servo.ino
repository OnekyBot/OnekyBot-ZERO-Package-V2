#include<OnekyBot_ZERO.h>

void setup() {
  Oneky_Setup();
}

void loop() {
servoWrite(1,0);
servoWrite(1,45);
servoWrite(1,90);
}

// C++ code
//
#include <Servo.h>

#define Servo servo1;

void setup()
{
servo1.attach(3);
servo1.write(0);
}

void loop()
{
servo1.write(0);
delay(500);
servo1.write(50);
delay(500);
servo1.write(100);
delay(500);
servo1.write(150);
delay(500);
servo1.write(180);
delay(500);
}
// C++ code

#include <Servo.h> 
#define potenciometro A0

Servo servo1;
float sensor;
float valor;

void setup()
{
pinMode(potenciometro, INPUT);
servo1.attach(3);
servo1.write(0);
Serial.begin(9600);
}

void loop()
{
sensor = analogRead(potenciometro);
valor = (map(sensor, 0, 1023, 0, 180));
Serial.print(“Valor do potênciometro é: “);
Serial.println(valor);
servo1.write(valor);
}
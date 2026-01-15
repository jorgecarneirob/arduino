// C++ code
//
// define variaveis com o valor dos pinos (para chamar por cor)
int verde = 4;
int amarelo = 3;
int vermelho = 2;
void setup()
{
//define os pinos como saída
pinMode(verde, OUTPUT);
pinMode(amarelo, OUTPUT);
pinMode(vermelho, OUTPUT);
}

void loop()
{
digitalWrite(verde, HIGH);
delay(1000); // Wait for 1000 millisecond(s)
digitalWrite(verde, LOW);
digitalWrite(amarelo, HIGH);
delay(1000); // Wait for 1000 millisecond(s)
digitalWrite(amarelo, LOW);
digitalWrite(vermelho, HIGH);
delay(1000); // Wait for 1000 millisecond(s)
digitalWrite(vermelho, LOW);
}
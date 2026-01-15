// C++ code

#define sig 2

float distancia;
int led_vermelho = 3;
int led_verde = 4;
void inicia();

void setup()
{
Serial.begin(9600);
pinMode(led_vermelho, OUTPUT);
pinMode(led_verde, OUTPUT);
}

void loop()
{
inicia();
distancia = distancia/2;
distancia = distancia*0.034029;
Serial.print(“Distancia em CM: “);
Serial.println(distancia);
delay(1000);

if (distancia < 20){
digitalWrite(led_vermelho, HIGH);
digitalWrite(led_verde, LOW);
}

else {
digitalWrite(led_vermelho, LOW);
digitalWrite(led_verde, HIGH);

}
}

void inicia(){
pinMode(sig, OUTPUT); // define o pino como saida
digitalWrite(sig, HIGH); // mandando sinal para ligar o sensor
delayMicroseconds(5); //Espera iniciar o sensor
digitalWrite(sig, LOW); // Libera porta digital

pinMode(sig, INPUT); //Define pino 2 (sig) como entrada
distancia = pulseIn(sig, HIGH); // recebe bulso do sensor com o valor da distancia
}
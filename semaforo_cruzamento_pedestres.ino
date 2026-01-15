// C++ code
//
//semaforo 1
int verde1 = 1;
int amarelo1 = 2;
int vermelho1 = 3;

//semaforo 2
int verde2 = 5;
int amarelo2 = 6;
int vermelho2 = 7;

//Pedestre 1
int p1verde = 8;
int p1vermelho = 9;

//Padestre 2
int p2verde = 10;
int p2vermelho = 11;

void setup()
{
//Modo pinos semaforo 1
pinMode(vermelho1, OUTPUT);
pinMode(amarelo1, OUTPUT);
pinMode(verde1, OUTPUT);

//Modo pinos semaforo 2
pinMode(vermelho2, OUTPUT);
pinMode(amarelo2, OUTPUT);
pinMode(verde2, OUTPUT);

//Modo pinos pedestres 1
pinMode(p1verde, OUTPUT);
pinMode(p1vermelho, OUTPUT);

//Modo pinos pedestres 2
pinMode(p2verde, OUTPUT);
pinMode(p2vermelho, OUTPUT);

}

void loop()
{
//Liga sinal verde1 e vermelho2
digitalWrite(verde1, HIGH);
digitalWrite(amarelo1, LOW);
digitalWrite(vermelho1, LOW);

digitalWrite(verde2, LOW);
digitalWrite(amarelo2, LOW);
digitalWrite(vermelho2, HIGH);

// p1vermelho e p2verde
digitalWrite(p1verde, LOW);
digitalWrite(p1vermelho, HIGH);
digitalWrite(p2verde, HIGH);
digitalWrite(p2vermelho, LOW);

delay(2000); // Wait for 1000 millisecond(s)

//Liga sinal amarelo1 e vermelhor2
digitalWrite(verde1, LOW);
digitalWrite(amarelo1, HIGH);
digitalWrite(vermelho1, LOW);

digitalWrite(verde2, LOW);
digitalWrite(amarelo2, LOW);
digitalWrite(vermelho2, HIGH);

// p1vermelho e p2verde
digitalWrite(p1verde, LOW);
digitalWrite(p1vermelho, HIGH);
digitalWrite(p2verde, HIGH);
digitalWrite(p2vermelho, LOW);
delay(1000); // Wait for 1000 millisecond(s)

//Liga sinal vermelho1 e verde2
digitalWrite(verde1, LOW);
digitalWrite(amarelo1, LOW);
digitalWrite(vermelho1, HIGH);

digitalWrite(verde2, HIGH);
digitalWrite(amarelo2, LOW);
digitalWrite(vermelho2, LOW);

// p2vermelho e p1verde
digitalWrite(p1verde, HIGH);
digitalWrite(p1vermelho, LOW);
digitalWrite(p2verde, LOW);
digitalWrite(p2vermelho, HIGH);
delay(2000); // Wait for 1000 millisecond(s)

//Liga sinal vermelho1 e amarelo2
digitalWrite(verde1, LOW);
digitalWrite(amarelo1, LOW);
digitalWrite(vermelho1, HIGH);

digitalWrite(verde2, LOW);
digitalWrite(amarelo2, HIGH);
digitalWrite(vermelho2, LOW);

// p2vermelho e p1verde
digitalWrite(p1verde, HIGH);
digitalWrite(p1vermelho, LOW);
digitalWrite(p2verde, LOW);
digitalWrite(p2vermelho, HIGH);
delay(1000); // Wait for 1000 millisecond(s)

}
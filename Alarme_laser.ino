// Programa : Alarme laser + ldr + LCD + Buzzer
// Autor : Jorge Carneiro

#include <Wire.h> //INCLUSÃO DE BIBLIOTECA
#include <LiquidCrystal_I2C.h> //INCLUSÃO DE BIBLIOTECA 
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE); //ENDEREÇO DO I2C E DEMAIS INFORMAÇÕES   
int portaLDR = A0; //Porta analógica utilizada pelo LDR  
const int buzzer = 9; //buzzer to arduino pin 9
  
void setup()  
{  
 lcd.begin (16,2); //SETA A QUANTIDADE DE COLUNAS(16) E O NÚMERO DE LINHAS(2) DO DISPLAY
 lcd.setBacklight(HIGH); //LIGA O BACKLIGHT (LUZ DE FUNDO)
 pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
 Serial.begin(9600); //Enviar e receber dados em 9600 baud
 Serial.println("Gerando valores sequenciais");
 }  
   
void loop()  
{  
  int estado = analogRead(portaLDR);  //Lê o valor fornecido pelo LDR  
    
  // Caso o valor lido na porta analógica seja maior do que 
  // 800, acende o LED  
  // Ajuste o valor abaixo de acordo com o seu circuito  
  Serial.print("O valor do LDR é:");
  Serial.println(estado);
  delay(1000);
  if (estado < 680)    
  {  
    //ALARME SEM NENHUM PROBLEMA DETECTADO
    
 tone(buzzer, 0);
  lcd.setCursor(0,0); //SETA A POSIÇÃO DO CURSOR
  lcd.print("     ALARME       "); //IMPRIME O TEXTO NO DISPLAY LCD
  lcd.setCursor(0,1); //SETA A POSIÇÃO DO CURSOR
  lcd.print("     ATIVO!       "); //IMPRIME O TEXTO NO DISPLAY LCD
  delay(2000); //INTERVALO DE 2 SEGUNDOS
  lcd.setCursor(0,0); //SETA A POSIÇÃO DO CURSOR
  lcd.print("NENHUM PROBLEMA"); //IMPRIME O TEXTO NO DISPLAY LCD
  lcd.setCursor(0,1); //SETA A POSIÇÃO DO CURSOR
  lcd.print("   DETECTADO!    "); //IMPRIME O TEXTO NO DISPLAY LCD
  delay(2000); //INTERVALO DE 2 SEGUNDOS
  lcd.setCursor(0,1); //SETA A POSIÇÃO DO CURSOR
  lcd.print("FIQUE TRANQUILO!"); //SEQUÊNCIA DE ESPAÇOS
  delay(2000); //INTERVALO DE 2 SEGUNDOS
  }  
  else  //Caso contrário, apaga o led  
  {  
    //ALARME DISPARADO!
    
  tone(buzzer, 500); // Send 1KHz sound signal...  
  lcd.setCursor(0,0); //SETA A POSIÇÃO DO CURSOR
  lcd.print("    INTRUSO      "); //IMPRIME O TEXTO NO DISPLAY LCD
  lcd.setCursor(0,1); //SETA A POSIÇÃO DO CURSOR
  lcd.print("   DETECTADO!    "); //IMPRIME O TEXTO NO DISPLAY LCD
  delay(2000); //INTERVALO DE 2 SEGUNDOS
  lcd.setCursor(0,0); //SETA A POSIÇÃO DO CURSOR
  lcd.print("  LIGANDO PARA"); //IMPRIME O TEXTO NO DISPLAY LCD
  lcd.setCursor(0,1); //SETA A POSIÇÃO DO CURSOR
  lcd.print("      190...    "); //IMPRIME O TEXTO NO DISPLAY LCD
  delay(2000); //INTERVALO DE 2 SEGUNDOS
  lcd.setCursor(0,0); //SETA A POSIÇÃO DO CURSOR
  lcd.print("NAO SE PREOCUPE."); //SEQUÊNCIA DE ESPAÇOS
  lcd.setCursor(0,1); //SETA A POSIÇÃO DO CURSOR
  lcd.print("                "); //SEQUÊNCIA DE ESPAÇOS
  delay(2000); //INTERVALO DE 2 SEGUNDOS
 
  }  
}  

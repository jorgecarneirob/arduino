//Programa: LCD 16x2 usando shield i2c
//Autor: Jorge Carneiro

 
#include <Wire.h> //INCLUSÃO DE BIBLIOTECA
#include <LiquidCrystal_I2C.h> //INCLUSÃO DE BIBLIOTECA
 
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE); //ENDEREÇO DO I2C E DEMAIS INFORMAÇÕES
 
void setup(){
 lcd.begin (16,2); //SETA A QUANTIDADE DE COLUNAS(16) E O NÚMERO DE LINHAS(2) DO DISPLAY
 lcd.setBacklight(HIGH); //LIGA O BACKLIGHT (LUZ DE FUNDO)
}
 
void loop(){
 
 //ALARME SEM NENHUM PROBLEMA DETECTADO
 
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


  //ALARME DISPARADO!
  
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

// C++ code
//
#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
lcd_1.begin(16, 2);
}

void loop()
{
lcd_1.setCursor(0, 0);
lcd_1.print(“JORGE CARNEIRO”);
lcd_1.setCursor(2, 1);
lcd_1.print(“INFORMATICA”);
lcd_1.scrollDisplayRight();
// delay(500);
}
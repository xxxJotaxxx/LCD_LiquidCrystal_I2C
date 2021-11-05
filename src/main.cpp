#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);  //the lcd address is obtained from the getDirection script, in this case 0x3F, 16 colums, 2 rows

void setup() {
  // Initialize LCD
  lcd.init();
  //Turn on the backlight
  lcd.backlight();
  // First line
  lcd.print("LCD_DISPLAY:");

}

void loop() {
  lcd.setCursor(0, 1); //lcd.setCursor(col, row)
  lcd.print("Hello World");
}
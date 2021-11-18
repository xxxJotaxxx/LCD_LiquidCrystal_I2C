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


//****************LCD 20x4*******************************************
//----------------Para el lcd 20x4------------------------------------------
/*
#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  //the lcd address is obtained from the getDirection script, in this case 0x3F, 16 colums, 2 rows

void setup() {
  // Initialize LCD
  lcd.init();
  //Turn on the backlight
  lcd.backlight();
  // First line
  lcd.print("LCD_DISPLAY:");

}

void loop() {
  lcd.setCursor(1, 1); //lcd.setCursor(col, row)
  lcd.print("Hello World");
  lcd.setCursor(2, 2); //lcd.setCursor(col, row)
  lcd.print("Hello World 2");
  lcd.setCursor(3, 3); //lcd.setCursor(col, row)
  lcd.print("Hello World 3");
}
*/
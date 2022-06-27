//*********************************************************************************
/*
Keyestudio 2021 starter learning kit
Project 15
LCD_128X32_DOT
http//www.keyestudio.com
*/
#include <lcd.h>  //add library files
lcd Lcd;  //define a Lcd class instance

void setup() {
  Lcd.Init(); //initialize
  Lcd.Clear();  //clear
}

void loop() {
  Lcd.Cursor(0, 4); //Set the first row and the eighth column to display, same as below
  Lcd.Display("KEYESTUDIO"); //Display KEYESTUDIO, same as below
  Lcd.Cursor(1, 0);
  Lcd.Display("ABCDEFGHIJKLMNOPQR");
  Lcd.Cursor(2, 0);
  Lcd.Display("123456789+-*/<>=$@");
  Lcd.Cursor(3, 0);
  Lcd.Display("%^&(){}:;'|?,.~\\[]");
}
//*********************************************************************************

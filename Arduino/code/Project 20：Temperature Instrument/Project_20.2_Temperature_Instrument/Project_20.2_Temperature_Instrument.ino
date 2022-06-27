//**********************************************************************************
/*
Keyestudio 2021 starter learning kit
Project 20.2
Temperature_Instrument
http//www.keyestudio.com
*/
#include <math.h>
#include <lcd.h>  //add library files
lcd Lcd;  //define a Lcd class instance
const float voltagePower=5.0;
const float Rs_val=4.7;//sample resistance is 4.7KΩ 
const int B=3950;
const double T1=273.15+25;//normal temperature
const double R1=10;//ordinary temperature corresponds the resistance value, unit is KΩ
char string[10];

void setup(){
Serial.begin(9600);
Lcd.Init(); //initialize
Lcd.Clear();  //clear
}

void loop(){
// attain the voltage value at A1
double digitalValue=analogRead(1);
double voltageValue=(digitalValue/1023)*5;
  
//Obtain the resistance of the thermistor through the voltage divider ratio 
double Rt=((voltagePower-voltageValue)*Rs_val)/voltageValue;

//Converted to get the temperature value 
const float t=((T1*B)/(B+T1*log(Rt/R1)))-273.15;

if(t>-100.0) //If the temperature is greater than -100°C, the LCD display voltage value,obtains the resistance value of the thermistor through the voltage division ratio and temperature value 
{
Lcd.Cursor(0,0);
Lcd.Display("C v v=");
Lcd.Cursor(0,7);
Lcd.DisplayNum(voltageValue);
Lcd.Cursor(0, 10);
Lcd.Display("V");

Lcd.Cursor(1,0);
Lcd.Display("C r v=");
Lcd.Cursor(1,7);
Lcd.DisplayNum(Rt);
Lcd.Cursor(1, 10);
Lcd.Display("R");

Lcd.Cursor(2, 0);
Lcd.Display("C t v=");
Lcd.Cursor(2, 7);
Lcd.DisplayNum(t);
Lcd.Cursor(2, 10);
Lcd.Display("C");
}
delay(300);
}
//**********************************************************************************

//**********************************************************************************
/*
Keyestudio 2021 Starter Kit
Project 9
74HC595N_control_7_LEDS
http//www.keyestudio.com
*/
int data = 4;// sets PIN 4 of the 74HC595 to datainput PIN SI
int clock = 6;//  sets PIN 6 of the 74HC595 to clock PIN SCK
int latch = 5;// sets PIN 5 of the 74HC595 to output latch RCK
int ledState = 0;
const int ON = HIGH;
const int OFF = LOW;
void setup()
{
pinMode(data, OUTPUT);
pinMode(clock, OUTPUT);
pinMode(latch, OUTPUT);
}
void loop()
{
for(int i = 0; i < 256; i++)
{
updateLEDs(i);
delay(500);
}
}
void updateLEDs(int value)
{
digitalWrite(latch, LOW);//
shiftOut(data, clock, MSBFIRST, ~value);// shift out highbyte
digitalWrite(latch, HIGH);// lock
}
//**********************************************************************************

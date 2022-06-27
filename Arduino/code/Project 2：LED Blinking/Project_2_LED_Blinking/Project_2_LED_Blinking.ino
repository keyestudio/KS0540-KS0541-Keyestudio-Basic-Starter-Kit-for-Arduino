//*************************************************************************************
/*
Keyestudio 2021 Starter Kit
Project 2
LED_Blinking 
http//www.keyestudio.com
*/
int ledPin = 10; // defines numeric pin 10.
void setup()
{
pinMode(ledPin, OUTPUT);// defines PIN with connected LED as output
}
void loop()
{
digitalWrite(ledPin, HIGH); // turn on LED
delay(1000); // wait a second.
digitalWrite(ledPin, LOW); // turn off LED
delay(1000); // wait a second
}
//*************************************************************************************

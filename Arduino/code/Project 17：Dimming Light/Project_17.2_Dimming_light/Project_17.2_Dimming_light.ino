//**********************************************************************************
/*
Keyestudio 2021 Starter Kit
Project 17.2
Dimming_light
http//www.keyestudio.com
*/
int potpin=A1;// initializes analog PIN A1 of the adjustable potentiometer
int ledpin=11;// initializes the digital PIN 11
int val=0;// defines "val" with an initial value of 0
void setup()
{
pinMode(ledpin,OUTPUT);// sets digital pin to "output"
Serial.begin(9600);// sets baudrate to 9600
}
void loop()
{
val=analogRead(potpin);// reads the analog value of analog PIN A1 and assigns it to "val"
analogWrite(ledpin,val/4);
Serial.println(val);// displays the value of "val"
}
//**********************************************************************************

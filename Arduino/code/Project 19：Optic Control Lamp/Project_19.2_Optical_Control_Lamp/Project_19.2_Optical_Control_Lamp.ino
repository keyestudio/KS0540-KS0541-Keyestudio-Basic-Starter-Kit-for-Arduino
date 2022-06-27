//**********************************************************************************
/*
Keyestudio 2021 Starter Kit
Project 19.2
Optical Control Lamp
http//www.keyestudio.com
*/
int photocellpin=A0;// initializes the analog PIN A0 connected to the photoresistor
int ledpin=11;//  initializes digital PIN 11
int val=0;// initializes the variable "val" with a value of 0
void setup()
{
pinMode(ledpin,OUTPUT);// sets digital PIN 11 to "output"
Serial.begin(9600);// sets baudrate to 9600
}
void loop()
{
val=analogRead(photocellpin);//reads the analog value of the sensor and assigns its value to "val"
Serial.println(val);//displays the value of "val"
analogWrite(ledpin,val/4);//sets brightness (Max:255)
delay(10);// waits 0.01 second
}
//**********************************************************************************

//**********************************************************************************
/*
Keyestudio 2021 Starter Kit
Project 19.1
Read_the_photosensitive_resistance_analog_value
http//www.keyestudio.com
*/
int photocellpin=A0;// initializes the analog PIN A0 connected to the photoresistor
int val=0;// initializes the variable "val" with a value of 0
void setup()
{
Serial.begin(9600);// sets baudrate to 9600
}
void loop()
{
val=analogRead(photocellpin);// reads the value of the sensor and assigns its value to "val"
Serial.println(val);// displays the value of "val"
delay(200);// waits 0.2 second
}
//**********************************************************************************

//**********************************************************************************
/*
Keyestudio 2021 Starter Kit
Project 17.1
Read_the_adjustable_potentiometer_analog_value
http//www.keyestudio.com
*/
int potpin=A1;// initializes analog PIN A1 of the potentiometer
int val=0;// defines "val" with an initial value of 0
void setup()
{
Serial.begin(9600);// sets baudrate to 9600
}
void loop()
{
val=analogRead(potpin);// reads the analog value of analog PIN A1 and assigns it to "val"
Serial.println(val);// displays the value of "val"
}
//**********************************************************************************

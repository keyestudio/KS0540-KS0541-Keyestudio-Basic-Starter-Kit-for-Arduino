//*********************************************************************************
/*
Keyestudio 2021 Starter Kit
Project 4
Traffic_Light
http//www.keyestudio.com
*/
int redled =10; // initializes digital PIN 10
int yellowled =7; // initializes digital PIN 7
int greenled =4; // initializes digital PIN 4
void setup()
{
pinMode(redled, OUTPUT);// sets digital PIN 10 to “output”
pinMode(yellowled, OUTPUT); // sets digital PIN 7 to “output”
pinMode(greenled, OUTPUT); // sets digital PIN 4 to “output”
}
void loop()
{
digitalWrite(greenled, HIGH);// turns on LED
delay(5000);// delays 5 seconds
digitalWrite(greenled, LOW); // turns off LED
for(int i=0;i<3;i++)// flashes 3 times.
{
delay(500);// delays 0.5 second
digitalWrite(yellowled, HIGH);// turns on LED
delay(500);// delays 0.5 second
digitalWrite(yellowled, LOW);// turns off LED
} 
delay(500);// delays 0.5 second
digitalWrite(redled, HIGH);// turns on LED
delay(5000);// delays 5 second
digitalWrite(redled, LOW);// turns off LED
}
//*********************************************************************************

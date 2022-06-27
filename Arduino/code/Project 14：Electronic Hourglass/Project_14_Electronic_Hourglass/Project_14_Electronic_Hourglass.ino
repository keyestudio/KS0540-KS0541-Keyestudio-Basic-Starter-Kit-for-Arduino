//**********************************************************************************
/*
Keyestudio 2021 starter learning kit
Project 14
Electronic_Hourglass
http//www.keyestudio.com
*/
const byte SWITCH_PIN = 4; // the tilt switch is connected to 4
byte switch_state = 0;
void setup()
{
     for(int i=8;i<12;i++)
  {
        pinMode(i, OUTPUT);
  } 
    pinMode(SWITCH_PIN, INPUT);
 for(int i=8;i<12;i++)
  {
    digitalWrite(i,0);
  } 
  Serial.begin(9600);
}
void loop()
{
switch_state = digitalRead(SWITCH_PIN); 
Serial.println(switch_state);
 if (switch_state == 0) 
 {
 for(int i=8;i<12;i++)
  {
    digitalWrite(i,1);
    delay(1000);
  } 
  }
   if (switch_state == 1) 
 {
   for(int i=11;i>7;i--)
   {
    digitalWrite(i,0);
    delay(1000);
   }
  }
}
//**********************************************************************************

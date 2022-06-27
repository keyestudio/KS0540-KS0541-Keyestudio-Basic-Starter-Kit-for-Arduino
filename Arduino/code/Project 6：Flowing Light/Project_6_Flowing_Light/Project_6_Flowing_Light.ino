//**********************************************************************************
/*
Keyestudio 2021 Starter Kit 
Project 6
Flowing_Light
http//www.keyestudio.com
*/
int BASE = 2 ;// I/O PIN for the first LED
int NUM = 5; // amount of LEDs
void setup()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     pinMode(i, OUTPUT);   // sets I/O PIN to "output"
   }
}
void loop()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, LOW); //sets I/O PIN to "low", turns off LEDs one after the other 
     delay(200); // delay
   }
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, HIGH);   // sets I/O PIN to "high", turns on LEDs one after the other
     delay(200);  // delay
   }  
}
//**********************************************************************************

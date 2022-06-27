//**********************************************************************************
/*
Keyestudio 2021 stater kit
Project 16.1
Small_Fan
http//www.keyestudio.com
*/
// when the rest button is pressed or power up the control board, the set function executes once
void setup() {
  // the digital 3 is taken as the OUTPUT
  pinMode(3, OUTPUT);
}

//the loop function repeats over and over again
void loop() {
  digitalWrite(3, HIGH);   // turn on the motor(HIGH)
  delay(4000);              // delay in 4s
  digitalWrite(3, LOW);    // lower the voltage, turn off the motor
  delay(3000);              // delay in 3s
}
//**********************************************************************************

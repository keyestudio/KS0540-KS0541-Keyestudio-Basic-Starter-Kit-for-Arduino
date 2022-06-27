//**********************************************************************************
/*
Keyestudio 2021 starter learning kit
Project 13
Small_Desk_Lamp
http//www.keyestudio.com
*/
int buttonPin = 5;               //the button is connected to 5
int ledPin = 12;                 // LED is interfaced with 12
int ledState = LOW;            // ledState records the state of the LED
int buttonState;                 // buttonState records the state of the button
int lastButtonState = LOW;     // lastbuttonState the state that the button is pressed before
long lastDebounceTime = 0;
long debounceDelay = 50;        
void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, ledState);
}
void loop() {
    //reading is used to save the data of the buttonPin
  int reading = digitalRead(buttonPin);

  //record the current timee once the data changes
  if (reading != lastButtonState) {
      lastDebounceTime= millis();
  }

  // wait for 50ms and determine again to make sure whether the state is as same as the state of the button
// if not, change the state of the button
// at same time, if the state of the button is high（pressed）then change the state of the led
  if ((millis() - lastDebounceTime) >debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;
      if (buttonState == HIGH) {
          ledState= !ledState;
      }
    }
  }

  digitalWrite(ledPin, ledState);

  // chnage the previous state value of the button
  lastButtonState = reading;
}
//**********************************************************************************

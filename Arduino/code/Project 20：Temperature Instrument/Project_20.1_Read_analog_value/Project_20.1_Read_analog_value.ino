//**********************************************************************************
/*
Keyestudio 2021 starter learning kit
Project 20.1
Read_the_thermistor_analog_value
http//www.keyestudio.com
*/
#include<math.h>

const float voltagePower=5.0;
const float Rs=4.7;//sample resistance is 4.7KΩ 
const int B=3950;
const double T1=273.15+25;//ordinary temperature
const double R1=10;//ordinary temperature corresponds the resistance value, unit is KΩ
void setup() {
  Serial.begin(9600);
}
void loop() { 
  //Attain the voltage value at A1
  double digitalValue=analogRead(1);
  double voltageValue=(digitalValue/1023)*5;
  Serial.print("Current voltage value=");
  Serial.println(voltageValue);
  
  //Obtain the resistance of the thermistor through the voltage divider ratio 
  double Rt=((voltagePower-voltageValue)*Rs)/voltageValue;
  Serial.print("Current registor value=");
  Serial.println(Rt);
 
  //Converted to get the temperature value 
  Serial.print("Current temperature value=");
  Serial.println(((T1*B)/(B+T1*log(Rt/R1)))-273.15);//
  Serial.println();
    
  //output for each 3 second, change the frequency
  delay(3000); 
}
//**********************************************************************************

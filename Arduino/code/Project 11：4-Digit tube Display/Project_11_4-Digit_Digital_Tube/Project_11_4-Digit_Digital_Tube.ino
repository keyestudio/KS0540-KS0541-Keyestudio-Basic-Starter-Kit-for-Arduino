//**********************************************************************************
/*
Keyestudio 2021 Starter Learning Kit
Project 11
4-Digit_Digital_Tube
http//www.keyestudio.com
*/
int a = 6;
int b = 7;
int c = 8;
int d = 9;
int e = 10;
int f = 11;
int g = 12;
int dp = 13;

int g4 = 5;
int g3 = 4;
int g2 = 3;
int g1 = 2;

// Set variables
long n = 1230;
int x = 100;
int del = 55;    // the clock fine-tuning

void setup()
{
  pinMode(g1, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(g3, OUTPUT);
  pinMode(g4, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
}
/////////////////////////////////////////////////////////////
void loop()
{
  int a=0;
  int b=0;
  int c=0;
  int d=0;
  unsigned long currentMillis = millis();

  while(d>=0)
  {
    while(millis()-currentMillis<10)
     {
      Display(1,a);
      Display(2,b);
      Display(3,c);
      Display(4,d);
     }
    currentMillis = millis(); 
    d++;  
  if (d>9) 
  {
   c++;
   d=0;
  }
    if (c>9) 
  {
   b++;
   c=0;
  }
    if (b>9) 
  {
   a++;
   b=0;
  }
    if (a>9) 
  {
   a=0;
   b=0;
   c=0;
   d=0;
  }
  }  
}
///////////////////////////////////////////////////////////////
void WeiXuan(unsigned char n)//
{
  switch (n)
  {
    case 1:
      digitalWrite(g1, LOW);
      digitalWrite(g2, HIGH);
      digitalWrite(g3, HIGH);
      digitalWrite(g4, HIGH);
      break;
    case 2:
      digitalWrite(g1, HIGH);
      digitalWrite(g2, LOW);
      digitalWrite(g3, HIGH);
      digitalWrite(g4, HIGH);
      break;
    case 3:
      digitalWrite(g1, HIGH);
      digitalWrite(g2, HIGH);
      digitalWrite(g3, LOW);
      digitalWrite(g4, HIGH);
      break;
    case 4:
      digitalWrite(g1, HIGH);
      digitalWrite(g2, HIGH);
      digitalWrite(g3, HIGH);
      digitalWrite(g4, LOW);
      break;
    default :
      digitalWrite(g1, HIGH);
      digitalWrite(g2, HIGH);
      digitalWrite(g3, HIGH);
      digitalWrite(g4, HIGH);
      break;
  }
}
void Num_0()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}
void Num_1()
{
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}
void Num_2()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}
void Num_3()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}
void Num_4()
{
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}
void Num_5()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}
void Num_6()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}
void Num_7()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}
void Num_8()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}
void Num_9()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}
void Clear()    // Clear  screens
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}
void pickNumber(unsigned char n)// select numbers
{
  switch (n)
  {
    case 0: Num_0();

      break;
    case 1: Num_1();
      break;
    case 2: Num_2();
      break;
    case 3: Num_3();
      break;
    case 4: Num_4();
      break;
    case 5: Num_5();
      break;
    case 6: Num_6();
      break;
    case 7: Num_7();
      break;
    case 8: Num_8();
      break;
    case 9: Num_9();
      break;
    default: Clear();
      break;
  }
}
void Display(unsigned char x, unsigned char Number)//Take x as the coordinate and display numbers
{
  WeiXuan(x);
  pickNumber(Number);
  delay(1);
  Clear() ; // Clear screens
}

//**********************************************************************************

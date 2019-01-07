#include <IRremote.h>

IRsend irsend;

int buttonP1 = 0;
int buttonP2 = 0;
int buttonP3 = 0;

int once = 0;

int redPin = 9;
int greenPin = 10;
int bluePin = 11;


void setup() 
{
  //Button Input
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  //RGB LED
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  //IR LED
  pinMode(3, OUTPUT);
}

void loop() 
{
  while(once == 0);
  {
    buttonFP1();
  }
}
//1st Input------------------------------------------------------------------------------------------------------------------------
void buttonFP1()
{
  int button1State = digitalRead(6);
  int button2State = digitalRead(7);
  int button3State = digitalRead(8);

  once = 1;
  
  if(button1State == HIGH)
  {
    buttonP1=1;
    delay(200);
    buttonFP2();
  }
  
  if(button2State == HIGH)
  {
    buttonP1=2;
    delay(200);
    buttonFP2();
  }
  
  if(button3State == HIGH)
  {
    buttonP1=3;
    delay(200);
    buttonFP2();
  }
  else
  {
    buttonFP1();
  }
}
//Second Input----------------------------------------------------------------------------------------------------------------------------
void buttonFP2()
{
  int button1State = digitalRead(6);
  int button2State = digitalRead(7);
  int button3State = digitalRead(8);

  if(button1State == HIGH)
  {
    buttonP2=1;
    delay(200);
    buttonFP3();
  }
  
  if(button2State == HIGH)
  {
    buttonP2=2;
    delay(200);
    buttonFP3();
  }
  
  if(button3State == HIGH)
  {
    buttonP2=3;
    delay(200);
    buttonFP3();
  }
  
  once = 1;
  buttonFP2();
}
//Third Input----------------------------------------------------------------------------------------------------------------------------
void buttonFP3()
{
  int button1State = digitalRead(6);
  int button2State = digitalRead(7);
  int button3State = digitalRead(8);
  
  if(button1State == HIGH)
  {
    buttonP3=1;
    delay(200);
    result();
  }
  
  if(button2State == HIGH)
  {
    buttonP3=2;
    delay(200);
    result();
  }
  
  if(button3State == HIGH)
  {
    buttonP3=3;
    delay(200);
    result();
    
  }
  
  buttonFP3();
}

void result()
{
  if(buttonP1 == 1)
  {
    //1-1-*
    if(buttonP2 == 1)
    {
      
      //1-1-1
      if(buttonP3 == 1)
      {
        result1();
      }
      
      //1-1-2
      if(buttonP3 == 2)
      {
        result2(); 
      }
      
      //1-1-3    
      if(buttonP3 == 3)
      {
        result3();
      }
    }

    //1-2-*
    if(buttonP2 == 2)
    {
      
      //1-2-1
      if(buttonP3 == 1)
      {
        result4();
      }
      
      //1-2-2
      if(buttonP3 == 2)
      {
        result5();
      }
      
      //1-2-3
      if(buttonP3 == 3)
      {
        result6();
      }
    }
    
    //1-3-*
    if(buttonP2 == 3)
    {
      //1-3-1
      if(buttonP3 = 1)
      {
        result7();
      }
      
      //1-3-2
      if(buttonP3 = 1)
      {
        result8();
      }
      
      //1-3-3
      if(buttonP3 = 1)
      {
        result9();
      }
    }
  }
  //2-*-* -------------------------------------------------------------------------------------------------------------------------------------
  if(buttonP1 == 2)
  {
    //2-1-*
    if(buttonP2 == 1)
    {
      //2-1-1
      if(buttonP3 == 1)
      {
        result10();
      }
      //2-1-2
      if(buttonP3 == 2)
      {
        result11();
      }
      //2-1-3
      if(buttonP3 == 3)
      {
        result12();
      }
    }
    
    //2-2-*
    if(buttonP2 == 2)
    {
      //2-2-1
      if(buttonP3 == 1)
      {
        result13();
      }
      
      //2-2-2
      if(buttonP3 == 2)
      {
        result14();
      }
      
      //2-2-3
      if(buttonP3 == 3)
      {
        result15();
      }
    }
    
    //2-3-*
    if(buttonP2 == 3)
    {
      
      //2-3-1
      if(buttonP3 == 1)
      {
        result16();
      }
      
      //2-3-2
      if(buttonP3 == 2)
        {
          result17();
        }
      
      //2-3-3
      if(buttonP3 == 3)
      {
        result18();
      }
    }
  }
  //3-*-* --------------------------------------------------------------------------------------------------------------------------------------
  if(buttonP1 == 3)
    //3-1-*
    if(buttonP2 == 1)
      //3-1-1
      if(buttonP3 == 1)
      {
        result19();
      }
      //3-1-2
      if(buttonP3 == 2)
      {
        result20();
      }
      //3-1-3
      if(buttonP3 == 3)
      {
        result21();
      } 
    
    //3-2-*
    if(buttonP2 == 2)
    {
      
      //3-2-1
      if(buttonP3 == 1)
      {
        result22();
      }
      
      //3-2-2
      if(buttonP3 == 2)
      {
        result23();
      }
      
      //3-2-3
      if(buttonP3 == 3)
      {
        result24();
      }
    }
    
    //3-3-*
    if(buttonP2 == 3)
    {
      
      //3-3-1
      if(buttonP3 == 1)
      {
        result25();
      }
      
      //3-3-2
      if(buttonP3 == 2)
      {
        result26();
      }
      
      //3-3-3
      if(buttonP3 == 3)
      {
       result27();
      }
    }
}

//Result1: 1-1-1, Lumos
void result1()
{
  setColor(255,255,255);
}

void result2()
{
  
}

void result3()
{
  
}

void result4()
{
  
}

void result5()
{
  
}

void result6()
{
  
}

void result7()
{
  
}
void result8()
{
  
}

void result9()
{
  
}

void result10()
{
  
}

void result11()
{
  
}

void result12()
{
  
}

void result13()
{
  
}

//Result1: 2-2-2, Verto
void result14()
{
  irsend.sendSony(0xb50, 2);
  delay(40);
  setColor(255,165,0);
}

void result15()
{
  
}

void result16()
{
  
}

void result17()
{
  
}

void result18()
{
  
}

void result19()
{
  
}

void result20()
{
  
}

void result21()
{
  
}

void result22()
{
  
}

void result23()
{
  
}

void result24()
{
  
}

void result25()
{
  
}

void result26()
{
  
}

//Result1: 3-3-3, Nox
void result27()
{
  setColor(0,0,0);
}


void setColor(int redValue, int greenValue, int blueValue)
{
    analogWrite(redPin, redValue);
    analogWrite(greenPin, greenValue);
    analogWrite(bluePin, blueValue);
}

void reset()
{
  once = 0;
  buttonP1 = 0;
  buttonP2 = 0;
  buttonP3 = 0;
  loop();
}


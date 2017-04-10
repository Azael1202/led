#include <SoftwareSerial.h>
SoftwareSerial BT(2,4); // 

int led3 = 3;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int led9 = 9;
int led10 = 10;
int led11 = 11;
int led12 = 12;
int led13 = 13;
int led14 = 14;
int led15 = 15; 
int led16 = 16;

void setup() 
{
  // Pin 13 Digital de Arduino
  
  pinMode(led3, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);
  pinMode(led14, OUTPUT);
  pinMode(led15, OUTPUT);
  pinMode(led16, OUTPUT);
  
  // Velocidad serial del Modulo BT
  BT.begin(9600);
  }
char led; // Led es nuestro led conectado a Arduino
void loop() 
{
  if (BT.available())
  // Siclo if para definir que se acción se ejecutara si Arduino recibe el dato "a" (si lo recibe el led se enciende)
  {
    led=(BT.read());
    if (led =='a')
    {
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
      digitalWrite(led16, HIGH);
      delay(3000);
      digitalWrite(led7, LOW);
      digitalWrite(led8, LOW);
      digitalWrite(led16, LOW);
      }
      if (led =='b')
      {
        digitalWrite(led3, HIGH);  
        digitalWrite(led10, HIGH);
        digitalWrite(led11, HIGH);
        delay(3000);
        digitalWrite(led3, LOW);
        digitalWrite(led10, LOW);
        digitalWrite(led11, LOW);
        }
        if (led =='c')
      {
        digitalWrite(led3, HIGH);  
        digitalWrite(led9, HIGH);
        digitalWrite(led10, HIGH);
        delay(3000);
        digitalWrite(led3, LOW);
        digitalWrite(led9, LOW);
        digitalWrite(led10, LOW);
        }
        if (led =='d')
      {
        digitalWrite(led8, HIGH);  
        digitalWrite(led12, HIGH);
        delay(3000);
        digitalWrite(led8, LOW);
        digitalWrite(led12, LOW);
        }
         if (led =='e')
      {
        digitalWrite(led8, HIGH);  
        digitalWrite(led12, HIGH);
        digitalWrite(led13, HIGH);
        delay(3000);
        digitalWrite(led8, LOW);
        digitalWrite(led12, LOW);
        digitalWrite(led13, LOW);
        }
        if (led =='f')
      {
        digitalWrite(led3, HIGH);  
        digitalWrite(led12, HIGH);
        digitalWrite(led14, HIGH);
        delay(3000);
        digitalWrite(led3, LOW);
        digitalWrite(led12, LOW);
        digitalWrite(led14, LOW);
        }
        if (led =='g')
      {
        digitalWrite(led3, HIGH);  
        digitalWrite(led6, HIGH);
        digitalWrite(led12, HIGH);
        delay(3000);
        digitalWrite(led3, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led12, LOW);
        }

        if (led =='h')
      {
        digitalWrite(led12, HIGH);  
        digitalWrite(led14, HIGH);
        digitalWrite(led15, HIGH);
        delay(3000);
        digitalWrite(led12, LOW);
        digitalWrite(led14, LOW);
        digitalWrite(led15, LOW);
        }
        if (led =='i')
      {
        digitalWrite(led5, HIGH);
        digitalWrite(led12, HIGH);  
        digitalWrite(led14, HIGH);
        digitalWrite(led15, HIGH);
        delay(3000);
        digitalWrite(led5, LOW);
        digitalWrite(led12, LOW);
        digitalWrite(led14, LOW);
        digitalWrite(led15, LOW);
        }
  }
}

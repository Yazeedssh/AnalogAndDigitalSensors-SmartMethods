#include <LiquidCrystal.h>                 

LiquidCrystal lcd(12, 11, 8, 7, 6, 5);
int echoPin = 3;
int trigPin = 4;
long duration;
int distance;

void setup()
{
  lcd.begin(16, 2);  
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop()
{
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2);          
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);          
  digitalWrite(trigPin,LOW); 
  duration = pulseIn(echoPin,HIGH);
  distance = duration * 0.0342/2;
  lcd.setCursor(0, 0);
  lcd.print("Object");
  lcd.print(distance);
  lcd.print("cm");
  delay(10);
}

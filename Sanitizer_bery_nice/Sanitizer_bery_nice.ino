#define trigPin 5
#define echoPin 6
#include <Servo.h>
Servo chelsea;
Servo shaikh;


void setup() {
  Serial.begin (9600);
  chelsea.attach(4);
  shaikh.attach(7);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
// tes servo
chelsea.write(120);
delay(2000);
chelsea.write(10);

shaikh.write(10);
delay(2000);
shaikh.write(120);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

  if (distance <= 20) 
  {
    shaikh.write(180),chelsea.write(10);
    delay(1000);
    
    
  }

  else {
    chelsea.write(180),shaikh.write(10);//sudut
    delay(100);
  }
  } 

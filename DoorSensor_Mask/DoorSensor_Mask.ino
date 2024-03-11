#define trigPin 8
#define echoPin 9
#include <Servo.h>
Servo servokanan;
Servo servokiri;

// Door sensor

#define PIN_TRIGGER 6
#define PIN_ECHO    5
#define PIN_BUZZER 11  


float time;
float dist;

void setup() {

// Servos
  Serial.begin (9600);
  servokanan.attach(4);
  servokiri.attach(7);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
// tes servo
servokanan.write(100);
delay(2000);
servokanan.write(100);

servokiri.write(100);
delay(2000);
servokiri.write(120);

// Door sensor
 pinMode(PIN_TRIGGER, OUTPUT);       
  pinMode(PIN_ECHO, INPUT);          
  pinMode(PIN_BUZZER, OUTPUT);       
  beep(50);                          // This will make a beep sound Beep
  beep(50);                          // The parameter (50) is the length of the beep                                   
  delay(1000);

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

  if (distance <= 20) // jarak sensor
  {
    servokanan.write(180),servokiri.write(10);
    delay(100);
    
    
  }

  else {
    servokanan.write(10),servokiri.write(180);//sudut
    delay(100);
  }

// door sensor

  digitalWrite(PIN_TRIGGER, LOW);    
  delayMicroseconds(2);               
  digitalWrite(PIN_TRIGGER, HIGH);    
  delayMicroseconds(10);              
  digitalWrite(PIN_TRIGGER, LOW);

      time = pulseIn(PIN_ECHO, HIGH);

dist = time*0.0343/2;


 if (dist > 0 && dist < 50){
    beep(500); 
 }

 delay (1000);
 
  }


  void beep(unsigned char delayms) {   // Created a function for beep (length: delayms)
  analogWrite(PIN_BUZZER, 1000);     // This will set a frequency to pin
  delay(delayms);                                // Giving a delay specified by input parameter
  analogWrite(PIN_BUZZER ,0);                    // This will set the pin back to LOW
  delay(delayms);                                // Giving the same delay
}

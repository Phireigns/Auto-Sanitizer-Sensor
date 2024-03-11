#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#define PIN_TRIGGER 5
#define PIN_ECHO    6
#define PIN_BUZZER_TIMER 9

float time;
float distance;

LiquidCrystal_I2C lcd(0x20, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  lcd.begin(16, 2);
  pinMode(PIN_TRIGGER, OUTPUT);        // the pin that sends out ultrasonic is input / output?
  pinMode(PIN_ECHO, INPUT);  // initialization
  pinMode(PIN_BUZZER_TIMER, OUTPUT);
  beep(50);                          // This will make a beep sound Beep
  beep(50);                          // The parameter (50) is the length of the beep                                   
  delay(1000);
  //lcd.backlight();// write the sentence   
}

void loop(){
  digitalWrite(PIN_TRIGGER, LOW);     // initialize to LOW
  delayMicroseconds(2);               // and delay for a short time
  digitalWrite(PIN_TRIGGER, HIGH);    // send out an ultrasonic pulse
  delayMicroseconds(10);              // of 10 micro-seconds (10 / 1,000,000) second
  digitalWrite(PIN_TRIGGER, LOW);     // resume pin status to LOW
  
  // Use function pulseIn() to find the pulse width
  // The pulse width is the time needed for sound to travel both directions
  
  time = pulseIn(PIN_ECHO, HIGH);  // pulseIn() detects the width of the returning ultrasonic
  
 distance = time*0.0343/2;
   if (distance > 0 && distance < 20){ 
  for (int S = 0; S < 10; S++) {
    lcd.setCursor(0,0);
    lcd.print("10 Seconds Timer");
    lcd.setCursor(0,1); 
  lcd.print(S);
  lcd.setCursor(1,1); 
  lcd.print(" : SECONDS ");
  delay(1000);
  if(S == 9){
    lcd.setCursor(0,0);            
  lcd.print("CONGRATULATIONS! ");
    lcd.setCursor(0,1); 
  lcd.print("CORONA FREE");
  beep(50);
  delay(1000);
  }
  }
   }

}
void beep(unsigned char delayms) {   // Created a function for beep (length: delayms)
  
  analogWrite(PIN_BUZZER_TIMER, 1000);
  delay(delayms);
  analogWrite(PIN_BUZZER_TIMER, 0);
  delay(delayms);// Giving the same delay
}

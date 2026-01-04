#include <Arduino.h>

const int buttonPin1 = 12;
const int buttonPin2 = 13;
const int buttonPin3 = 10;
const int buttonPin4 = 11;
const int ledPin1 = 4;
const int ledPin2 = 6;
const int ledPin3 = 2;
const int ledPin4 = 7;
const int ledPin5 = 8;
const int ledPin6 = 3;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;

void setup() {
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
pinMode(ledPin4, OUTPUT);
pinMode(ledPin5, OUTPUT);
pinMode(ledPin6, OUTPUT);
pinMode(buttonPin1, INPUT_PULLUP);
pinMode(buttonPin2, INPUT_PULLUP);
pinMode(buttonPin3, INPUT_PULLUP);
pinMode(buttonPin4, INPUT_PULLUP);
}

void loop() {
   buttonState1 = digitalRead(buttonPin1);
   buttonState2 = digitalRead(buttonPin2);
   buttonState3 = digitalRead(buttonPin3);
   buttonState4 = digitalRead(buttonPin4);

  // if (buttonState == HIGH) {
  //   // turn LED on:
  //   digitalWrite(ledPin, HIGH);
  // } else {
  //   // turn LED off:
  //   digitalWrite(ledPin, LOW);
  // }
   if (buttonState1 == HIGH && buttonState2 == HIGH) { 
    digitalWrite(ledPin3, HIGH);
  } else if (buttonState1 == HIGH) { 
     digitalWrite(ledPin1, HIGH);
  } else if (buttonState2 == HIGH) { 
    digitalWrite(ledPin2, HIGH);
   
  } else if (buttonState1 == LOW && buttonState2 == LOW) {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  } 

  //  if (buttonState3 == HIGH) { 
  //   digitalWrite(ledPin6, HIGH);
  // } else if (buttonState3 == HIGH) { 
  //    digitalWrite(ledPin4, HIGH);
  // } else if (buttonState4 == HIGH) { 
  //   digitalWrite(ledPin5, HIGH);
   
  // } else if (buttonState3 == LOW && buttonState4 == LOW) {
  //   digitalWrite(ledPin4, LOW);
  //   digitalWrite(ledPin5, LOW);
  //   digitalWrite(ledPin6, LOW);
  // } 

  if (buttonState3 == HIGH) {
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);

  } else if (buttonState4 == HIGH)
   digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin6, HIGH);
}

// } else if (buttonState3 == LOW && buttonState4 == LOW) {
//     digitalWrite(ledPin4, LOW);
//     digitalWrite(ledPin5, LOW);
//     digitalWrite(ledPin6, LOW);
// }
//   } 


#define A 4
#define B 8
#define C 11
#define D 10
#define E 9
#define F 5
#define G 12
#define D1 3
#define D2 6
#define D3 7
#define D4 13
#define touch 2
#include "displayNum.h"
void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(E, OUTPUT); 
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  pinMode(touch, INPUT);
}
 
int count = 0;
int previousTouchState = LOW;

void loop() {
  int touchState = digitalRead(touch);
  if (touchState == HIGH && previousTouchState == LOW) {
    count++; 
  }
    displayNum(count);
  previousTouchState = touchState;
}

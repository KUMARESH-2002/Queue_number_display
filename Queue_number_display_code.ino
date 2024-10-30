#define A 2
#define B 3
#define C 10
#define D 9
#define E 8
#define F 4
#define G 11
#define D1 12
#define D2 7
#define D3 6
#define D4 5
#define touch 13
const int digitPatterns[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};
int segmentPins[7] = {A, B, C, D, E, F, G};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(touch, INPUT);
}

int count = 0;
int previousTouchState = LOW;

void loop() {
  int touchState = digitalRead(touch);
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  
  
  if (touchState == HIGH && previousTouchState == LOW) {
    count++;
    if (count > 9) {
      count = 0;  
    }
    for (int j = 0; j < 7; j++) {
      digitalWrite(segmentPins[j], digitPatterns[count][j]);
    }
    
    delay(500);
  }
 
  previousTouchState = touchState;
}

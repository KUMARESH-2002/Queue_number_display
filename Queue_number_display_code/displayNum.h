
int segmentPins[7] = {A, B, C, D, E, F, G};
int displayPins[4]= {D1,D2,D3,D4};

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
void displayNum(int num){
  if(num>0){
    for(int i=3;i>=0;i--)
    {
      int num1=num%10;
      num=num/10;
    digitalWrite(displayPins[i],LOW);
    for(int j=0; j<7; j++){
    digitalWrite(segmentPins[j], digitPatterns[num1][j]);
    }
    delay(5);
    digitalWrite(displayPins[i],HIGH);
  
  }
}
}

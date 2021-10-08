#define _clock 7
#define _latch 6
#define _data 5
void setup() {
  // put your setup code here, to run once:
  pinMode(_latch, OUTPUT);
  pinMode(_clock, OUTPUT);
  pinMode(_data, OUTPUT);
}

void loop() {
 
  for(int i = 0; i < 255; i++){
    digitalWrite(_latch,LOW);
    shiftOut(_data,_clock,LSBFIRST,i);  //so led sang theo thu tu 1 3 7 15 31 63 127 255
    digitalWrite(_latch,HIGH);
    delay(500);
  }
}

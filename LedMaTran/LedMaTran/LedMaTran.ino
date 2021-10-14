#define _clock 1
#define _latch 0
#define _data 2

byte i;    
byte j;
byte dataToSend;
byte ledData[]{1,3,7,15};
void setup() {
  pinMode(_latch, OUTPUT);
  pinMode(_clock, OUTPUT);
  pinMode(_data, OUTPUT);
}

void loop() {
  for(i=0;i<_data;i++){
    byte dataToSend = (1 << (i+_data)) | (15&~ledData[i]);
    digitalWrite(_latch,LOW);
    shiftOut(_data,_clock,LSBFIRST,dataToSend);
    digitalWrite(_latch,HIGH);
    delay(500);
  }
}

// C++ code
//
void setup()
{
  Serial.begin(96000);
  pinMode(10,OUTPUT);
}

void loop()
{
  int GiaTri = analogRead(A0);
  int NhietDo=map(GiaTri,20,358,-40,125);
  Serial.print(NhietDo);
  Serial.print("\t");
  if(NhietDo>37)
    digitalWrite(10,HIGH);
  else
    digitalWrite(10,LOW);
  delay(1000);
}

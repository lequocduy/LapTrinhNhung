int led[]={13,12,11,10,9,8,7,6};
void setup()
{
    
}
void nhaydoi(){
  int x;
    for(x = 0; x<8; x+=2){
      digitalWrite(led[x],HIGH);
      digitalWrite(led[x+1],HIGH);
      delay(1000);
      digitalWrite(led[x],LOW);
      digitalWrite(led[x+1],LOW);
        delay(1000);
      
    } 
}
void nhaylechan(){
  int y;
  for(y = 0; y<8; y++){
    if(y%2==0) digitalWrite(led[y],HIGH);
    else digitalWrite(led[y],LOW);
  }
    
}
void nhay1Lan(){
  
}

void loop()
{
  nhaydoi();
    delay(1000);
    nhaylechan();
}

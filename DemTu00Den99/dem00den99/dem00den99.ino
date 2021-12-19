int cacSo[10] = {0b0111111, 0b0000110, 0b1011011, 0b1001111, 0b1100110, 0b1101101, 0b1111101, 0b0000111, 0b1111111, 0b1101111};
int soThu1, soThu2;
void setup()
{
  pinMode(2, OUTPUT);//chân a
  pinMode(3, OUTPUT);//chân b
  pinMode(4, OUTPUT);//chân c
  pinMode(5, OUTPUT);//chân d
  pinMode(6, OUTPUT);//chân e
  pinMode(7, OUTPUT);//chân f
  pinMode(8, OUTPUT);//chân g
  pinMode(12, OUTPUT);//chân số 1
  pinMode(13, OUTPUT);//chân số 2
}
void loop() {
  for (int j = 0; j <= 99; j++) // hiện thị số từ 0 đến 99
  {
    soThu2 = j / 10;
    soThu1 = j % 10;
    for ( int k = 0; k < 20; k++)  
    {
      digitalWrite(12, HIGH);//hiện thị số ở trước
      digitalWrite(13, LOW);
      ketNoi(soThu2);
      delay(10);
      digitalWrite(13, HIGH);//hiện thị số ở sau
      digitalWrite(12, LOW);
      ketNoi(soThu1);
      delay(10);
    }
  }
}
void ketNoi(int num)
{
  for (int i = 2; i < 9; i++) // các chân arduino cắm vào điện trở
  {
    digitalWrite(i, bitRead(cacSo[num], i - 2)); //bitRead trả về giá trị tại một bit i của một số nguyên tương ứng với các chân a,b,c,d,e,f,g tương ứng vơi i chạy từ 2-9 đổi với arduino
  }
}

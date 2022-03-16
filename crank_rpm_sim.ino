void setup() {
  pinMode(9, OUTPUT);
  pinMode(A0, INPUT);

}

void loop() {
  int a, wait;
  wait = 100;
  while(1)
  {
    for(a=0; a<35; a++)
    {
      PORTB |= B00000010;
      delayMicroseconds(wait);
      PORTB &= !B00000010;
      delayMicroseconds(wait);
    }
    wait = analogRead(A0) + 1 * 64;
    delayMicroseconds(wait*2);
  }
}

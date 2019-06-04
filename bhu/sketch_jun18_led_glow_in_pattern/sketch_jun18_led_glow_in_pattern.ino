int i;
void setup() {
  for(i=8;i<=13;i++)
  pinMode(i,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  for(i=8;i<9;i++)
  {
    digitalWrite(i,1);
    digitalWrite(i+1,1);
    digitalWrite(13,0);
    delay(500);
    digitalWrite(i,0);
    digitalWrite(i+1,0);
    digitalWrite(13,0);
    delay(500);
  }

  for(i=11;i<12;i++)
  {
    digitalWrite(i,1);
    digitalWrite(i+1,1);
    digitalWrite(13,0);
    delay(500);
    digitalWrite(i,0);
    digitalWrite(i+1,0);
    digitalWrite(13,0);
    delay(500);
  }
  for(i=9;i<12;i++)
  {
    digitalWrite(i,1);
    digitalWrite(13,0);
    delay(500);
    digitalWrite(i,0);
    digitalWrite(13,0);
    delay(500);
  }
   for(i=8;i<13;i++)
  {
    digitalWrite(i,1);
    digitalWrite(13,0);
    delay(500);
    digitalWrite(i,0);
    digitalWrite(13,0);
    delay(500);
  }
  
  // put your main code here, to run repeatedly:

}

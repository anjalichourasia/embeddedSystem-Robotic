int a,b,j;
void setup() {
  for(j=8;j<=13;j++)
  pinMode(j,OUTPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
   a=analogRead(A1);
  Serial.print(a);
  b=map(a,0,1023,0,5);
  Serial.print("     ,     ");
  Serial.println(b);
  delay(500);
  if(b==1)
  {
    digitalWrite(8,1);
    digitalWrite(13,0);
    delay(500);
    digitalWrite(8,0);
    digitalWrite(13,0);
    delay(500);
  }
  else
  if(b==2)
  {
    for(j=0;j<b;j++)
    digitalWrite(8+j,1);
    digitalWrite(13,0);
    delay(500);
    for(j=0;j<b;j++)
    digitalWrite(8+j,0);
    digitalWrite(13,0);
    delay(500);
  }
  else
  if(b==3)
  {
    for(j=0;j<b;j++)
    digitalWrite(8+j,1);
    digitalWrite(13,0);
    delay(500);
    for(j=0;j<b;j++)
    digitalWrite(8+j,0);
    digitalWrite(13,0);
    delay(500);
  }
  else
  if(b==4)
  {
    for(j=0;j<b;j++)
    digitalWrite(8+j,1);
    digitalWrite(13,0);
    delay(500);
    for(j=0;j<b;j++)
    digitalWrite(8+j,0);
    digitalWrite(13,0);
    delay(500);
  }
  
  else
  if(b==5)
  {
    for(j=0;j<b;j++)
    digitalWrite(8+j,1);
    digitalWrite(13,0);
    delay(500);
    for(j=0;j<b;j++)
    digitalWrite(8+j,0);
    digitalWrite(13,0);
    delay(500);
  }
  else { Serial.println(",");}
  // put your main code here, to run repeatedly:

}

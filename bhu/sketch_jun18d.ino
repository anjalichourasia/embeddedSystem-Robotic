int b,i,k=2,j,a=0;
void setup() {
  for(i=8;i<=13;i++)
  pinMode(i,OUTPUT);
  pinMode(7,INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  b=digitalRead(7);
  Serial.println(b);
  delay(500);
  if(b==0)
  {
    for(i=8;i<12;i++)
  {
    for(j=0;j<k;j++)
    digitalWrite(i+j,1);
    digitalWrite(13,0);
    delay(500);
    for(j=0;j<k;j++)
    digitalWrite(i+j,0);
    digitalWrite(13,0);
    delay(500);
    a++;
    if(a==1)
    {
      i+=2;
      k=2;
    }
    else if(a==2)
    {
      i=8;
      k=3;
    }
    else if(a==3)
    {
      i=7;k=5;
    }
    else
    {
      break;
    }
    }
    i=8;
    a=0;
      k=2;
  }

  // put your main code here, to run repeatedly:

}

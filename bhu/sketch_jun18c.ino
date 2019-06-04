int i,k=2,j,a=0;
void setup() {
  for(i=8;i<=13;i++)
  pinMode(i,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
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



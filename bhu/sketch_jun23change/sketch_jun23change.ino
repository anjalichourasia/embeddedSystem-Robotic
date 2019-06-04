void setup() {
  // FOR LEFT MOTOR//
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  //FOR RIGHT MOTOR//
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);

//For IR//
pinMode(7,INPUT);
pinMode(8,INPUT);
}

void loop() {
  // FOR FORWADR//
  //FOR LEFT MOTOR//
  Serial.begin(9600);
  int a=digitalRead(7);
  int b=digitalRead(8);
  Serial.print(a);
  Serial.println(b);
 //white
  if(a==0&&b==0)
  {
    //stop
    digitalWrite(3,0);
    digitalWrite(4,0);
    //for right motor//
    digitalWrite(5,0);
    digitalWrite(6,0);
    delay(20);
  }
  else if(a==0 && b==1)
  {
    //move towards left
     digitalWrite(3,1);
    digitalWrite(4,0);
    //for right motor//
    digitalWrite(5,0);
    digitalWrite(6,0);
    delay(20);
  }
  else if(a==1 && b==0)
   {
    //move toward right
     digitalWrite(3,0);
    digitalWrite(4,0);
    //for right motor//
    digitalWrite(5,1);
    digitalWrite(6,0);
    delay(20);
  }
  else
 {
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
 // FOR RIGHT MOTOR//
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 delay(20);
}
}

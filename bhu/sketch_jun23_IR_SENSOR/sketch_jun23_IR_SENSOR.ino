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
 
  if(a==1&&b==1)
  {
    digitalWrite(3,0);
    digitalWrite(4,0);
    //for right motor//
    digitalWrite(5,0);
    digitalWrite(6,0);
  }
  else
  
{
  digitalWrite(3,HIGH);
digitalWrite(4,LOW);
 // FOR RIGHT MOTOR//
 digitalWrite(6,HIGH);
 digitalWrite(5,LOW);
 delay(5000);
   // FOR BACKWARD//
  //FOR LEFT MOTOR//
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
 // FOR RIGHT MOTOR//
 digitalWrite(6,LOW);
 digitalWrite(5,HIGH);
 delay(5000);
}
}

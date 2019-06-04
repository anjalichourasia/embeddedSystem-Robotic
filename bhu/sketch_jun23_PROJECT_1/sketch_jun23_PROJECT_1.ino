void setup() 
{
  // FOR LEFT MOTOR//
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  //FOR RIGHT MOTOR//
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() 
{
  // FOR FORWADR//
  //FOR LEFT MOTOR//
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
 // FOR RIGHT MOTOR//
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 delay(5000);
   // FOR BACKWARD//
  //FOR LEFT MOTOR//
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
 // FOR RIGHT MOTOR//
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 delay(5000);
}

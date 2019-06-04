void setup() 
{
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}
void loop() 
{
int a=digitalRead(11);
int b=digitalRead(10);
int c=digitalRead(9);
int d=digitalRead(8);
Serial.print(a);
Serial.print(b);
Serial.print(c);
Serial.println(d);
delay(1500);
}

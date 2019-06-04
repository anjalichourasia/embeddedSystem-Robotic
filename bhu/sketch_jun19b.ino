float a,b;
void setup() {

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
  // put your main code here, to run repeatedly:

}

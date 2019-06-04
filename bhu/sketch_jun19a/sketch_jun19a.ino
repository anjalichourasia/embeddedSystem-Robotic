float a;
void setup() {
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  a=analogRead(A1);
  Serial.println(a);
  delay(1000);
  digitalWrite(12,1);
  digitalWrite(13,0);
  delay(500);
  
  digitalWrite(12,0);
  digitalWrite(13,0);
  // put your main code here, to run repeatedly:

}

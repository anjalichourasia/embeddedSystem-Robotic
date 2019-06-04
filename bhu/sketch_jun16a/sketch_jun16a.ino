int a;
void setup() {
 pinMode(13,OUTPUT);
 pinMode(13,INPUT);

}

void loop() {
  digitalWrite(13,HIGH);
  a=digitalRead(13);
}

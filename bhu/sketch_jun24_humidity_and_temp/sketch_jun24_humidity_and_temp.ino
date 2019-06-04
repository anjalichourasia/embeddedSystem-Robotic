#include <DHT.h>
#define DHTPIN 3
DHT dht(DHTPIN,DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float h=dht.readHumidity();
  float t=dht.readTemperature();
  Serial.print("Humidity is");
  Serial.print(h);
  Serial.print(" ||  ");
  Serial.print("Temp is");
  Serial.println(t);
  delay(850);

}

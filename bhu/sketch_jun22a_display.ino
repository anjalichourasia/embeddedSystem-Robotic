#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,4,5,6,7); //(rs,e,d4,d5,d6,d7)
void setup() {
  lcd.begin(16,2);

}

void loop() {
lcd.setCursor(0,0);
lcd.print("yo yo ");
lcd.setCursor(0,1);
lcd.print("Helloo");
delay(200);
lcd.clear();

}

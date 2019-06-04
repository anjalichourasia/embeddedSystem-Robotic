#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,4,5,6,7); //(rs,e,d4,d5,d6,d7)
void setup() {
  lcd.begin(16,2);

}

void loop() {

for(int i=1;i<=10;i++)
{
lcd.setCursor(0,0);
lcd.print("2 *");
lcd.print(i);
lcd.print("=");
lcd.print(i*2);
delay(500);
lcd.clear();
}
}

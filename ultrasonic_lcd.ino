#include <LiquidCrystal.h>
#include <NewPing.h>

#define TRIGGER 8
#define ECHO 9

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
NewPing sonar(TRIGGER, ECHO, 50);

int dist_cm;

void setup() {
  //Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
  lcd.noDisplay();
  lcd.clear();
  
  dist_cm = sonar.ping_cm()
  
  lcd.print(dist_cm);
  lcd.print(" cm");
  lcd.display();
  
  delay(700);
}

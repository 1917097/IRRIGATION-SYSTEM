#include<LiquidCrystal.h>
LiquidCrystal lcd(A0,A1,A2,A3,A4,A5 );//********
#define soil1 4
#define soil2 5
#define soil3 6
void setup()
{
pinMode(soil1, INPUT);
pinMode(soil2, INPUT);
pinMode(soil3, INPUT);
pinMode(10, OUTPUT);
lcd.begin(16, 2);
lcd.print(" AUTOMATIC ");
lcd.setCursor(0,1);
lcd.print("IRRIGATION SYSTEM");

delay(2000);
}
void loop()
{
if(digitalRead(soil1)==HIGH)
{

digitalWrite(10,HIGH);
// delay(200);
lcd.clear();
lcd.print("  MOTOR   ");
lcd.setCursor(0, 1);
lcd.print("ON");
delay(100);

}
else if(digitalRead(soil2)==HIGH)
{

digitalWrite(10,HIGH);
 delay(200);
lcd.clear();
lcd.print("  MOTOR   ");
lcd.setCursor(0, 1);
lcd.print("ON");
delay(100);

}

else if(digitalRead(soil3)==HIGH)
{

digitalWrite(10,HIGH);
// delay(200);
lcd.clear();
lcd.print("  MOTOR   ");
lcd.setCursor(0, 1);
lcd.print("ON");
delay(100);

}
else
{
digitalWrite(10, LOW);
//digitalWrite(fire, LOW);
lcd.clear();
lcd.print(" MOTOR ");
lcd.setCursor(0,1);
lcd.print(" OFF ");
delay(200);
}
}

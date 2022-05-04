#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int GreenState = 0;
int YellowState = 0;
int SupplyState = 0;
void setup() {
  Serial.begin (9600);
  lcd.init();
  lcd.backlight();
  lcd.clear();
  
  pinMode(9, OUTPUT);//SOLENOID SUPPLY
  pinMode(8, OUTPUT);//PUMP
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  
  lcd.setCursor(0,0); 
  lcd.print("WaterTank System");
  delay(4000);
  lcd.clear();  

  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  lcd.setCursor(0,0); 
  lcd.print("PUMP: OFF");
  lcd.setCursor(0,1); 
  lcd.print("SUPPLY OFF");
}

void loop() {
  GreenState = digitalRead(11);
  YellowState = digitalRead(10);
  SupplyState = digitalRead(12);
  if(SupplyState == HIGH ) //SUPPLY IS ON
  {
    
    if(GreenState == HIGH) //WATER LEVEL BELOW 100%
    {
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);

    lcd.clear();
    lcd.setCursor(0,0); 
    lcd.print("PUMP: OFF");
    lcd.setCursor(0,1); 
    lcd.print("SUPPLY ON");
    }
    else
    {
      digitalWrite(9, LOW);
    digitalWrite(8, LOW);

    lcd.clear();
    lcd.print("PUMP: OFF");
    lcd.setCursor(0,1); 
    lcd.print("SUPPLY OFF");
    }
  }
  
  else if(SupplyState == LOW && YellowState==HIGH) //WATER LEVEL BELOW 75% AND SUPPLY IS OFF
{
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH); // TURN ON PUMP

    lcd.clear();
    lcd.print("PUMP: ON");
    lcd.setCursor(0,1); 
    lcd.print("SUPPLY OFF");
  }
  else
  {
    
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);

    lcd.clear();
    lcd.print("PUMP: OFF");
    lcd.setCursor(0,1); 
    lcd.print("SUPPLY OFF");
  }
delay(2000);
}

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

// 
const int pH_Pin  = A0;
const int tds_Pin = A1;
const int ONE_WIRE_BUS = 2;  

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

float pH_offset = 0.0;       
float tds_factor = 0.5;      

void setup() {
  Serial.begin(9600);
  sensors.begin();
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Water Quality");
  lcd.setCursor(0,1);
  lcd.print("Initializing...");
  delay(1500);
  lcd.clear();
}

void loop() {

  //PH
  int pH_value = analogRead(pH_Pin);
  float voltage = (pH_value * 5.0) / 1023.0;
  float pH = 3.5 * voltage + pH_offset;   

  //TDS
  int tds_value = analogRead(tds_Pin);
  float tds_voltage = (tds_value * 5.0) / 1023.0;
  float tds = (tds_voltage * 1000) * tds_factor; 

  //Temp
  sensors.requestTemperatures();
  float tempC = sensors.getTempCByIndex(0);

  
  lcd.setCursor(0,0);
  lcd.print("pH:");
  lcd.print(pH, 1);

  lcd.setCursor(8,0);
  lcd.print("TDS:");
  lcd.print(tds, 0);

  lcd.setCursor(0,1);
  lcd.print("Temp:");
  lcd.print(tempC, 1);
  lcd.print((char)223);
  lcd.print("C");

  delay(1200);
}

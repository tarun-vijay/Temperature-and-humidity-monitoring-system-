#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Define the DHT sensor pin and type
#define DHTPIN 2     
#define DHTTYPE DHT11  

// Initialize DHT sensor
DHT dht(DHTPIN, DHTTYPE);

// Initialize LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);  

void setup() {
  // Start the serial communication
  Serial.begin(9600);

  // Start the DHT sensor
  dht.begin();

  // Start the LCD
  lcd.begin();
  lcd.backlight();
}

void loop() {
  // Read humidity and temperature
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Check if any reads failed
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print data to the serial monitor
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" *C ");

  // Display data on the LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(" C");
  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(humidity);
  lcd.print(" %");

  // Wait a few seconds between measurements
  delay(2000);
}

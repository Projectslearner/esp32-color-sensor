/*
    Project name : ESP32 Color Sensor
    Modified Date: 23-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-color-sensor
*/

#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_TCS34725.h>

// I2C pins
#define SDA_PIN 21
#define SCL_PIN 22

// TCS34725 object
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

void setup() {
  Serial.begin(115200);
  
  // Initialize I2C
  Wire.begin(SDA_PIN, SCL_PIN);
  
  // Initialize TCS34725
  if (!tcs.begin()) {
    Serial.println("Couldn't find TCS34725 sensor!");
    while (1);
  }
  Serial.println("TCS34725 sensor initialized.");
}

void loop() {
  // Variables to store the raw color values
  uint16_t r, g, b, c;

  // Read the color sensor values
  tcs.getRawData(&r, &g, &b, &c);
  
  // Print the raw color values
  Serial.print("R: "); Serial.print(r);
  Serial.print(" G: "); Serial.print(g);
  Serial.print(" B: "); Serial.print(b);
  Serial.print(" C: "); Serial.println(c);

  // Calculate color temperature in Kelvin and lux
  uint16_t colorTemp = tcs.calculateColorTemperature(r, g, b);
  uint16_t lux = tcs.calculateLux(r, g, b);

  // Print the calculated values
  Serial.print("Color Temperature: "); Serial.print(colorTemp); Serial.println(" K");
  Serial.print("Lux: "); Serial.println(lux);

  // Delay before next reading
  delay(1000);
}

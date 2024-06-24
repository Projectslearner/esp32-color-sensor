# ESP32 Color Sensor Project

## Project Overview
This project demonstrates how to interface an ESP32 microcontroller with a TCS34725 color sensor. The color sensor is used to detect the RGB values of light and calculate color temperature and illuminance (lux).

## Components Needed
- ESP32 Microcontroller
- TCS34725 Color Sensor
- Jumper Wires
- Breadboard

## Block diagram


## Circuit Setup
1. **Connecting the TCS34725 to ESP32:**
   - Connect the SDA pin of the TCS34725 to GPIO 21 on the ESP32.
   - Connect the SCL pin of the TCS34725 to GPIO 22 on the ESP32.
   - Connect the VCC and GND pins of the TCS34725 to the 3.3V and GND pins on the ESP32, respectively.

## Instructions
1. **Setup:**
   - Initialize serial communication at a baud rate of 115200 using `Serial.begin()`.
   - Initialize the I2C communication with the TCS34725 color sensor using `Wire.begin(SDA_PIN, SCL_PIN)`.
   - Check if the TCS34725 sensor is detected. If not, print an error message and stop execution.

2. **Operation:**
   - In the `loop()` function:
     - Read the raw RGB and clear (C) values from the TCS34725 sensor using `tcs.getRawData()`.
     - Print the raw RGB and clear values to the serial monitor.
     - Calculate the color temperature in Kelvin and lux using `tcs.calculateColorTemperature()` and `tcs.calculateLux()`.
     - Print the calculated color temperature and lux values to the serial monitor.
     - Add a delay of 1 second before taking the next reading.

3. **Considerations:**
   - **Sensor Calibration:** Ensure the sensor is properly calibrated for accurate readings.
   - **Ambient Light:** Avoid exposing the sensor to direct sunlight or other strong light sources that could affect readings.
   - **Power Supply:** Ensure the ESP32 and the sensor have a stable power supply for consistent performance.

## Applications
- **Color Detection Systems:** Use in devices requiring color recognition, such as sorting machines or quality control systems.
- **Ambient Light Monitoring:** Monitor the color temperature and brightness of ambient light in smart home systems.
- **Educational Projects:** Learn about color sensing and light measurement with microcontrollers.

## Notes
- **Sensor Accuracy:** The accuracy of the color readings depends on proper calibration and environmental conditions.
- **Data Interpretation:** The raw RGB values and calculated color temperature/lux can be used for various applications requiring precise light measurements.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 Color Sensor](https://projectslearner.com/learn/esp32-color-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner
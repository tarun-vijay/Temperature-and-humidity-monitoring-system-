# Temperature-and-humidity-monitoring-system-

Project Components:
Arduino Uno
DHT11 Temperature and Humidity Sensor
16x2 LCD Display with I2C Interface
Breadboard and Jumper Wires
Resistors (if needed)
Steps to Create the Project:
1. Setting Up the Hardware:
a. Connect the DHT11 Sensor:
DHT11 Pinout:
VCC (Power)
GND (Ground)
Data (Signal)
Connections:
VCC to 5V on the Arduino
GND to GND on the Arduino
Data to Digital Pin 2 on the Arduino
b. Connect the 16x2 LCD Display:
LCD Pinout with I2C Module:
VCC (Power)
GND (Ground)
SDA (Serial Data)
SCL (Serial Clock)
Connections:
VCC to 5V on the Arduino
GND to GND on the Arduino
SDA to A4 on the Arduino
SCL to A5 on the Arduino

3. Installing Required Libraries:
Install the DHT library for the sensor.
Install the LiquidCrystal_I2C library for the LCD display.
To install libraries: Open the Arduino IDE -> Go to Sketch -> Include Library -> Manage Libraries... -> Search and install the libraries.

4. Uploading the Code:
Connect your Arduino to your computer using a USB cable.
Select the appropriate board and port in the Arduino IDE.
Click the Upload button to transfer the code to the Arduino.
5. Testing:
Once the code is uploaded, the LCD should display the current temperature and humidity readings.
If the readings are not displaying or are incorrect, check the wiring and connections.

# 🌱 Smart Plant Watering System with ESP8266

This project is an automated plant watering system built using an ESP8266, a capacitive soil moisture sensor, a water pump, and a NeoPixel LED strip. It reads the soil moisture level and turns on a water pump if the soil is too dry, while also providing visual feedback using the LED strip.

## 🧠 Features

- Monitors real-time soil moisture with a capacitive sensor
- Activates a water pump when the soil is too dry
- Displays moisture status using a 6-LED NeoPixel strip
- Configurable moisture threshold and watering duration
- Low-power and Wi-Fi-ready for future expansion

---

## 🧰 Components Used

| Component                    | Model / Link                                                                 |
|-----------------------------|-------------------------------------------------------------------------------|
| Microcontroller             | [ESP8266 NodeMCU](https://www.wemos.cc/en/latest/d1/d1_mini.html)            |
| Soil Moisture Sensor        | [Capacitive Soil Sensor](https://www.amazon.de/-/en/SX239/dp/B07FLR13FS)     |
| Water Pump                  | [Mini 5V Water Pump](https://amzn.eu/d/9zFEdpF)                               |
| Relay Module (1-Channel)    | [5V Relay Module](https://www.ebay.de/itm/284113583256)                      |
| NeoPixel LED Strip          | [6-LED GRBW Strip](https://amzn.eu/d/iQ3ZlVf)                                 |
| Power Supply (5V)           | USB Power Bank or 5V Adapter                                                 |

---

## 🖇️ Wiring Diagram

![image](https://github.com/user-attachments/assets/dec846b8-8e84-4db1-af44-5969bbf50b5e)



| Device                    | ESP8266 Pin | Notes                                 |
|--------------------------|-------------|---------------------------------------|
| Moisture Sensor (AOUT)   | A0          | Analog moisture data                  |
| Relay IN (Pump Control)  | D5          | Controls pump on/off                  |
| NeoPixel Data            | D4          | Controls LED color                    |
| NeoPixel 5V              | 5V Supply   | External 5V recommended               |
| NeoPixel GND             | GND         | Shared GND with ESP                   |
| Pump Power               | 5V via Relay| Pump connects through relay module    |

---

## 💾 Arduino Libraries Required

Install the following via the Arduino Library Manager:

- [`NeoPixelBus`](https://github.com/Makuna/NeoPixelBus)

---

## 🚀 Getting Started

1. Wire everything according to the diagram above
2. Upload the Arduino sketch using the Arduino IDE
3. Adjust the soil moisture threshold and pump duration as needed
4. Power the system via USB or power bank

---

## ⚙️ Configuration

```cpp
const int MOISTURE_THRESHOLD = 600; // Adjust after testing
delay(5000);  // Watering duration in milliseconds (e.g. 5 seconds)


# Smart Plant Watering System with ESP8266

This project is an automated plant watering system built using an ESP8266, a capacitive soil moisture sensor and a water pump. 
It reads the soil moisture level and turns on a water pump if the soil is too dry.

## Features

- Monitors real-time soil moisture with a capacitive sensor
- Activates a water pump when the soil is too dry
- Configurable moisture threshold and watering duration

---


https://github.com/user-attachments/assets/bf1c4063-d8d3-4ce8-a16c-81a3295ccaeb


https://github.com/user-attachments/assets/a69ac3f4-b6fa-4358-b679-00ab2f5c4663


---

## Components Used

| Component                   | Model / Link                                                                  |
|-----------------------------|-------------------------------------------------------------------------------|
| Microcontroller             | [ESP8266 NodeMCU](https://www.wemos.cc/en/latest/d1/d1_mini.html)             |
| Soil Moisture Sensor        | [Capacitive Soil Sensor](  https://amzn.eu/d/9zFEdpF)                         |
| Water Pump                  | [Mini 5V Water Pump](  https://a.co/d/ixYMz1V)                                |
| Relay Module (1-Channel)    | [5V Relay Module](  https://amzn.eu/d/5fTFaja)                                |

---

## Wiring Diagram


![{12AA03C9-DC27-403A-B64A-2DF0560FD4F8}](https://github.com/user-attachments/assets/28fee72b-ec3c-474e-961a-356ef7f34e39)


![{42C637D3-BE62-49B5-8C2B-09B0AF82B1DA}](https://github.com/user-attachments/assets/b8af7e9e-6a77-4f22-a8f3-f87456565413)


| Device                   | ESP8266 Pin   | Notes                                 |
|--------------------------|---------------|---------------------------------------|
| Moisture Sensor (AOUT)   | A0            | Analog moisture data                  |
| Relay IN (Pump Control)  | D5            | Controls pump on/off                  |
| Pump Power               | 3V3 via ESP   | Pump connects through relay module    |

---

## Getting Started

1. Download the Moisture code to determine what moisture levels are okay for your plants.
2. After testing, wire everything according to the diagram above
3. Upload the ProjectPlant sketch using the Arduino IDE
4. Adjust the soil moisture threshold and pump duration as needed (In ProjectPlant code, determine using Moisture code).
5. Power the system via the ESP8266.

---

## Configuration

```
const int MOISTURE_THRESHOLD = 600; // Adjust after testing
delay(5000);  // Watering duration in milliseconds (e.g. 5 seconds)
```
--- 

## License

This project is open-source under the MIT License.

---

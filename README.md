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
| Power Supply (3V)           | 3V Battery                                                                    |

---

## Wiring Diagram

![{5D7B714D-17C5-43F1-93E3-AF115BBC0852}](https://github.com/user-attachments/assets/5758af2b-6e90-4543-b46a-2a9d1d81af27)

![{E0B6B111-5EFB-41F8-AA81-201203E1CBC0}](https://github.com/user-attachments/assets/4e9c2697-e9e8-4598-b184-1ce05444554f)





| Device                   | ESP8266 Pin   | Notes                                 |
|--------------------------|---------------|---------------------------------------|
| Moisture Sensor (AOUT)   | A0            | Analog moisture data                  |
| Relay IN (Pump Control)  | D5            | Controls pump on/off                  |
| Pump Power               | 3V via Battery| Pump connects through relay module    |

---

## Getting Started

1. Download the Moisture code to determine what noisture levels are okay for your plants.
2. Download the ProjectPlant code
3. Wire everything according to the diagram above
4. Upload the ProjectPlant sketch using the Arduino IDE
5. Adjust the soil moisture threshold and pump duration as needed (In ProjectPlant code, determine using Moisture code).
6. Power the system via the 3V Battery OR ESP8266 3.3V (Not recommended).

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

#include <NeoPixelBus.h>

// ========== NeoPixel Config ==========
const uint16_t PixelCount = 6;
const uint8_t PixelPin = D4;

// NeoPixelBus<NeoGrbwFeature, NeoEsp8266Uart1800KbpsMethod> strip(PixelCount, PixelPin);

// ========== Pins ==========
const int sensorPin = A0;
const int relayPin = D5;

// ========== Threshold ==========
const int moistureThreshold = 600;

void setup() {
  Serial.begin(115200); // Start serial monitor at 115200 baud
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Turn off pump initially
  delay(1000);
}

void loop() {
  int moistureValue = analogRead(sensorPin); // Read analog value
  Serial.print("Moisture Value: ");
  Serial.println(moistureValue);

  delay(1000); // Wait 1 second before reading again
}

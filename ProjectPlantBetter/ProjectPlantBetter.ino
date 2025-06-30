// ========== Pins ==========
const int SOIL_SENSOR_PIN = A0;
const int RELAY_PIN = D5;

// ========== Threshold ==========
const int MOISTURE_THRESHOLD = 600; // Adjust based on calibration

void setup() {
  Serial.begin(115200);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW); // Turn off pump initially
}

void loop() {
  int moisture = analogRead(SOIL_SENSOR_PIN);
  Serial.print("Soil Moisture: ");
  Serial.println(moisture);

  if (moisture > MOISTURE_THRESHOLD) {
    // Soil is too dry
    Serial.println("Soil is dry; commencing water");
    digitalWrite(RELAY_PIN, HIGH);              // Turn on pump
    delay(10000);                                // Run pump for 10 seconds
    digitalWrite(RELAY_PIN, LOW);               // Turn off pump
  } else {
    // Soil is fine
  }

  delay(600000); // Wait 10 minutes
}
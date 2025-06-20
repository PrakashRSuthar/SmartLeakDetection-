void setup() {
  Serial.begin(9600);  // Initialize Serial Communication on TX (pin 1)
}

void loop() {
  // Simulate flow rate readings
  int sourceFlow = map(analogRead(A0), 0, 1023, 0, 10);
  int dest1Flow = map(analogRead(A1), 0, 1023, 0, 10);
  int dest2Flow = map(analogRead(A2), 0, 1023, 0, 10);

  // Send data to Master
  Serial.print(sourceFlow);
  Serial.print(",");
  Serial.print(dest1Flow);
  Serial.print(",");
  Serial.println(dest2Flow);

  delay(1000);
}

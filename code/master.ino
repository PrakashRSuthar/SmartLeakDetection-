const int buzzerPin = 8;
const int ledPin = 13;

void setup() {
  Serial.begin(9600);  // Initialize Serial Communication on RX (pin 0)
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);
}

void loop() {
  if (Serial.available()) {
    String data = Serial.readStringUntil('\n');  // Read incoming data
    data.trim();  

    int comma1 = data.indexOf(',');
    int comma2 = data.lastIndexOf(',');

    if (comma1 > 0 && comma2 > comma1) {
      int sourceFlow = data.substring(0, comma1).toInt();
      int dest1Flow = data.substring(comma1 + 1, comma2).toInt();
      int dest2Flow = data.substring(comma2 + 1).toInt();

      // Debugging output
      Serial.print("Source: ");
      Serial.print(sourceFlow);
      Serial.print(" | Dest1: ");
      Serial.print(dest1Flow);
      Serial.print(" | Dest2: ");
      Serial.println(dest2Flow);

      // Leakage Detection
      if (abs(sourceFlow - (dest1Flow + dest2Flow)) > 1) {
        digitalWrite(buzzerPin, HIGH);
        digitalWrite(ledPin, HIGH);
        Serial.println("🚨 Leakage Detected! 🚨");
      } else {
        digitalWrite(buzzerPin, LOW);
        digitalWrite(ledPin, LOW);
      }
    }
  }
}

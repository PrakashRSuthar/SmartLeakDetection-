# 💧 Smart Water Leakage Detector (Arduino + Flow Sensor)

A simple IoT prototype to detect abnormal water flow indicating possible leaks using a **flow sensor and Arduino Uno**.

---

## 🔧 Hardware Used
- Arduino Uno
- YF-S201 Flow Sensor
- Jumper wires
- LCD / Buzzer (optional for alerts)

---

## ⚙️ How It Works
- The flow sensor measures the water flow rate.
- If flow continues unexpectedly (e.g., tap is off), it’s marked as a **leakage**.
- Arduino triggers a buzzer or sends alert (via serial/IoT if extended).

---

## 📷 Prototype
![Circuit](images/circuit_diagram.png)
![Working Prototype](images/prototype.jpg)

---

## 🧪 Code
```cpp
// flow_sensor_leakage.ino
// Reads pulses and calculates flow rate


https://www.tinkercad.com/things/blMhkOKAiOm-master-slave/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=IMs2voCDKlVu3-UOqsg3MWoxqzFw0N9GZiuxcLbjezY

the above link is the working prototype and can be stimulated by adjusting the source and destination flow 
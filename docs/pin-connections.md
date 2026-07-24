# 🔌 Circuit Connections

## PIR Sensor (HC-SR501)

| PIR Sensor Pin | Arduino UNO    |
| -------------- | -------------- |
| VCC            | 5V             |
| GND            | GND            |
| OUT            | Digital Pin D2 |

The PIR sensor detects movement and sends a HIGH signal to the Arduino when motion is detected.

---

## 5V Relay Module

| Relay Pin | Arduino UNO    |
| --------- | -------------- |
| VCC       | 5V             |
| GND       | GND            |
| IN        | Digital Pin D8 |

The Arduino activates the relay when the PIR sensor detects movement.

---

## Relay Output Connection

| Relay Terminal | Connection                       |
| -------------- | -------------------------------- |
| COM            | 5V External Supply               |
| NO             | Ultrasonic Frequency Emitter (+) |
| Emitter (-)    | GND                              |

The relay acts as an electronic switch to control the ultrasonic frequency emitter.

---

## LED Indicator

| LED Connection   | Arduino                   |
| ---------------- | ------------------------- |
| LED Positive (+) | D13 through 220Ω resistor |
| LED Negative (-) | GND                       |

The LED turns ON when the system detects movement.

---

## 🔄 System Operation

1. The PIR sensor continuously monitors for movement.
2. When movement is detected, the PIR sensor sends a HIGH signal to Arduino Digital Pin D2.
3. The Arduino activates the 5V relay through Digital Pin D8.
4. The relay switches ON the ultrasonic frequency emitter.
5. The LED connected to Digital Pin D13 turns ON as a visual indication.
6. The ultrasonic emitter remains active for 5 seconds.
7. The relay and LED are then turned OFF.

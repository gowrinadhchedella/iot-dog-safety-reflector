# 🐕 IoT-Based Smart Dog Attack Prevention System

An IoT-based child safety system designed to detect movement and activate an ultrasonic frequency emitter as an early-warning/animal-deterrent mechanism.

---

## 📌 Project Overview

Stray dog encounters can pose safety risks, especially for small children. This project explores a compact IoT-based system that detects movement using a **PIR sensor** and automatically activates an **ultrasonic frequency emitter** through a **5V relay**.

An LED indicator provides visual feedback whenever movement is detected.

The system is built using an **Arduino UNO** and can be developed and tested using the **Arduino IDE** and **Wokwi** simulation platform.

---

## 🎯 Objectives

* To develop an IoT-based animal detection system
* To detect movement using a PIR sensor
* To automatically activate an ultrasonic frequency emitter
* To provide visual detection feedback through an LED
* To create a low-cost and portable safety-oriented prototype
* To explore the use of IoT for real-world safety applications

---

## 🏗️ System Architecture

```text
                    ┌─────────────────────┐
                    │     PIR SENSOR      │
                    │   HC-SR501 Motion    │
                    │      Detection       │
                    └──────────┬──────────┘
                               │
                               │ Motion Signal
                               ▼
                    ┌─────────────────────┐
                    │    ARDUINO UNO      │
                    │                     │
                    │  D2 ← PIR Sensor    │
                    │  D8 → Relay Control │
                    │  D13 → LED Status   │
                    └───────┬─────┬───────┘
                            │     │
                    Relay Control  │ LED Indication
                            │     │
                            ▼     ▼
                    ┌──────────┐ ┌──────────┐
                    │ 5V RELAY │ │   LED    │
                    └────┬─────┘ └──────────┘
                         │
                         │ Switching
                         ▼
              ┌─────────────────────────┐
              │ ULTRASONIC FREQUENCY    │
              │        EMITTER           │
              └─────────────────────────┘
```

---

## ⚙️ Working Principle

1. The **PIR sensor** continuously monitors for movement.
2. When movement is detected, the PIR sensor sends a HIGH signal to **Arduino Digital Pin D2**.
3. The Arduino processes the signal.
4. The Arduino activates the **5V relay through Digital Pin D8**.
5. The relay switches ON the ultrasonic frequency emitter.
6. The LED connected to **Digital Pin D13** turns ON as a visual indication.
7. The system keeps the emitter active for **5 seconds**.
8. The relay and LED are then turned OFF.

---

## 🔌 Wiring Table

### PIR Sensor (HC-SR501)

| PIR Sensor Pin | Arduino UNO |
| -------------- | ----------- |
| VCC            | 5V          |
| GND            | GND         |
| OUT            | D2          |

### 5V Relay Module

| Relay Pin | Arduino UNO |
| --------- | ----------- |
| VCC       | 5V          |
| GND       | GND         |
| IN        | D8          |

### Relay Output

| Relay Terminal | Connection             |
| -------------- | ---------------------- |
| COM            | 5V External Supply     |
| NO             | Ultrasonic Emitter (+) |
| Emitter (-)    | GND                    |

### LED Indicator

| LED Connection | Arduino UNO               |
| -------------- | ------------------------- |
| Positive (+)   | D13 through 220Ω resistor |
| Negative (-)   | GND                       |

---

## 🧰 Components Used

### Hardware

* Arduino UNO Board
* HC-SR501 PIR Motion Sensor
* 5V Relay Module
* Ultrasonic Frequency Emitter
* DC Battery
* Breadboard
* Jumper Wires
* Copper Wires
* USB Cable
* Laser Light
* Push Button
* 220Ω Resistor
* LED

### Software & Simulation

* Arduino IDE
* Wokwi

---

## 📁 Project Architecture

```text
iot-dog-safety-reflector/
│
├── README.md
│
├── src/
│   └── dog_safety_reflector.ino
│
└── docs/
    ├── components-used.md
    └── pin-connections.md
```

---

## 💻 Source Code

The Arduino source code is available in:

```text
src/dog_safety_reflector.ino
```

---

## 🌟 Key Features

* 🐕 Motion-based animal detection
* ⚡ Automatic relay activation
* 🔊 Ultrasonic frequency emitter control
* 💡 LED-based detection indication
* 🔌 Arduino UNO control system
* 🔋 External power support
* 🧪 Wokwi simulation support
* 💰 Low-cost prototype design

---

## 🔮 Future Enhancements

* AI-based animal detection using a camera
* Mobile application for real-time alerts
* GPS location tracking
* Cloud-based monitoring
* Image recognition and classification
* Machine learning-based threat detection
* Rechargeable battery system
* Improved weather-resistant enclosure

---

## 👨‍💻 Developer

**Gowrinadh Chedella**

Computer Science Engineering Student
MLR Institute of Technology

---

⭐ *Building technology to solve real-world problems.*

```
```

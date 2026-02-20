[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/qfQoGV61)
# 💡 Embedded Light Intensity Monitoring – LDR

![License](https://img.shields.io/badge/license-MIT-blue)
![Platform](https://img.shields.io/badge/platform-Arduino-orange)
![Language](https://img.shields.io/badge/language-C++-blue)


An embedded light intensity monitoring system using a Light Dependent Resistor (LDR) to measure ambient brightness levels through analog data acquisition.

---

## 📑 Table of Contents

- Project Overview
- Hardware Requirements
- Software Requirements
- Wiring Connections
- Working Principle
- Code Structure
- Documentation Requirement
- Submission Requirements
- Future Improvements
- License

---

## 🚀 Project Overview

This project demonstrates light intensity monitoring using an LDR sensor and Arduino (Uno R4 recommended).

The system:

- Reads analog brightness values
- Converts ADC readings
- Applies threshold logic
- Displays structured serial output
- Follows Doxygen documentation standards
- Enforces Git-based workflow

This project introduces:

- Analog sensor interfacing
- ADC (Analog-to-Digital Conversion)
- Threshold-based control logic
- Embedded monitoring systems

---

## 🔧 Hardware Requirements

- Arduino Uno R4
- LDR (Light Dependent Resistor)
- 10kΩ Resistor (Voltage Divider)
- Breadboard
- Jumper wires
- USB cable

---

## 💻 Software Requirements

- Arduino IDE
- Git
- GitHub Account

---

## 🔌 Wiring Connections (Voltage Divider Setup)

| Component | Connection |
|------------|------------|
| LDR One Pin | 5V |
| LDR Other Pin | Analog Pin A0 |
| 10kΩ Resistor | Between A0 and GND |

⚠ LDR must be connected using a voltage divider configuration.

---

## ⚙ Working Principle

- LDR resistance decreases when light increases.
- Voltage across divider changes.
- Arduino ADC converts voltage to digital value (0–1023).
- Brightness level is determined from ADC value.

---

## 🧠 Code Structure

The system:

1. Initializes Serial communication
2. Reads analog value from A0
3. Displays raw ADC value
4. Applies brightness threshold logic
5. Prints structured output

---

## 📚 Documentation Requirement

Students must include:

- File-level Doxygen documentation block
- Function documentation for:
  - `setup()`
  - `loop()`
- Required tags:
  - `@file`
  - `@brief`
  - `@author`
  - `@date`

---

## 📊 Submission Requirements

- Minimum 5 meaningful commits
- Proper commit message format
- All TODO tasks completed
- Doxygen documentation included
- Code must compile successfully

---

## 🔮 Future Improvements

- Convert ADC value to Lux approximation
- Add automatic light control (LED ON/OFF)
- Add LCD brightness display
- Data logging
- IoT cloud monitoring integration

---

## 📜 License

This project is licensed under the MIT License.

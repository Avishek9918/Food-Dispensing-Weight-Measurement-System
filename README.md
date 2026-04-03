# Food Dispensing Weight Measurement System

## 📌 Overview
This project implements a weight measurement system for a food dispensing setup using a load cell, high-resolution ADC, and a microcontroller. The system measures the amount of food dispensed into a container and converts it into digital data for processing.

---

## ⚙️ System Architecture
Load Cell → ADC → Microcontroller → Output

- **Load Cell**: Senses weight and produces a low-level analog signal  
- **ADC (HX711)**: Amplifies and converts analog signal into digital data  
- **Microcontroller (Arduino/ESP32)**: Processes data and outputs weight readings  

---

## 🔧 Features
- High-resolution weight measurement  
- Noise reduction using decoupling capacitors  
- Stable readings using averaging technique  
- Compact and structured PCB design  

---

## 🧩 Components Used
- Load Cell (TAL220 or equivalent)  
- HX711 (24-bit ADC with amplifier)  
- Arduino Nano / ESP32  
- Decoupling Capacitors  
- Connectors and PCB  

---

## 🖥️ Working Principle
The load cell detects weight and generates a small analog signal proportional to the applied force. This signal is amplified and digitized by the HX711 ADC. The microcontroller reads this data, processes it, and outputs the corresponding weight value.

---

## 🧪 Code
The embedded code reads data from HX711 using two pins (DT and SCK), applies calibration, and prints the weight via serial communication.

---

## 🖼️ Design Files
- Schematic Design (KiCad)  
- PCB Layout (KiCad)  
- Embedded Code  

---

## ⚠️ Note
This is a prototype developed within limited time constraints. While it demonstrates correct working principles and system integration, further optimization and refinement may be required for production-level deployment.

---

## 🚀 Future Improvements
- Improved calibration accuracy  
- Enhanced PCB layout for noise reduction  
- Integration with display or IoT system  
- Enclosure and mechanical design  

---

## 👨‍💻 Author
Abhishek Rajora

# AMV-Smart-Water-System
Designed and implemented an IoT water monitoring system utilizing the ESP32 platform. This system provides comprehensive measurement of water usage (flow), quality (TDS), and pressure, featuring real-time data upload, dashboard visualization, and automated alert functionality both hardware and software



# 💧 Smart Water Quality & Water Efficiency Monitoring System

This repository contains our combined **hardware + software IoT project** focused on
monitoring water quality, water usage, and promoting efficient water management.

The system measures real-time water parameters, sends data to the ESP32,
and displays analytics on a webpage — helping households and cities
**save water, detect wastage, and improve water quality.**

---

## 🚀 Project Overview

### 🔹 Hardware: Smart Water Quality Checker
Our hardware device is a **portable, low-cost system** that measures:

- pH Level  
- TDS (Total Dissolved Solids)  
- Water Temperature  

The readings are processed using **ESP32** and displayed on a **16×2 LCD**.  
This helps monitor drinking water quality at home and in the field.

> Block diagram, components, working principle, and expected output are explained in the
> hardware document. :contentReference[oaicite:0]{index=0}

---

### 🔹 Software: Water Efficiency System (Web Dashboard)

We developed a web-based monitoring platform that tracks:

- Water supply
- Flow rate
- Water pressure
- TDS
- Real-time usage trends

Data is sent from ESP32 to the server using **WebSocket**, stored in a database,
and displayed on our dashboard. The system also includes:

- ⚠️ Alerts for abnormal water usage
- 🏆 Reward system for water-saving users
- 📊 Usage comparison dashboard
- 🌐 Contact & About pages

> Full explanation, screenshots, flow, and project objectives are described in the software report.  
> :contentReference[oaicite:1]{index=1}

---

## 🛠️ Tech & Components

### Hardware
- ESP32 Microcontroller  
- pH Sensor  
- TDS Sensor  
- DS18B20 Temperature Sensor  
- 16×2 LCD (I2C)  
- Breadboard, jumper wires, USB power

### Software
- HTML, CSS (UI design)
- JavaScript (WebSocket communication)
- Database for storing live readings
- Sorting logic for rewards and alerts

---

## 🧪 Prototype Output (Example)

pH: 7.1
TDS: 330 ppm
Temp: 25°C


On the dashboard, users can view statistics, rankings, and alerts in real time.

---

## 🎯 Objectives

- Monitor household & city water consumption  
- Encourage people to save water using rewards  
- Improve water safety with quality testing  
- Provide real-time monitoring using IoT  
- Support sustainable water management

---

## 👥 Team Members

- **Aditya Kumar**
- **Mansi Sharma**
- **Vivid Goel**

Mentor: **Dr. Nisha Chugh**

---

## 📌 Future Improvements

- Mobile App integration  
- Auto-alert SMS system  
- Cloud-based analytics dashboard  
- Integration with smart city platforms  

---

## 📷 Prototype & Documents

The repository also includes:

- 📄 Project PDFs (Hardware & Software)
- 🖼️ Prototype screenshots
- 💻 Source code (Web + ESP32)

## 📜 Patent / Intellectual Property

This project is protected under a registered patent:

**Patent Title:** Smart Water Efficiency & Quality Monitoring System  
**Patent Number:** 202511096103 A 
**Status:** Granted 
**Owner:** Aditya Kumar & Team  

Any commercial use, reproduction, or distribution without permission is prohibited.  
For licensing or collaboration, please contact: <adityakumar200424@gmail.com>
https://drive.google.com/file/d/1Jtxg-Wae5J3X4USCAFlQqqdVJIdZTW7O/view?usp=sharing


##  Conclusion

This project demonstrates how IoT, sensors, and software dashboards can work together to build
an efficient, smart, and scalable **digital water monitoring system** — helping save every drop
for future generations.


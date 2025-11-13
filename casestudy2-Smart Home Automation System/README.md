# 🏡 Smart Home Automation System (Java)

A modular, interface-driven Java application that simulates a Smart Home Automation System.
Users can add rooms, install devices, control appliances, and access device-specific features such as brightness, temperature, speed, and volume.

This project follows an **MVC-inspired architecture**, uses **polymorphism**, and is designed for **future extensibility**.

---

## 📌 Features

### 🏠 Room Management
- Add new rooms dynamically
- Each room supports multiple device types
- Display all rooms

### 🔌 Device Management
- Add devices to any room
- Remove any device
- Turn devices ON/OFF (via `Switchable` interface)
- All devices extend the parent `devices` class

### 🎛 Device-Specific Controls
Each device implements specific interfaces based on its capabilities:

| Device Type        | Interfaces Implemented |
|--------------------|------------------------|
| Lights             | `Switchable`, `Brightable` |
| Fan                | `Switchable` |
| Air Conditioner    | `Switchable`, `TempControlable` |
| Television         | `Switchable`, `VolumeControlable`, `Brightable` |
| Shower             | `Switchable`, `TempControlable` |

### 📡 Global Controls
- Turn ON/OFF any device in any room
- Access device features (brightness, volume, temp, etc.)
- View complete home status
- Track device current ON/OFF state

---

## 🧩 System Architecture

### ✔ Interface-Based Design

The following interfaces help segregate behaviors and keep the system flexible:

- **Switchable** → turnOn(), turnOff(), getStatus()
- **Brightable** → setBrightness(), getBrightness()
- **TempControlable** → setTemprature(), getTemprature()
- **VolumeControlable** → increaseVolume(), decreaseVolume(), getVolume()

This ensures the project can support **new devices in the future** with minimal changes.

---

## 📂 Project Structure

```
/src
 └── mvc
     ├── main
     │    └── Main.java
     |
     ├── model
     │    ├── Home.java
     │    ├── Room.java
     │    ├── devices.java
     │    ├── Lights.java
     │    ├── Fan.java
     │    ├── AirConditioner.java
     │    ├── TeleVision.java
     │    └── Shower.java
     |
     └── interfaces
          ├── Switchable.java
          ├── Brightable.java
          ├── TempControlable.java
          └── VolumeControlable.java
```

---

## 🖥 Console Menu (Main.java)

```
1. Add Room
2. Add Device to Room
3. Turn ON Device
4. Turn OFF Device
5. Access Device Features
6. Show Home Status
7. Remove Device
8. Exit
```

---

## 🔧 Example Usage

```java
Home home = new Home("My Smart Home");

Room kitchen = new Room(1, "Kitchen");
home.addRoom(kitchen);

Lights light = new Lights("Ceiling Light", 70);
kitchen.addDevice(light);

light.turnOn();
light.setBrightness(90);
```

---

## 🛠 Extending the System

To add a new device type:

1. Create a new class extending `devices`
2. Implement required interfaces
3. Update device creation logic in `Main.java`
4. Add new feature controls in the menu system

---

## 📘 Reference
Implements all functional requirements from Case Study 2.

---

## ✨ Author
**Soham**

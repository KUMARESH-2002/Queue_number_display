# Queue_number_display
In service areas like bank counters, clinics, or help desks, this device can be used to display the next queue number. Staff or visitors can tap the sensor to increment the queue number shown on the display, simplifying the process and ensuring that customers know when it’s their turn.

## Table of Contents

- [Features](#features)
- [Components](#components)
- [How It Works](#how-it-works)
- [Setup](#setup)
- [Display Connections](#display-connections)

## Features
- Displays an incremented queue number on a display.
- Touch sensor input to increment the queue number.
- Simple, user-friendly design for various applications.

## Components
- Arduino board
- 7-segment display
- Touch sensor 
- Jumper wires and breadboard 

## How It Works
1. The device starts with an initial queue number.
2. Each time the touch sensor is tapped, the queue number increments by one.
3. The updated queue number displays on the OLED or LCD screen.

## Setup

1. **Wiring:**
   - Connect the touch sensor to the Arduino (signal pin to a digital input).
   - Connect the display to the Arduino using the appropriate I2C or SPI pins.
   
2. **Upload Code:**
   - Upload the provided Arduino code (`Queue_number_display_code.ino`) to the Arduino board.
   
3. **Power Up:**
   - Power the Arduino, and the display will show the queue number, incrementing with each tap on the sensor.
  

## Display Connections


![Circuit Diagram](https://github.com/user-attachments/assets/a88b590e-e34c-4823-989d-724ea5d08f95)




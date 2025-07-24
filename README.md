# 🚦 Sequential LED Blinker with Arduino

This simple Arduino project lights up **three external LEDs** (Red, Blue, and White) along with the **built-in onboard LED** in a **sequential pattern**, each staying ON for one second.

## 🧠 What It Does

- Turns ON the **Red LED** for 1 second, then turns it OFF.
- Turns ON the **Blue LED** for 1 second, then turns it OFF.
- Turns ON the **White LED** for 1 second, then turns it OFF.
- Turns ON the **Built-in LED (pin 13)** for 1 second, then turns it OFF.
- Repeats the cycle forever.

## 🧰 Components Required

- Arduino Uno (or compatible)
- 3 LEDs (Red, Blue, White)
- 3x 220Ω resistors
- Breadboard & Jumper wires

## 🔌 Pin Connections

| LED Color  | Arduino Pin |
|------------|--------------|
| Red LED    | 7            |
| Blue LED   | 6            |
| White LED  | 5            |
| Built-in LED | 13 (onboard) |

> Connect each LED anode (longer leg) to the corresponding pin via a **220Ω resistor**. Connect cathode (shorter leg) to **GND**.




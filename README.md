# Treasure Chest Sound Box

This project is a DIY treasure chest that plays a game-inspired melody when opened using a reed switch.

Download or clone this repository and open it in PlatformIO.



## Components

- ESP32-C3 SuperMini
- Reed switch
- Passive buzzer
- LED
- 160 Ω resistor
- Battery or USB power supply (optional, depending on your setup)
- Treasure chest (or any small box)



## Wiring

- GPIO3  -> Reed switch -> GND
- GPIO10 -> Passive buzzer -> GND
- GPIO21 -> Resistor (160 Ω) -> LED -> GND



## Project Structure

```text
src/
├── main.cpp
└── melody.cpp

include/
└── melody.h
```

The `platformio.ini` file is also included.

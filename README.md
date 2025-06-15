# Arduino Joystick LED Direction Indicator

This Arduino project reads the position of a **2-axis analog joystick** and lights up different LEDs based on the direction the joystick is moved.

## Features

- Detects directional movement on X and Y axes.
- Lights up LEDs for: **Up**, **Down**, **Left**, and **Right**.
- Displays joystick position values via Serial Monitor.

## Components Used

- Arduino Uno (or compatible board)
- 2-axis Analog Joystick Module
- 4 LEDs (any color)
- 4 x 220Ω resistors (for LEDs)
- Jumper wires
- Breadboard

## Wiring

| Joystick Pin      | Arduino Pin |
|-------------------|-------------|
| VRx (X-axis)      | A0          |
| VRy (Y-axis)      | A1          |
| GND               | GND         |
| VCC               | 5V          |
| SW (button press) | *not used*  |

| LED Direction | Arduino Pin |
|---------------|-------------|
| Up            | D6          |
| Down          | D7          |
| Left          | D8          |
| Right         | D9          |


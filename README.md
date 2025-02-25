# Automatic Curtain Controller Using Arduino

This repository contains the Arduino code, configuration, and assembly instructions for building an automatic curtain controller using an Arduino and a servo motor. The system opens or closes the curtains based on the intensity of light detected by a Light Dependent Resistor (LDR) <button class="citation-flag" data-index="6">. This project is ideal for automating home environments, improving energy efficiency, and enhancing convenience.

---

## Table of Contents
1. [Overview](#overview)
2. [Components Used](#components-used)
3. [System Dimensions](#system-dimensions)
4. [Assembly Instructions](#assembly-instructions)
5. [Arduino Code Explanation](#arduino-code-explanation)
6. [Contributing](#contributing)
7. [License](#license)

---

## Overview
The automatic curtain controller uses an LDR to detect ambient light intensity and adjusts the position of the curtains accordingly. When the light intensity exceeds a predefined threshold, the servo motor opens the curtains. Conversely, when the light intensity drops below the threshold, the servo motor closes the curtains <button class="citation-flag" data-index="7">. This project is a great way to learn about sensor integration, motor control, and basic automation.

---

## Components Used
To build this automatic curtain controller, you will need the following components:
- **Arduino Uno**
- **Micro Servo (e.g., SG90)**
- **LDR (Light Dependent Resistor)**
- **10kΩ Resistor**
- **Breadboard**
- **Jumper Wires**

---

## System Dimensions
For an ideal automatic curtain controller:
- **Height**: 10–15 cm
- **Width**: 10–15 cm
- **Length**: 10–15 cm

These dimensions ensure that the system is compact yet spacious enough to house all components.

---

## Assembly Instructions
Follow these detailed steps to assemble your automatic curtain controller:

1. **Prepare the LDR Circuit**
   - Connect one leg of the LDR to the 5V pin on the Arduino.
   - Connect the other leg of the LDR to both an analog input pin (e.g., A0) and a 10kΩ resistor.
   - Connect the free end of the resistor to GND. This forms a voltage divider circuit that allows the Arduino to read the light intensity <button class="citation-flag" data-index="6">.

2. **Connect the Servo Motor**
   - Connect the servo motor to the Arduino:
     - **Signal Wire** → Digital Pin 9
     - **Power Wire (Red)** → 5V
     - **Ground Wire (Black/Brown)** → GND
   - Ensure the servo motor is securely mounted near the curtain mechanism to control its movement <button class="citation-flag" data-index="4">.

3. **Power Connections**
   - Power the system using a USB cable connected to the Arduino's power input. If the servo requires more current, use an external power supply for the servo and connect the ground of the external supply to the Arduino's GND.

4. **Final Assembly**
   - Secure all components inside a protective enclosure.
   - Attach the servo motor to the curtain mechanism (e.g., by attaching it to the curtain rod or using a pulley system).
   - Position the LDR in a location where it can accurately detect ambient light levels <button class="citation-flag" data-index="7">.

---

## Arduino Code Explanation
The provided Arduino code reads light intensity from the LDR and controls the servo motor to open or close the curtains accordingly. The system uses a predefined light intensity threshold to determine whether to open or close the curtains <button class="citation-flag" data-index="6">. When the light intensity exceeds the threshold, the servo rotates to open the curtains. When the light intensity drops below the threshold, the servo rotates to close the curtains.

---

## Contributing
Feel free to fork this repository and contribute improvements or new features. If you have suggestions or find bugs, please open an issue.

---

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

By following this guide, you should be able to build and test your own automatic curtain controller using the Arduino and a servo motor. Happy tinkering! 🚀

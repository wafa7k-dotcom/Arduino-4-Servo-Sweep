# Arduino-4-Servo-Sweep
Arduino project that controls four servo motors. The servos perform a sweep motion for two seconds, then stop and hold at a 90° angle. Designed and simulated using Tinkercad.

https://www.tinkercad.com/things/jMZ2S89D4nw-incredible-albar?sharecode=nOrAz78e6HB4udNIpN-gXRCxMJ0OKLEJljgxhifT0ao

# Four Servo Motors Sweep Using Arduino
Project Description
This project demonstrates how to control four Servo Motors using an Arduino Uno in Tinkercad.
The four Servo Motors perform two movements in sequence:
All Servo Motors move repeatedly from side to side using the Sweep movement for two seconds.
After two seconds, all Servo Motors stop and remain fixed at a 90-degree angle.

# Components
1- Arduino Uno
2- 4 Servo Motors
3- Jumper Wires
4- Tinkercad Circuits

# Servo Motor Connections

Arduino Pin 3 -> Servo 1
Arduino Pin 5 -> Servo 2
Arduino Pin 6 -> Servo 3
Servo 4 -> Arduino Pin 9

# For each Servo Motor:
Red wire: 5V
 black wire: GND
Green wire: Signal pin

# How the Project Works
When the simulation starts, the four Servo Motors move together from 0 degrees to 180 degrees and return from 180 degrees to 0 degrees.
This Sweep movement continues for only two seconds.
After the two seconds are completed, all four Servo Motors move to 90 degrees and remain fixed in that position.
The movement is placed inside the setup() function so that it runs only once. The loop() function is left empty to prevent the movement from repeating.

# Project Files
Four_Servo_Sweep.ino: Arduino source code.
README.md: Project documentation.
images/circuit.png: Screenshot of the Tinkercad circuit.
Project demonstration video.

# Simulation
The project was designed and tested using Tinkercad Circuits.

# Project Result
All four Servo Motors successfully perform the Sweep movement for two seconds and then stop at a 90-degree angle.

# Author
Wafaa Alluhaidan

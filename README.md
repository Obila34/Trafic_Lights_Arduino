# Trafic_Lights_Arduino
I’m excited to share my latest project: an Arduino-based traffic light system with a 2-second switch delay. This was a great exercise in learning about timing and state control in microcontrollers. What do you think?

How I Built It
To create this Arduino-based traffic light system, I started by wiring a red, yellow, and green LED to a breadboard. I connected each LED's anode (positive, longer leg) to a digital pin on the Arduino Uno, using a current-limiting resistor for each to prevent them from burning out. The cathodes (negative, shorter legs) were all connected to the Arduino's ground (GND) pin.
The magic happens in the code. I used the Arduino IDE to write a simple program that controls the sequence and timing of the lights. The code defines which digital pins are connected to each LED and then uses digitalWrite() to turn the LEDs on (HIGH) and off (LOW). To create the 2-second delay, I used the delay() function, which pauses the program for a specified number of milliseconds.
The sequence is straightforward:
 * The red light turns on for 5 seconds.
 * Then, the yellow light turns on for 2 seconds.
 * Finally, the green light turns on for 5 seconds before the cycle repeats.
This project is a fantastic introduction to basic electronics and microcontroller programming, demonstrating how simple components can be combined with code to create a functional system.

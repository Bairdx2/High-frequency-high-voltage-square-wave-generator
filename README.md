# High frequency high voltage square wave generator using an h-bridge

Square waves are a special type of PWM signal in which the duty cycle is 50%. These types of waves are can be easily produced by microcontrollers but one limitation is the output voltage of the square wave. Most microcontrollers are 5V or 3.3V logic meaning that the highest possible Vpp is 5V or 3.3V respectively. One work around to this limitation is by using an H-bridge. H-bridges are normally used to drive motors forwards and backwards by switching the voltage polarity but most are capable of a pulse width modulated (PWM) output to simulate an analog voltage to make motors rotate faster or slower. Since the output voltage is capable of being modulated, by using a microcontroller, 50% modulation becomes simple. The motor driver used in this work has a maximum input voltage rating of 30V so this means that square waves with Vpp of 30V are possible.

![alt text](https://i.imgur.com/VBqVKss.png)
***Figure 1***: TB6612FNG motor driver board.

## Table of Contents:
- Items needed
- Schematic diagram
- Application data
- Considerations

### Items needed:

### Schematic diagram

### Application data

### Considerations

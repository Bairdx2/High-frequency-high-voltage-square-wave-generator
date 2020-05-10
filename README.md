# High frequency high voltage square wave generator using an h-bridge

Square waves are a special type of PWM signal in which the duty cycle is 50%. These types of waves are can be easily produced by microcontrollers but one limitation is the output voltage of the square wave. Most microcontrollers are 5V or 3.3V logic meaning that the highest possible Vpp is 5V or 3.3V respectively. One work around to this limitation is by using an H-bridge. H-bridges are normally used to drive motors forwards and backwards by switching the voltage polarity but most are capable of a pulse width modulated (PWM) output to simulate an analog voltage to make motors rotate faster or slower. Since the output voltage is capable of being modulated, by using a microcontroller, 50% modulation becomes simple. The motor driver used in this work has a maximum input voltage rating of 15V so this means that square waves with Vpp of 15V are possible. This motor driver also has two channels available increasing its usefulness.

![alt text](https://i.imgur.com/VBqVKss.png)

***Figure 1***: TB6612FNG motor driver board.

## Table of Contents:
- Items needed
- Schematic diagram
- Useful application
- Considerations
##
### Items needed:

1. Microcontroller (I used the Arduino UNO but any microcontroller with PWM will work)
2. [Motor driver](https://www.sparkfun.com/products/14450)
3. [Potentiometer](https://www.sparkfun.com/products/9806)
##
### Schematic diagram

![alt text](https://i.imgur.com/3ZBet1Q.png)

***Figure 2***: Microcontroller and motor driver connection schematic.

The schematic above has an arduino that controls the duty cycle of the motor driver output. The top potentiometer connects to the arduino and rotating the dial increases or decreases the duty cycle of the arduino PWM signal. Connect an oscilloscope to the output of the motor driver and rotate the potentiometer to change the duty cycle.
##
### Useful application

One very useful application of this circuit is that the square waves can be used to determine capacitance. The circuit below has the output of the motor driver connected to a capacitor and potentiometer that are in series. With an oscilloscope, the signal entering the potentiometer and the signal entering the capacitor are probed. The signal entering the potentiometer is square shaped but the signal entering the capacitor has a curvature as it rises. This curvature is the capacitor charging. The amount of time it takes for the capacitor to charge 63.2% is known as the RC time constant (τ) because in this case the circuit consists of a resistor (R) in series with a capacitor (C). This relationship is as follows: *τ = RC*. In this circuit, R is a known value and so is τ so therefore we can solve for capacitance and this is really useful when one comes across capacitors with unknown values. More information about this technique can be found [here](https://en.wikipedia.org/wiki/RC_time_constant) and [here](https://forum.arduino.cc/index.php?topic=173708.0)

![alt text](https://i.imgur.com/YJULPpa.png)

***Figure 3***: Application schematic.

![alt text](https://i.imgur.com/YgjZy7b.png)

***Figure 4***: Oscilloscope probe at potentiometer input.

![alt text](https://i.imgur.com/eRJsuba.png)

***Figure 5***: Potentiometer probe at capacitor input.

##
### Considerations

1. The microcontroller used in this work was the Arduino UNO and its PWM output is fixed at certain frequencies depending on the pin used. In this case, pin 3 was used and it is fixed at ~490.20Hz. Pin 11, 9 and 10 is also fixed at this frequency. Lastly, pins 5 and 6 are fixed at 976.56Hz. Luckily these frequencies can be changed to other frequencies and more information can be found [here](https://arduinoinfo.mywikis.net/wiki/Arduino-PWM-Frequency) and [here](https://www.arduino.cc/en/Tutorial/SecretsOfArduinoPWM)
2. This project can also be used as a variable power supply. Connect the outputs of figure 2 to a multimeter and rotate potentiometer. Variable voltage output is seen because the duty cycle is adjusted and the multimeter can not read the signal fast enough.
3. A DSO138 single channel oscilloscope was used for the circuit measurements which is why the two readings were not simultaneously measured.
4. The DSO138 has a sample rate of 1Ms/S which may not be sufficient to measure certain capacitance values.

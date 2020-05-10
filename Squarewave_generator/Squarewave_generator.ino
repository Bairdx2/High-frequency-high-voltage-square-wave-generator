///////////////////////////////////////////////////////////////
// Script:   Squarewave_generator.ino                                  
// Description: This file allows an arduino to pulse width modulate
//				(PWM) the output of a TB6612FNG motor driver. The
//				PWM is controlled by the potentiometer reading.           
//                                                            
// Author:  Kevin Rivera                                     
// Creation Date:  05.09.20 v1.0                              
///////////////////////////////////////////////////////////////


const int PWMA = 3;                  //PWM arduino pin that is used to connect to the motor driver.
int potVal = 0;                      //Integer variable that will be used to keep track of the potentiometer value.
float PWMVal = 0;                    //Integer variable that will be used to keep track of the PWM output value.



void setup() {

  //Nothing to see here 

}

void loop() {

  potVal = analogRead(A1);             //The potentiometer value is read and recorded here.
  PWMVal = (255.0/1023.0)*potVal;      //The PWM value is calculated based on the current potentiometer value.
  analogWrite(PWMA, PWMVal);           //The PWM value is set and output.
  
}

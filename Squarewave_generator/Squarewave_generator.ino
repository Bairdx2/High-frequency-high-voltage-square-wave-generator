///////////////////////////////////////////////////////////////
// Script:   Squarewave_generator.ino                                  
// Description: This file allows an arduino to pulse width modulate
//				(PWM) the output of a TB6612FNG motor driver. The
//				PWM is controlled by the potentiometer reading.           
//                                                            
// Author:  Kevin Rivera                                     
// Creation Date:  05.09.20 v1.0                              
///////////////////////////////////////////////////////////////


const int PWMA = 3;
int potVal = 0;
float DACVal = 0;



void setup() {

  //Nothing to see here 

}

void loop() {

  potVal = analogRead(A1);
  DACVal = (255.0/1023.0)*potVal;
  analogWrite(PWMA, DACVal);
}

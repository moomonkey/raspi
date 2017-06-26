
 
  /*
Setup for Pure_Raspi using two lightsensors
on pin A0 and A1 and a pushbutton is on pin 2 (digital)
This is the first script for testing the sensor values in the serial window
Eva Sjuve, ITP Camp 2017, Interactive Telecommunications Program, NYU, June 2017
  */
 
 // Constant pin declarations ////////////////////
 const int light1Pin = A0; // Light
 const int light2Pin = A1; // Carbon
 const int pushButtonPin = 2; // pushbtton variable on digital pin 2
// variables
 int Light1 = 0; // initial values
 int Light2 = 0;        
 int pushButton;
 int debounceDelay = 30; // the pushButton is mechanical, a delay so it doesn't read twice

 // SETUP FUNCTION BEGIN ///////////////////////
 void setup(void) 
 {  
  Serial.begin(9600);
  // set up pushButton on pin2 as input
  pinMode(pushButtonPin, INPUT);
 }

 // LOOP FUNCTION BEGIN ///////////////////////
 void loop(void) 
 {
  // read the analog in value and fit into a byte /4:
  Light1 =  analogRead(light1Pin)/4;  
  delay(10); // delay so the ADC can be done
  Light2 = analogRead(light2Pin)/4;  
  delay(10); // delay so the ADC can be done
  // pushbutton
 pushButton = digitalRead(pushButtonPin);
 debounceDelay; //
  // wait for all sensors
  delay(10);
  
  // print out the results from the sensors (ASCII):  
  Serial.print(Light1);
  Serial.print(" ");
  Serial.print(Light2);
  Serial.print(" ");
  Serial.print(pushButton);
  Serial.println(" ");
  delay(10);
 }

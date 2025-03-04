/*
I will be coding this into a function so that I can add it into the main document 
and call the function later
*/

// Define analog input- defined constants don't take up any memory on the arduino chip (good for optimization)
#define capSensorPin A0
//capSensorPin is the name of the A0 output pin ( connected to the mositure sensor)

void setup() {
      Serial.begin(9600);
      Serial.print("This is the start of Capacitative Moisture sensor function code ");
      Serial.print("\n");
  //begin serial monitor (might change the bits/sec later)
  //guide : https://docs.arduino.cc/language-reference/en/functions/communication/serial/begin/ 
}

void loop() {
 soilMoistureSensor(capSensorPin);
  
//call this function to run the sensor 
  //I should later move/include the sleep (); and delay(); in this main loop instead 
  //and make the long if loop/ operations from this function data -> water pump connection 
}

void soilMoistureSensor(int sensorInput){
  //this might be a bad parameter name but we can fix that later 
  //this function will call the moisture sensor 
  // change the parameter to include the pin of the moisture sensor (??)

  //take the data : 
  int value = analogRead(sensorInput);
  //is it redundant to take data, store it in variable, and then show it in the serial monitor? 
  // ( better to just call data from serial monitor directly? )
  //^ this could be usefull when we transfer to bluetooth and have to send the data instead of the serial monitor 

  // Print the value to the serial monitor
  Serial.print("Analog output: ");
  Serial.print(value\n);
  //print the value and then enter to next line
  
  delay(2000);
}

/*
The plan is to run soilMoistureSensor() a few times, and then store the avg measurements in a variable that will determine the water 
pump activity later 

also there should be a loop for the soilMoistureSensor() function, and after a few measurements it should go to sleep for a few minutes
this part will go into the main loop */


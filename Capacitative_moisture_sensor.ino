/*
This will be a code for the moisture sensor - so that we are ready to connect it once it arrives in the mail 
I will be coding this into a function so that I can simply add it into the main document 
and call the function later ^^ 
*/

// Define analog input- defined constants don't take up any memory on the arduino chip ( good for optimization)
#define capSensorPin A0
//capSensorPin is the name of the A0 output pin ( connected to the mositure sensor)

void setup() {
      Serial.begin(9600);
  //begin serial monitor ( might change the bits/sec)
  //guide : https://docs.arduino.cc/language-reference/en/functions/communication/serial/begin/ 
}

void loop() {
 soilMoistureSensor(capSensorPin);
//call this functionto hopefully run the sensor 
  //I should later move/include the sleep (); and delay(); in this main loop instead 
  //and make the long if loop/ operations from this function data -> watering pump connection 
}

void soilMoistureSensor(sensorInput){
  //this might be a bad parameter name but we can fix that later 
//this functino will call the moistuer sensor 
  // change the parameter to include the pin of the moisture sensor 

  //take the data : 
  int value = analogRead(sensorInput);
  //is it redundant to take data, store it in variable, and then show it in the serial monitor? 
  // ( better to just call data from serial monitor directly? )
  //^ this could be usefull when we transfer to bluetooth and have to send the data instead of the serial monitor 

  //for now, this will be in this function, later we should take it out (change it )

  // Print the value to the serial monitor
  Serial.print("Analog output: ");
  Serial.print(value\n);
  //print the value and then enter to next line
      
  // set the machine to sleep for 2 seconds 
  // ( is this efficient? should I just put delay instead( what is the difference )? )
  sleep(2000);

  
}


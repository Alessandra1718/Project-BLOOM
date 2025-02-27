/*
capcitiative soil moisture sensor testing and callibrating ( once we get it, this will be the first steps to our testing to make sure we know the 
correct values for our sensor )
*/

//is it worth having this in a separate function for the testing code? should I just put this in the main loop to calibrate it 
// this takes up 9% of memory, leaving ~1000 bytes of space out of the ~2000 byte memory 
//internet sources: (calibration)
#define capSensorPin A0

void setup() {
      Serial.begin(9600);
      Serial.print("Hello! ");

  //begin serial monitor ( might change the bits/sec)
  //guide : https://docs.arduino.cc/language-reference/en/functions/communication/serial/begin/ 
}

void loop() {
 soilMoistureSensor(capSensorPin);
}

void soilMoistureSensor(int sensorInput){

  //take the data : 
  int value = analogRead(sensorInput);

  // Print the value to the serial monitor
  Serial.println("Analog output: ");
  Serial.println(value);
  //print the value and then enter to next line

//sleep is the most efficient -> it turns off the machine to low power mode ( but for the purposes of this testing we need to delay the program )
  delay(2000);
  //lower number means more moisture -> higher number means dryer moistures 

  
}


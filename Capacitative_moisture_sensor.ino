/*
This will be a code for the moisture sensor - so that we are ready to connect it once it arrives in the mail 
I will be coding this into a function so that I can simply add it into the main document 
and call the function later ^^ 
*/
// Define analog input
#define sensorPin A0

//(redo that part)^^^^

void setup() {
      Serial.begin(9600);
  //begin time 
}
//change this into a function 

void loop() {
 soilMoistureSensor(parameterHere);
//call this function 
  
}

void soilMoistureSensor(parameterHere){
//this functino will call the moistuer sensor 
  // change the parameter to include the pin of the moisture sensor 
// 

  //take the data : 
  int value = analogRead(sensorPin);

  // Print the value to the serial monitor
  Serial.print("Analog output: ");
  Serial.println(value);

  // set the machine to sleep for 2 seconds 
  // ( is this efficient? should I just put delay instead( what is the difference )? )
  sleep(2000);

  
}


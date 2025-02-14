/*
This is going to be the function for the water pump to later connect this with the moisture sensor 
-> 
*/

void setup() {
  Serial.begin(9600);
//( is this the right command to activate it ??)
    
}

void loop() {
    waterPump(parameterHere);
}

//  Serial.print("Water pump state: ");
// print wether the water pump is high or low for debuging 

void waterPump(parameterHere){
  
  //pass for now, but basically upon the given parameter, ( maybe a variable state)
  // turn on the water pump, and then water for 5-10 seconds
  // and then turn it off 
  // return something something to deactivite the sensor measurment 
  // it is IMPORTANT -> that the sensor and the pump are separate from eachother to some degree ( or we have to coat it in epoxy )
  
}




/*
This is going to be the function for the water pump to later connect with the moisture sensor 
-> do we need a button to try to make this work ? 
https://www.robotique.tech/robotics/control-a-water-pump-by-arduino/ 
*/

const int relayWaterPump = 2 
// relay water pump connected to pin 2 and GND on arduino 

void setup() {
  Serial.begin(9600);
  pinMode(relayWaterPump, OUTPUT);

}

void loop() {
    waterPump(Moisture);
}

//  Serial.print("Water pump state: ");
// print wether the water pump is high or low for debuging 

void waterPump(Moisture){
  //change the parameter later to make this legible
  if (Moisture > 200){
    digitalWrite(relayWaterPump, LOW);
    //if the moisture is too high, turn the water pump off
    //moisture is going to become dependent on moisture sensor 
    // for this test we could work with  a button instead
  }else if (Moisture >100){
    //replace these numbers later with more realistic numbers, remember to 
    // add different if and else cases 
    digitalWrite(relayWaterPump, HIGH);
    delay(5000);
    //in order for it to not constantly take measurements, we wait 5 sec to check again 
    // take this away and put this in the main function loop 
    digitalWrite(relayWaterPump, LOW);
    //moistureSensor(OFF) somehow here 
  }
  
  //pass for now, but basically upon the given parameter, ( maybe a variable state)
  // turn on the water pump, and then water for 5-10 seconds
  // and then turn it off 
  // return something something to deactivate the sensor measurment 
  // it is IMPORTANT -> that the sensor and the pump are separate from eachother (physically) ( and we have to coat it in epoxy )
  
}




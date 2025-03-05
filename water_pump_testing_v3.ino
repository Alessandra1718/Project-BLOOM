/*
This is going to be the function for the water pump to later connect with the moisture sensor 
-> do we need a button to try to make this work ? 
https://www.robotique.tech/robotics/control-a-water-pump-by-arduino/ 
*/

const int relayWaterPump = 2 
// relay water pump connected to pin 2 and GND on arduino 
const int waterButton = 3 
//a button connected to pin 3 that we will press to activate the pump 

void setup() {
  Serial.begin(9600);
  Serial.print("Water pump testing: ");

  pinMode(waterButton, INPUT);
  pinMode(relayWaterPump, OUTPUT);
}

void loop() {
    waterPump(waterButton);
}


void waterPump(Button){
  //change the parameter later to make this legible
  Serial.println(relayWaterPump);
  //I want it to print the state of the water pump always -> maybe move this inside of the IF Loops

  if (Button == 0){
    //if the button is pressed, turn on the water pump 
    digitalWrite(relayWaterPump, HIGH);
  }else{
    digitalWrite(relayWaterPump, LOW);
    //if the button is turned off or released 
  }
  
}





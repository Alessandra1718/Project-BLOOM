/*
MAIN BRANCH Sketch 
APR 1 - IT WORKS !! Refer to serial monitor log (4)
it works when held and it goes to 296 ( OFF)
in air 456 ( ON )
*/
// this will be the sketch that puts together all parts to run on the arduino ( finaly )
//keep an eye on bits and program space mitigation 
//declare variables and pins here : 

#define capSensorPin A0
//capacitiative moisture sensor, imported from moisture sensor v3 
int value; 
//global variable - > the one inside the cap mositure sensor thing 
int sensorAvg; 
//the averadge of the mositure sensor readings 

//passive variable for the function 

// relay water pump connected to pin 2 and GND on arduino 
const int relayWaterPump = 2 ;

void setup() {
  Serial.begin(9600);
  Serial.println("This is the start of main arduino program code, lots of debugging prints to follow:  ");

  Serial.print("Water pump testing starts (output set): ");
  pinMode(relayWaterPump, OUTPUT);
  //set the water pump to testing 
delay(5000);
}

void loop() {

    //take the avg of sensor readings (not finished! )
 //sensorAvg = soilMoistureSensor(capSensorPin);
  
  soilMoistureSensor(capSensorPin);
  //is this neccesary ? 
  //sensor function here 

//it feels kind of stupid to be declaring everything as int but i need this work ? 
  /*
  if (int(value) >= int(300)){
  //waterPump("Yes");
  Serial.println("moisture >= 300, water pump TRUE (working) ");

  digitalWrite(relayWaterPump, HIGH);

}else if (int(value) <= int(300)){ 
  //waterPump("No");
  Serial.println("moisture <= 300, water pump FALSE (off) ");

  digitalWrite(relayWaterPump, LOW);
}else{ 
  Serial.println("its reached the extra else. its not < or > 300 of reading soil. Maybe the soil value isnt even getting here !   ");
   */
  

  //main algorithm loop: 
if (soilMoistureSensor(capSensorPin) >= 450){
  //waterPump("Yes");
  Serial.println("moisture >= 450, water pump TRUE (working) ");

  digitalWrite(relayWaterPump, HIGH);
  delay(1000);

}else if (soilMoistureSensor(capSensorPin) <= 449){ 
  //waterPump("No");
  Serial.println("moisture <= 449, water pump FALSE (off) ");

  digitalWrite(relayWaterPump, LOW);
  delay(3000);
  //wait before taking the next measurement ( should this delay be somewhre else ? )
}else{ 
  Serial.println("its reached the extra else. its not < or > 450 of reading soil. Maybe the soil value isnt even getting here ! water pump OFF  ");
  digitalWrite(relayWaterPump, LOW);
}
    /*
if : sensor reads a certain value or more : 
activate the water pump and stop the readings of the sensor 

else : 
do nothing, skip 

once you are done : 
sleep / turn off ? ( sleep -> program will always be running anyways  )
*/

  
  // time sleep 1 hour - testing for 5 seconds  
  // connect the capacitative sensor
  // check in on plant and the readings 
  // large if statement ( can this be optimized?)(into a separate function?) on different readings in sensor : their results 
  // this will need a separate dataset ( file?) to test different soil moisture levels and determine which is which 
  // take measurements and make a data table sample of differnt measurmemts 
  // code in peices: 
  // - pump running when called on (function)
  // - measurments of moisture sensor (function separately)
  // - add connections to wifi module/serial input -> later website 
  // - lED light up (debug) or some sort of power mitigation circuit 
  //other platforms ( future) : add connection to serial print onto a website, add wifi/bluetooth module 
  // add access for phones and other ways to see this information ( once the first is sucessfull) 
}


//bring functions here : 

/*
//water pump function but idk if this worksss.... 
void waterPump(passiveVar){
  //change the parameter later to make this legible
  Serial.println(relayWaterPump);
  //I want it to print the state of the water pump always -> maybe move this inside of the IF Loops

 //change the parameters 
  if (passiveVar == "Yes"){
    //if the button is pressed, turn on the water pump 
    //REMINDER: pass something else here eventually 
    digitalWrite(relayWaterPump, HIGH);
  }else if (passiveVar == "No"{
    digitalWrite(relayWaterPump, LOW);
    //if the button is turned off or released 
  }else{
    Serial.println("Not no or yes. but a secret third option. ( Water pump function) ");
  }

  */
//got rid of this function cause it doesnt work rn, but something is off in the way it returns things ? idk 

//is it more efficient to call this function mulitple times or to have the measuring loop (analogRead) mulitple times in the function and only 
// call it once in the main loop? 
// so adding a while/for loop inside this function or in the main loop with the function in it? 
//March 19 2025

//This is the function for the capacitative moisture sensor 
int soilMoistureSensor(int sensorPinInput){
  //this function will call the moisture sensor 
  
  //take the data : 
  int value = analogRead(sensorPinInput);

  // Print the value to the serial monitor
  Serial.print("Analog output of sensor: ");
  Serial.println(value);
  //print the value and then enter to next line
  
  delay(2000);
  return int(value); 
  Serial.println("value has been returned");
}

/*
The plan is to run soilMoistureSensor() a few times, and then store the avg measurements in a variable that will determine the water 
pump activity later 

also there should be a loop for the soilMoistureSensor() function, and after a few measurements it should go to sleep for a few minutes
this part will go into the main loop - Feb 2025*/



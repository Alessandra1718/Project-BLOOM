/* 
MAIN BRANCH Sketch ( move everything to a separate branch in git? )
*/
// this will be the sketch that puts together all parts to run on the arduino ( finaly )
//keep an eye on bits and program space mitigation 
//declare variables and pins here : 


void setup() {
    //being serial monitor ( or bluetooth connection later )

  // set up moisture sensor, add all other connections and power GND
  //capacitative moisture sensor ( ordered to come next week) and lcd screen library import HERE
}

void loop() {
  // put your main code here, to run repeatedly:

  //main algorithm loop : 
/*
little intro to our program ( message? ) 
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

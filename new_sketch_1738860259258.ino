/*
This code is just to test our new arduino board and see if it works properly 
We tested our breadboard and LEDs as well, connecting the GND and 13 pins respectively to the Red LED 
Next step : bring a battery pack and 
*/

void setup() {
  //seutp before the running of the code, declare pins 
  pinMode(13, OUTPUT);
  //13 is the output to which the led is connected ( the other end is connected to gnd pin )
    
}

void loop() {
  digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(2000);             // wait for two second
  digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);             // wait for a second

}

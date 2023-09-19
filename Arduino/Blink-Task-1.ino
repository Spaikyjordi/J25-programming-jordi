void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(1500);                      // wait for a second
  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(1000);    
  digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(1000);     
}

// the loop function runs over and over again forever
void loop() {
 
  digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(125);    
    digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(125);              // wait for a second
   digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(125);    
    digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(125);                // wait for a second
   digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(125);    
    digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(125);                // wait for a second
   digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(125);    
    digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(125);                // wait for a second
}


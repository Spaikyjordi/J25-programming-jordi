void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(13, 0);   // 3 second delay to prepare to read morse code
  delay(3000);  
}


void loop() {
  //J
  digitalWrite(13, 1);  
  delay(1000);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(1000);           
    digitalWrite(13, 1);  
  delay(3000);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(1000);  
     digitalWrite(13, 1);  
  delay(3000);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(1000);  
   digitalWrite(13, 1);  
  delay(3000);
     digitalWrite(13, 0);  
  delay(3000);

  //O
    digitalWrite(13, 1);  
    delay(3000);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(1000);  
     digitalWrite(13, 1);  
  delay(3000);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(1000);  
   digitalWrite(13, 1);  
  delay(3000);
     digitalWrite(13, 0);  
  delay(3000);

  //R
    digitalWrite(13, 1);  
  delay(1000);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(1000);     
     digitalWrite(13, 1);  
  delay(3000);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(1000);    
    digitalWrite(13, 1);  
  delay(1000);                      
     digitalWrite(13, 0);  
  delay(3000);  

  //D   
    digitalWrite(13, 1);  
  delay(3000);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(1000); 
  digitalWrite(13, 1);  
  delay(1000);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(1000);   
   digitalWrite(13, 1);  
  delay(1000);                      
    digitalWrite(13, 0);  
  delay(3000);

  //I
  digitalWrite(13, 1);  
  delay(1000);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(1000);   
   digitalWrite(13, 1);  
  delay(1000);                      
     digitalWrite(13, 0);  
  delay(5000);
}

int dot=1000;
int dash=3000;
int del=1000;
int del3=3000;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(13, 0);   // 3 second delay to prepare to read morse code
  delay(3000);  
}


void loop() {
  //J
  digitalWrite(13, 1);  
  delay(dot);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);           
    digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);  
     digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);  
   digitalWrite(13, 1);  
  delay(dash);
     digitalWrite(13, 0);  
  delay(del3);

  //O
    digitalWrite(13, 1);  
    delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);  
     digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);  
   digitalWrite(13, 1);  
  delay(dash);
     digitalWrite(13, 0);  
  delay(del3);

  //R
    digitalWrite(13, 1);  
  delay(dot);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);     
     digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);    
    digitalWrite(13, 1);  
  delay(dot);                      
     digitalWrite(13, 0);  
  delay(del3);  

  //D   
    digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del); 
  digitalWrite(13, 1);  
  delay(dot);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);   
   digitalWrite(13, 1);  
  delay(dot);                      
    digitalWrite(13, 0);  
  delay(del3);

  //I
  digitalWrite(13, 1);  
  delay(dot);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);   
   digitalWrite(13, 1);  
  delay(dot);                      
     digitalWrite(13, 0);  
  delay(5000);

  dot = dot*0.5;
  del = del*0.5;
  dash = dash*0.5;
  del3 = del3*0.5;
}

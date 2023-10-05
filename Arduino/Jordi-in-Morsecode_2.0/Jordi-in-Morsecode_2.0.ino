int dot=1000;
int dash=3000;
int del=1000;
int del3=3000;

void morse_J() {
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
}
void morse_O() {
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
}
void morse_R() {
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
}
void morse_D() {
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
  }
  void morse_I() {
  digitalWrite(13, 1);  
    delay(dot);                      
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
    delay(del);   
    digitalWrite(13, 1);  
    delay(dot);   
        digitalWrite(13, 0);  
    delay(del3);
  }

  void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
      digitalWrite(13, 0);   // 3 second delay to prepare to read morse code
    delay(3000);  
  }

  void loop() {
  morse_J();
  morse_O();
  morse_R();
  morse_D();
  morse_I();
  delay(3000);
  }


// Alphabet
int dot=1000;
int dash=3000;
int del=1000;   // delay in side of the same letter
int del3=3000;  // delay  etween letters

//A
void morse_A() {
  digitalWrite(13, 1);  
   delay(dot);
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
   delay(del); 
  digitalWrite(13, 1);  
   delay(dash);
  digitalWrite(13, 0);  
   delay(del3);
}
//B
void morese_B() {
 digitalWrite(13,1);
 delay(dash);
 digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);
 digitalWrite(13, 1);  
  delay(dot);                      
 digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);   
 digitalWrite(13, 1);  
  delay(dot); 
 digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);
 digitalWrite(13, 1);  
  delay(dot);                      
 digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del3);
}
//C
void morse_C() {
 digitalWrite(13,1);
  delay(dash);
 digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);
 digitalWrite(13, 1);  
  delay(dot);                      
 digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);   
 digitalWrite(13,1);
  delay(dash);
 digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);
 digitalWrite(13, 1);  
  delay(dot);                      
 digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del3);   
}
//D
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
//E
void morse_E(){
 digitalWrite(13, 1);  
    delay(dot);                      
  digitalWrite(13, 0);  
    delay(del3);
}

//F
void morse_F() {
 digitalWrite(13, 1);  
  delay(dot); 
 digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);
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
//G
void morse_G() {
 digitalWrite(13, 1);  
  delay(dash);
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
//H
void morse_H() {
digitalWrite(13, 1);  
  delay(dot);                      
 digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);   
  digitalWrite(13, 1);  
  delay(dot);                      
 digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);   
 digitalWrite(13, 1);  
  delay(dot); 
 digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);
 digitalWrite(13, 1);  
  delay(dot);                      
 digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del3);
}
//I
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
//J
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
  
//K
void morse_K() {
digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del); 
   digitalWrite(13, 1);  
  delay(dot);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);  
  digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del3); 
}
//L
void morse_L() {
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
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);  
   digitalWrite(13, 1);  
  delay(dot);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del3);  
}
//M
void morse_M() {
    digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);  
   digitalWrite(13, 1);  
  delay(dash);
     digitalWrite(13, 0);  
  delay(del3);
}
//N
void morse_N() {
     digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del); 
     digitalWrite(13, 1);  
  delay(dot);                      
     digitalWrite(13, 0);  
  delay(del3);  

}
//O
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
//P
void morse_P(){
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
  delay(dot);                      
     digitalWrite(13, 0);  
  delay(del3); 
}
//Q
void morse_Q(){
     digitalWrite(13, 1);  
    delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);  
     digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del); 
    digitalWrite(13, 1);  
  delay(dot);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);     
     digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del3);    
}
//R
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
//S
void morse_S(){
   digitalWrite(13, 1);  
  delay(dot);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del); 
     digitalWrite(13, 1);  
  delay(dot);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del); 
     digitalWrite(13, 1);  
  delay(dot);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del3); 
}
//T
void morse_T(){
 digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del3);
}
//U
void morse_U(){
     digitalWrite(13, 1);  
  delay(dot);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del); 
     digitalWrite(13, 1);  
  delay(dot);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del); 
      digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del3);
}
//V
void morse_V(){
    digitalWrite(13, 1);  
  delay(dot);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del); 
    digitalWrite(13, 1);  
  delay(dot);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del); 
     digitalWrite(13, 1);  
  delay(dot);                      
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del); 
      digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del3);
}

//W
void morse_W(){
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
  delay(del3);
}
//X
void morse_X(){
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
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del); 
      digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del3);
}
//Y
void morse_Y(){
 digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);
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
  delay(del3);
}
//Z
void morse_Z(){
 digitalWrite(13, 1);  
  delay(dash);
    digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del);
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
  digitalWrite(13, 0);   // delay of 1 second between dashes and dots on the same later
  delay(del3); 
}


void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
      digitalWrite(13, 0);   // 3 second delay to prepare to read morse code
    delay(3000);  
  }

  void loop() {

  }
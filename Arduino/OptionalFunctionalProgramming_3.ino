int dotDuration = 500;


void setup() {
  

}

void loop() {
morse_J();
morse_O();
morse_R();
morse_D();
morse_I();
 delay(dotDuration*4);
}



void morse_J(){
 morseBlink(1);
 morseBlink(3);
 morseBlink(3);
 morseBlink(3);
 delay(dotDuration*2);
}

void morse_O(){
 morseBlink(3);
 morseBlink(3);
 morseBlink(3);
 delay(dotDuration*2);
}

void morse_R(){
 morseBlink(1);
 morseBlink(3);
 morseBlink(1);
 delay(dotDuration*2);
}

void morse_D(){
 morseBlink(3);
 morseBlink(1);
 morseBlink(1);
 delay(dotDuration*2);
}

void morse_I(){
 morseBlink(1);
 morseBlink(1);
 delay(dotDuration*2);
}

void morseBlink(int NumberOfDots){
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(NumberOfDots*dotDuration); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration); 

}
int Blink=1000;
void setup() {
 pinMode(LED_BUILTIN, OUTPUT); 

}
 
void loop() {
char j[] = ".---";
char o[] = "---.";
char r[] = ".-.";
char d[] = "-..";
char i[] = "..";

  blinkMorse(j);
  delay(Blink * 3); // Add a short delay between letters
  blinkMorse(o);
  delay(Blink * 3);
  blinkMorse(r);
  delay(Blink * 3);
  blinkMorse(d);
  delay(Blink * 3);
  blinkMorse(i);
  delay(Blink * 7); // Add a longer delay between words
}


void blinkMorse(char* morseCode){
     for (int i = 0; morseCode[i] != '\0'; i++) {
    if (morseCode[i] == '.') {
      digitalWrite(13, 1); // Turn the LED on
      delay(Blink); // Wait for the dot duration
      digitalWrite(13, 0); // Turn the LED off
      delay(Blink); // Wait for the same duration before the next signal

    } else if (morseCode[i] == '-') {
      digitalWrite(13, 1); // Turn the LED on
      delay(Blink * 3); // Wait for the dash duration
      digitalWrite(13, 0); // Turn the LED off
      delay(Blink); // Wait for the same duration before the next signal
    }
    }
    
}


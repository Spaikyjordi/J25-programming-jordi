int Blink = 1000;
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
  delay(Blink * 3);  // Add a short delay between letters
  blinkMorse(o);
  delay(Blink * 3);
  blinkMorse(r);
  delay(Blink * 3);
  blinkMorse(d);
  delay(Blink * 3);
  blinkMorse(i);
  delay(Blink * 7);  // Add a longer delay between words
}


void blinkMorse(char* morseCode) {
  for (int i = 0; morseCode[i] != '\0'; i++) {
    if (morseCode[i] == '.') {
      digitalWrite(13, 1);
      delay(Blink);         // dot
      digitalWrite(13, 0);  // off
      delay(Blink);

    } else if (morseCode[i] == '-') {
      digitalWrite(13, 1);
      delay(Blink * 3);     //dash
      digitalWrite(13, 0);  // off
      delay(Blink);
    }
  }
}

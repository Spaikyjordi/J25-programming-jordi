#include "morse.h"
#include "music.h"
#include "CookingSystem.h"

void setup() {

  Serial.begin(9600);
}

void loop() {
  readSerial();
}

void readSerial() {
  // Serial.println("Miau");
  if (Serial.available() > 0) {
    String word = Serial.readString();
    word.trim();
    Serial.println(word);
    Serial.println("Longitud del string: ");
    Serial.println(word.length());
    decide(word);
  }
}

void decide(String command) {
 
  if (command.equals("play")) {
    playMusic();
    return;
  }
  if (command.equals("stop")) {
    stopTheMusic();
  }
  if (command.startsWith("morse")) {
    String wordorse = command.substring(5);
    wordToMorse(wordorse);
  }
  if (command.equals("cooking")) {
    cookSomething();
  }
}

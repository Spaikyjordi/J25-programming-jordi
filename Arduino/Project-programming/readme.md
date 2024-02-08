# Final project
---
## Goal of the project
It's a project that reads the Serial and outputs different results depending on the Strings that you send to the serial.


The mandatory features are:
- Echo when you write something through serial (is going to reply the same command just to be sure that the command has been sent properly.) 
- Write a line in morse code if you write "m: " or "morse " for the command and the line after will be sent as morse code. 
- If the command is correct send a cooking recipee of the dish of your choice. 
- Play (or stop) a song


The point of all of this is the integration of the different parts.
## Process
It was an ambiguous process for me since the week we started with the project I was in Tanzania doing a humanitarian activity. When I came back the project was quite advanced. I asked for help to my classmates and they helped me with the layout of the code specially Mateo since he was the one who had the most done. After he explained me how to do it, I proceeded to join the codes. Some small problems that I faced where that I had 2 decide functions, one in the main code and another on the cooking section but I solved the problem by changing the name of the function. I found tricky the part about changing the different void setup that I had in the codes, but I asked David and he tought me how to do it and from that point it was much easier. The biggest problem I faced was that I wasn't able to stop the song while it was being played, none of us found a solution for that. So in the final version of the code if you try to stop the song while it's playing, you are not able to do it. Also we had to name every document something.h (we had to end it with ".h").

## Explanation of each part of the code
### Main code
```C++
#include "morse.h"
#include "music.h"
#include "CookingSystem.h"
```
These lines include header files that contain function prototypes or definitions needed for the functions used in the sketch. morse.h, music.h, and CookingSystem.h
```C++
void setup() {
  Serial.begin(9600);
}
```
The setup() function is called once when the Arduino is powered up or reset. It initializes the serial communication.
```C++
void loop() {
  readSerial();
}
```
The loop() function is called repeatedly after the setup() function. In this sketch, it simply calls the readSerial() function repeatedly.
```C++
void readSerial() {
  if (Serial.available() > 0) {
    String word = Serial.readString();
    word.trim();
    Serial.println(word);
    Serial.println("Longitud del string: ");
    Serial.println(word.length());
    decide(word);
  }
}
```
The readSerial() function reads data from the serial port if it's available. It reads a string of characters sent over the serial connection, trims any leading or trailing whitespace characters, and then prints the received word along with its length. Finally, it calls the decide() function.
```C++
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
```
The decide() function takes a string command as input and executes different actions based on the command received. It uses conditional statements (if) to check the command:

If the command is "play", it calls the playMusic() function.
If the command is "stop", it calls the stopTheMusic() function.
If the command starts with "morse", it extracts the word following "morse" and passes it to the wordToMorse() function.
If the command is "cooking", it calls the cookSomething() function.

### Morse
This function, wordToMorse(), converts a given word into Morse code and prints the Morse code representation to the serial port.
```C++
void wordToMorse(String word) {
  word.toUpperCase();
```
The function converts the input word to uppercase using the toUpperCase() method of the String class. This ensures that the Morse code representation is consistent regardless of the case of the input word.
```C++
  for (int i = 0; i < word.length(); i++) {
    switch (word[i]) {
      case 'A':
        Serial.print(".-");
        break;
      case 'B':
        Serial.print("-...");
        break;
      // Same for the rest
      case 'Z':
        Serial.print("--..");
        break;
      default:
        delay(2000);
        break;
    }
    Serial.print("/");
  }
```
This loop iterates through each character of the input word. Inside the loop, it uses a switch statement to determine the Morse code representation of each character. For each letter of the alphabet ('A' to 'Z'), it prints the corresponding Morse code sequence to the serial port using Serial.print(). 
```C++
  Serial.println("");
  delay(1000);
}
```
After processing all characters in the word, the function prints a newline character (Serial.println("")) to separate the Morse code representations of different words.
### Music
This playMusic() function is a series of tone commands and delays, essentially playing a melody.


Each tone() function call plays a note of a specific frequency for a certain duration, followed by a delay to create the rhythm. The numbers following tone() represent the pin to which the piezo buzzer is connected, the frequency of the note in Hertz, and the duration of the note in milliseconds, respectively.

### Cooking System
This part of the code is the cooking system to "cook" a pizza.
```C++
int masaPizza = 5;
int queso = 5;
int jamonDulce = 5;
bool oil = true;
double tomate = 5;
```
These lines declare several variables representing quantities of ingredients needed for cooking.
```C++
void cookSomething() {
   String input = Serial.readString();
  if (input != "") {
    Serial.println();
    Serial.print("Has esctrio: ");
    Serial.println(input);
    input.trim();
    //decide(input);
  }
  Serial.println("We are cooking something Jessie... ");
  if (queso >= 2 && masaPizza >= 1 && tomate >= 0.5 && jamonDulce >= 1 && oil) {
    Serial.println("It is a Pizza!!!");
    queso = queso - 2;
    masaPizza--;
    tomate = tomate - 0.5;
    jamonDulce--;
  }
}
```
The cookSomething() function is intended to simulate cooking based on available ingredients. If there are enough ingredients, it prints a message indicating that a pizza is being made and updates the quantities of ingredients accordingly.


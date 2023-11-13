# Blink Task 1
In the **setup function**:


It sets pin 13 (which is usually connected to the built-in LED on many Arduino boards) as an output.
It turns the LED on for 1.5 seconds, then off for 1 second.
It turns the LED on for 0.5 seconds, then off for 1 second.


In the **loop function**:


It creates a repeating pattern where the LED is turned on for 0.125 seconds and then off for 0.125 seconds, creating a blinking effect. This pattern repeats indefinitely.


In summary, the code initializes the LED pin, performs a specific sequence of turning the LED on and off in the setup function, and then enters an infinite loop in the loop function that blinks the LED with a specific timing pattern.
[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/Blink-Task-1/Blink-Task-1.ino)
# Blink Variation 1
Turn an LED on and off. [code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/Blink-Variation-01/Blink-Variation-01.ino)
# Jordi in morse code
This Arduino code expands on the previous code and now flashes the built-in LED on pin 13 to represent the Morse code for the word "JORDI." 


The Morse code for each letter is represented by a sequence of dots (short flashes) and dashes (long flashes),
with pauses in between.After spelling "JORDI," the durations of dots, dashes, and pauses are halved to speed up the Morse code transmission, and the loop continues. [code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/Jordi-in-Morsecode/Jordi-in-Morsecode.ino)
# Jordi in morse code 2
This Arduino code breaks down the Morse code for each letter into separate functions (example: morse_J(), morse_O(), etc.) to improve code organization and readability.


Each function represents the Morse code for a specific letter by turning the LED on and off.
The loop function then calls each Morse code function for the letters 'J', 'O', 'R', 'D', and 'I' in sequence, followed by a 3-second delay between each letter. This loop continues indefinitely. [code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/Jordi-in-Morsecode_2.0/Jordi-in-Morsecode_2.0.ino)

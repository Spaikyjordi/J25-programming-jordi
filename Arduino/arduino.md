# Blink Task 1
---
In the **setup function**:


It sets pin 13 (which is usually connected to the built-in LED on many Arduino boards) as an output.
It turns the LED on for 1.5 seconds, then off for 1 second.
It turns the LED on for 0.5 seconds, then off for 1 second.


In the **loop function**:


It creates a repeating pattern where the LED is turned on for 0.125 seconds and then off for 0.125 seconds, creating a blinking effect. This pattern repeats indefinitely.


In summary, the code initializes the LED pin, performs a specific sequence of turning the LED on and off in the setup function, and then enters an infinite loop in the loop function that blinks the LED with a specific timing pattern.


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/Blink-Task-1/Blink-Task-1.ino)
# Blink Variation 1
---
Turn an LED on and off. 


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/Blink-Variation-01/Blink-Variation-01.ino)
# Jordi in morse code
---
This Arduino code expands on the previous code and now flashes the built-in LED on pin 13 to represent the Morse code for the word "JORDI." 


The Morse code for each letter is represented by a sequence of dots (short flashes) and dashes (long flashes),
with pauses in between.After spelling "JORDI," the durations of dots, dashes, and pauses are halved to speed up the Morse code transmission, and the loop continues. 


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/Jordi-in-Morsecode/Jordi-in-Morsecode.ino)
# Jordi in morse code 2
---
This Arduino code breaks down the Morse code for each letter into separate functions (example: morse_J(), morse_O(), etc.) to improve code organization and readability.


Each function represents the Morse code for a specific letter by turning the LED on and off.
The loop function then calls each Morse code function for the letters 'J', 'O', 'R', 'D', and 'I' in sequence, followed by a 3-second delay between each letter. This loop continues indefinitely.


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/Jordi-in-Morsecode_2.0/Jordi-in-Morsecode_2.0.ino)

# Optional functional programming 3
---
This Arduino code defines functions for spelling out the Morse code representation of the word "JORDI" using the built-in LED on pin 13. 


The morseBlink function is used to control the blinking of the LED based on the number of dots specified for each letter.
The dotDuration variable controls the duration of a single dot.


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/OptionalFunctionalProgramming_3/OptionalFunctionalProgramming_3.ino)
# Functional programming 5
---
This Arduino code spells out the Morse code representation of the word "JORDI" using the Serial Monitor. 
Each letter is defined as a separate function (morseJ, morseO, etc.), and the Morse code for dots and dashes is printed using the Serial.print function.


Additionally, a forward slash ("/") is printed at the end of each letter to separate them.
The morseDot function prints a dot (.), and the morseDash function prints a dash (-). 


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/Functional-Programing5/Functional-Programing5.ino)
# My name using char (experimenting)
---
This code was me experimenting with char and trying to write my name using char.
This Arduino code prints the Morse code representation of the name "Jordi" to the Serial Monitor. 


In the setup function, Serial.begin(9600); initializes the serial communication at a baud rate of 9600. The loop function is the main part of the code that runs continuously.

In this **loop**:


Morse code representations for each letter in "Jordi" are defined as character arrays 


```C++
void loop() {
  // Define Morse code representations for each letter in "Jordi"
  char j[] = ".---";
  char o[] = "---";
  char o[] = "---";
  char r[] = ".-.";
  char d[] = "-..";
  char i[] = "..";
```


Each letter's Morse code is printed using Serial.print with spaces between letters. Serial.println(); is used to move to a new line at the end of the name.


delay(1000); introduces a 1-second delay between repetitions to make the Morse code readable in the Serial Monitor. 


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/My-name-using-char/My-name-using-char.ino)

# Hello world
---
This simple Arduino code prints the message "Hello World" to the Serial Monitor and then waits for 1 second before repeating the process.
In the setup function, Serial.begin(9600); initializes the serial communication at a baud rate of 9600. This allows communication between the Arduino and a connected computer through the USB port.


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/Hello-world/Hello-world.ino)
# Special message
---
This Arduino code prints a special message in the form of ASCII art to the Serial Monitor. 
The art is a big bear.


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/Special_message_Jordi/Special_message_Jordi.ino)
# Cooking system 1
---
This Arduino code implements a simple cooking system that reads input from the Serial Monitor and performs an action based on the input.
The loop function continuously reads input from the Serial Monitor using Serial.readString().
The decide function checks the input string and, if it equals "cook", calls the cook function.
The cook function prints a message indicating that it is cooking.


How it **works**:


You send "cook" through the Serial Monitor.
The Arduino reads "cook," calls decide, and since the input matches "cook," it calls the cook function.
The cook function prints "We are cooking Jessie" to the Serial Monitor.


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/cooking-system1/cooking-system1.ino)
# Cooking system 2
---
This Arduino code represents a simple cooking system that keeps track of ingredients (eggs, potato, onion, and oil). 
And can create a Spanish Omelette if the specified conditions are met.
The global variables eggs, potato, oil, and onion represent the quantities of each ingredient. The initial values are set in the code.


The loop function continuously reads input from the Serial Monitor using Serial.readString(). 
The decide function checks the input string. If it's "cook," it calls the cook function. If it's "potato," it increments the potato count.
The cook function checks if there are enough ingredients to make a Spanish Omelette. 


If so, it prints a message indicating that a Spanish Omelette can be made and updates the quantities of ingredients accordingly.


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/cooking_system2/cooking_system2.ino)
# Cooking system 3 own recepie
---
This Arduino codeimplements a simple cooking system that checks for the availability of ingredients to prepare a pizza based on a custom recipe. 
The global variables masaPizza, queso, jamonDulce, oil, and tomate are used to keep track of the quantities of the different ingredients.


The loop function continuously reads input from the Serial Monitor using Serial.readString().
The decide function checks the input string. If it's "cook," it calls the cook function. If it's "masaPizza," it increments the masaPizza count and the same goes to every other ingredient.


The **cook function** checks whether there are enough ingredients to make a pizza based on the predefined recipe. 
If the conditions are met, it prints a message indicating that a pizza is being made and updates the ingredient quantities accordingly.


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/cooking-system-3-own-recepie/cooking-system-3-own-recepie.ino)
# Cooking system 4 inventory
---
This Arduino sketch extends the cooking system to include a salad recipe. The salad requires ingredients such as lettuce, tomato, cucumber, olive oil, and salt. 
The program monitors the quantities of these ingredients and checks whether there are enough to prepare a salad.
New global variables (lettuce, tomato, cucumber, oliveOil, and salt) are introduced to keep track of salad ingredients.


Then if the input is "tomate," it increments the tomate count and the same goes to every other ingredient.
The decide function checks the input string. If it's "cook," it calls the cook function. If the input is "prepare" it calls the prepareSalad function. And substracts the ingredients that have been used.


The "show" option in the input is added to display the current quantities of all ingredients.


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/cooking_system_4/cooking_system_4.ino)

# Problem Solver 1
---
This Arduino code sets up serial communication, initializes a variable to keep track of problem numbers. 


Then enters a loop that iterates through solving drawing problems from 1 to 30 by calling the resolverProblemaDibujo function. 


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/ProblemSolver1/ProblemSolver1.ino)

# Problem Solver 2
---
This code sets up serial communication, and then, in the setup function, it uses a for loop to iterate from 1 to 30, calling the resolverProblemaDibujo function for each iteration. 


So this time instead of using a "while" we usea a "for.


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/ProblemSolver2/ProblemSolver2.ino)

# Problem solver variation 1
---
This code sets up serial communication and then uses two for loops in the setup function to first solve drawing problems for numbers from 1 to 30.


Then solve them in reverse order (from 30 to 1). The loop function is empty and doesn't contain any code.


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/ProblemSolverVariation1/ProblemSolverVariation1.ino)

# Problem solver variation 2
---
This code sets up serial communication and then uses for loops in the setup function to first solve drawing problems for numbers from 1 to 30 but 17 is skipped.


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/ProblemSolverVariation2/ProblemSolverVariation2.ino)

# Problem solver variation 3
---
This code sets up serial communication and then uses for loops in the setup function to first solve drawing problems for numbers from 1 to 30 but 17 and 23 are skipped.


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/ProblemSolverVariation3/ProblemSolverVariation3.ino)

# Problem solver variation 4
---
This code sets up serial communication and then uses for loops in the setup function to first solve drawing problems for odd numbers that are multiples of 3 from 1 to 30.


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/ProblemSolverVariation4/ProblemSolverVariation4.ino)

# Problem solver variation 5 homework
---
This code sets up serial communication and then uses for loops in the setup function to first solve drawing problems for odd numbers that are multiplers of 7 (7, 14, 21, etc).


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/ProblemSolverVariation5Homework/ProblemSolverVariation5Homework.ino)
# Problem solver variation 6 homework
---
This code sets up serial communication and then uses for loops in the setup function to first solve drawing problems for odd numbers that end with 6 or 3 (3, 6, 13, 16, etc).


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/ProblemSolverVariation6Homework/ProblemSolverVariation6Homework.ino)
# Problem solver variation 7 homework
---
This code will solve only the numbers that their digits if we add them together are even. So for example we will do 11 but not 12 or 21. 


[coe](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/ProblemSolverVariation7Homework/ProblemSolverVariation7Homework.ino)
# Problem solver variation 8 homework
---
This code will tell us all the numbers from 1 to 100 that have at least a 3 in their digits (for example 34 or 13).


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/ProblemSolverVariation8Homework/ProblemSolverVariation8Homework.ino)
#  Problem solver variation 9 homework
---
This code will tell us all the numbers from 1 to 100 that has either odd or multiple of 6.


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/ProblemSolverVariation9Homework/ProblemSolverVariation9Homework.ino)
# Problem solver variation 10 homework
---
This code will tell us all the numbers from 1 to 100 that their digits sums either 10 or 5.


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/ProblemSolverVariation10Homework/ProblemSolverVariation10Homework.ino)
# Arrays 1 homework
---
In this code we have a string "webi wabo" and we swap the first two letters and we also swap the "i" with "a". And finally we substituted the second "b" with a "v".


[code](https://github.com/Spaikyjordi/J25-programming-jordi/blob/main/Arduino/Arrays1/Arrays1.ino)


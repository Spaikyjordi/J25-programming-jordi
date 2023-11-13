# 📕First term Programming📕
## 🥸☝Vocabulary 🥸☝
- **Algorithm**: An algorithm is a set of instructions that are followed to solve a problem. It's a computer's thought process.
- **Arrays**: Arrays are containers that hold variables; they're used to group together similar variables. You can think of arrays like shelves at a pet store. The array would be the shelf, and the animals in cages are the variables inside.
- **Bit**: The individual 1's and 0's you see in binary are called bits.
- **Camel case**: Variables should be named using camel case, meaning the first word of the name is lowercase and each new word after that is capitalized.
- **Coding languages**: Computers use coding languages to understand what people want them to do. Just like how people communicate with each other in English or Japanese, people communicate with computers in languages like C++ or Java.
- **Else statements**: Else statements are used to do something else when the condition in the if statement isn't true.
- **Else if statements**: Use an else if statement to do something when the if statement's condition isn't true but before the else statement. Else if statements also check a specific condition.
- **Functions**: A function is a block of code that can be referenced by name to run the code it contains.
- **Input**: Input is any interaction from the user to the program. In video games, this includes using the keyboard to move or using the mouse to look around.
- **Integrated Development Environment**: Software such as Arduino is known as an Integrated Development Environment (IDE), which is where you type your code and run your programs. Basically, an IDE is software that makes coding simpler.
- **Library**: A library is a collection of code made by other programmers for you to import and use.
- **Strings**: Variables can hold data besides numbers, including words. Programmers refer to variables holding words as strings.
- **Compiling**: Take and translate the whole source code into machine code.
- **Interperer**: Have the source code and transform line by line to machine code.
- **Boilerplate**: In computer programming, boilerplate code, or simply boilerplate, are sections of code that are repeated in multiple places with little to no variation.

  
![SoExcited~GIF](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/49f8ded1-6d98-429a-a0f6-a0549ea6f2e3)

## 🤖🧙‍♂️Programming Languages 🧙‍♂️🤖
- **Brackets []**
- **Parenthesis ()**
- **Curly Braces {}**
- **Micro Controller**: are a type of computers.
- **LED**: Light Emiting Diode
- **Variable**: A place in memory to store data, identified for retrieval.
- **Variable Types**: Specify memory size and possibilities. Mandatory in some languages (e.g., C++).
- **Programming Languages (PL):**
  - Highly typed PL: C++
  - Loosely typed PL: Python

## 🤯👾Common Variables in C++👾🤯
- **Building Blocks:**
  - Object
  - Numbers: `int`, `long`, `8int`, `8u int`, `float`
  - Strings
  - Char: Character
  - Booleans: `true`/`false`
 

![DiesCatGIF](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/0a8cd85e-70ba-43ea-9eee-ceefcbeaa866) 
 ## 👨‍💻Syntax of Variables in C++👨‍💻
- **Declaration:**
  ```C++
  int dotDuration;
  dotDuration = 500; //declaration of the value dotDuration
  ```
- Variables that not change the value: **Constants**
  ```C++
  const int LUYI= 5;
  ```
## 🗿💻Common Statements in C++💻🗿
- `A = A + 1`: Equivalent to `A++`.
- `A++`: Same as the statement above.
- `B = B - 1`: Equivalent to `B--`.
- `B--`: Same as the statement above.
### Naming Convention
- Variables cannot have spaces.
- Use camel case for variable names. Example: `minutesToGoHome`

# 📚Functions in programming📚
## Function Syntax in C++
- **Definition:** return_type name(parameters)
- **Void Function:** void nameOfTheFunction() { code }
- **No spaces** allowed in the parameters.
## Calling a Function
```C++
nameOfTheFunction();
morse_J(); //example
```
## Example of Functions:
- digitalWrite(int pin, 1 or 0)
- delay()
- pinMode(<pin>, <mode>)
## Important⚠️
- We cannot define a function inside the definition of another function.

## Example of Setup and Loop Functions
```C++
void setup() {
  // Setup code
}

void loop() {
  // Looping code
}
```


![CalculationMathGIF](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/7a2a0e1e-93c5-42ff-9fd8-6a4f0cdd9712)


# 🎚️Flow Control🎚️
## ❌Booleans✅ 
Booleans are variables that can be true or false.
## Operators of Comparison
```C++
if (condition) {
  // Code executed if the condition is true
} else {
  // Code executed if the condition is false
}
// Code executed in both cases
```
## Determining if the Condition is True
We use a boolean. If the boolean value is true, the condition is true. If the boolean value is false, then the condition is not met.
```
Bool me(gusta Picasso = false;
If(meGustaPicasso) {
goToMuseumPicasso();
}
else {goToDesignMuseum();}
```
## Types of notation
- camelCase → Methods and variables
- PascalCase → Obejcts
- Kebab-case → URL
- Snake_case
- SCREAMING_SNAKE_CASE → Constants
## Nested If (Example)
"If" that are inside other "If"
```C++
if (patatas) {
  if (huevos) {
    Tortilla();
  }
  Freir();
} else {
  pedirSushi();
}
```
| Huevos | Patatas | Execution |
| ------ | ------- | --------- |
| False  | False   | ps;       |
| False  | True    | f;        |
| True   | False   | ps;       |
| True   | True    | t;f;      |

## Boolean Variable (bool)
If the variable value is true, then we go inside the if. If the variable value is false, then we don’t go inside the if. If there is an else, we go inside the else.
## Else if
Else if is an extra condition. Programming languages need to be consistent and univocal. That’s why we use = for assignment and == for comparison.
## Comparators
- == : Compare if same value
- != : Different value
- < : Lesser than
- <= : Lesser or equal than
- ">": Greater than
- ">=": Greater or equal than
## Combo Burger (Boolean Operators)
- &&: AND operator
- ||: OR operator
- !: NOT operator
```c++
//eggsInTheFridge
//potatoesInTheKitchen

if(eggsInTheFridge && potatoesInTheKitchen) {
   cookSpanishOmelette();
}
```
```c++
if(cocoaOpen || titusOpen) {
       goToDisco();
}
```
```c++
If ((eggsInTheFridge && potatoesInTheKitchen) || sausagesInTheKitchen) {
    cookSomeThing();
}
else (goToKebab)();}
```
```c++
if (¡eggsInTheFridge) {
    goToBuySomeEggs();
}
```
```c++
If(TRdelivered && meanGrade >= 5 && allFinalTestPassed)
(deliveredBachilleratoTitle());}
```

  
![MenheraChanChibiGIF](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/e66dbfb3-f627-404e-a7e0-4398d409efb7)

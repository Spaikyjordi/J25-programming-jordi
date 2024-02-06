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

## 🤖🧙‍♂️Programming Languages 🧙‍♂️🤖 (with QuimMontaner until combo burguer)
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


![download](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/fc39bad9-37f4-412f-8580-bd53a3e10257)

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

# 🥷🕸️Scope in PL🕸️🥷
// extended info from class
## Introduction
In programming languages, scope defines the region of the program where a specific variable can be accessed or modified.
## Global Scope
Variables declared outside any function or block have global scope. They can be accessed from any part of the program, including within functions and blocks.
```C++
int globalVariable = 10;  // Global variable
void setup(){
//code
}
```
## Local Scope
Variables declared within a function or block have local scope. They are only accessible within that specific function or block.
```C++
void setup(){
  // Local variable
  int localVar = 20;
  // localVar is only accessible within this block
}
```
## Function Scope
Parameters and variables declared in a function have function scope. They are accessible only within the function where they are declared.
```C++
void exampleFunction(int parameter) {
    // parameter and localVariable have function scope
    int localVariable = parameter + 5;
}
```
## Block Scope
Variables declared within a block of code (inside curly braces {}) have block scope. They are only accessible within that specific block.
```C++
int main() {
    // outerVar is accessible within this block
    int outerVar = 30;

    {
        // innerVar is only accessible within this nested block
        int innerVar = 40;
    }

    // Attempting to access innerVar here would result in an error
    return 0;
}
```


![6f0a16aa1b1310912e82f2d605d5601c](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/c8c07188-7063-439d-a1dd-eb85472d3603)


# 💻Second term Programming💻
## 🥸☝️Vocabulary☝️🥸
- **Pseudocode**: Is a description of the steps in an algorithm using a mix of conventions of programming languages with informal, usually self-explanatory, notation of actions and conditions.
- **Parameter**: Is a special kind of variable used in a function to refer to one of the pieces of data provided as input to the function.
- **Array**:  Is a collection of items, or data, stored in contiguous memory locations, also known as database systems
- **Implementation**: is a realization of a technical specification or algorithm as a program, software component, or other computer system through computer programming and deployment.
- **Extract a method**: Its extracting from a place code that is to complex and we transform it into a separate function in order to make it less complex.
- **Pseudorandom**: A pseudorandom number is a number generated in a process that appears to produce random numbers, but does not actually do so, they are generated sequentially with a deterministic algorithm
- **Iteration**: repeat things, but always on different ways

# ♾️Loops and Iterations♾️
A **loop** or a **iteration** is a control structure that allows a set of instructions to be **repeated multiple times**. It enables you to execute a block of code repeatedly until a certain condition is met.

Loops are essential for automating repetitive tasks and making code more efficient.
**Example**

```C++
do while (eggs > 0){    //condition
  takeEgg();
  breakEgg();
  throwGarbage();
}
```


**Example of an infinite loop**


```C++
do while (true) {
  climbMountainWithBoulder();
  seeHowTheBoulderFalls();    //infinite loop
  goBackToTheBottomOfTheMountain();
}
```

## Loop "for"


```C++
For(“definition of variables”;”condition of iteration”;”step”){code}
```


**Example of a loop "for"**


```C++
 for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++)
```


![LoopInfiniteGIF](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/f5eaa42b-bc68-44bc-9d09-a4c460f08134)

# 🫠C++ Syntax😣
## 📞Call a Function📞
```C++
nameOfFunction (values of parameters if necessary,___);
```


## Return Type Function
```C++
nameOfFunction ( [type] parameter if necessary, __){ code…}
```
## Modulus (reminder)
7/3=2,333333… 


7 ➡️ 2 integer quotient//1 reminder (division) 


In **programming**:


7/3=2  


If we are using **integers**: 


7%3=1 modulus operator 


**Ex.**


6/3=2       6%3=0 


Tricky:


66/100= 0 quotient, 66 reminder 


66%100=66 


![MansNotHotQuickMathGIF](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/24ba8997-f315-473f-822f-83e4a42d95e2)

# 🪢🕹️Strings🕹️🪢
## Introduction
In programming, a string is a sequence of characters. It is a fundamental data type used to represent text. Strings are commonly manipulated for tasks such as input/output, text processing, and data storage.
## Declaration and Initialization
```C++
// Declaration and initialization of strings
std::string greeting = "Hello, ";
std::string name = "World!";
```
## Important functions supported by String class
- append(): This function appends a part of a string to another string.
- assign():This function assigns a partial string.
- at(): This function obtains the character stored at a specified location.
- begin(): This function returns a reference to the start of the string.
- capacity(): This function gives the total element that can be stored.
- compare(): This function compares a string against the invoking string.
- empty(): This function returns true if the string is empty.
- end(): This function returns a reference to the end of the string.
- erase(): This function removes characters as specified.
- find(): This function searches for the occurrence of a specified substring.
- length(): It gives the size of a string or the number of elements of a string.
- swap(): This function swaps the given string with the invoking one.
## Important Constructors
- String(): This constructor is used for creating an empty string.
- String(const char *str): This constructor is used for creating string objects from a null-terminated string.
- String(const string *str): This constructor is used for creating a string object from another string object.
## Concatenation
Strings can be combined using the + operator, a process known as concatenation.
```C++
std::string message = greeting + name; // Results in "Hello, World!"
```
## String Length
The length of a string can be obtained using the length() or size() member functions.
```C++
int length = message.length(); // Length is 13
```
## Substrings
Portions of a string can be extracted using the substr() function.
```C++
std::string sub = message.substr(7, 5); // Extracts "World"
```
## String Comparison
Strings can be compared using relational operators (==, !=, <, >, <=, >=).
```C++
bool isEqual = (greeting == name); // Evaluates to false
```
## String Manipulation
Various functions are available for manipulating strings, such as finding substrings, replacing characters, and converting case.
```C++
// Example: Converting to uppercase
std::transform(message.begin(), message.end(), message.begin(), ::toupper);
```


![RockAgreedRockSusGIF](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/543adb3f-d115-4ed0-8ab4-8fa6be222749)

# 🪬🪧Arrays🪧🪬
## Definition
Variables that store several values in a specific order and don’t change un size, they also have very fast access, and the size of the array is relatively small.


**Fun Fact**: A string is an array of characters 
## ❗❗Important Concepts❗❗
- **Collection of elements**: Arrays in C++ are collections of elements of the same data type stored in contiguous memory locations.
- **Index and value**: An element of an array will always have an index between 0 and n-1 being n: the length of the array.
- **Lenght**: Size of an array; number of elements.
- **Fixed size**: Once declared, the size of an array cannot be changed during runtime.
- **Indexing**: Elements in an array are accessed using an index, starting from 0 for the first element.
- **Declaration**: Arrays are declared using square brackets [] after the data type, specifying the size of the array.
- **Memory management**: Memory for arrays is allocated statically or dynamically depending on how they are declared.
- **Iteration**: Loops are commonly used to iterate through array elements for processing or manipulation.

## 😶‍🌫️😩Arrays Using Int😩😶‍🌫️
```C++
//Arrays with int slow form
int[] grades=(5, 7, 9, 7, 6, 8}
int sum = 0;
sum = sum + grades [0];
sum = sum + grades [1];
sum = sum + grades [2];
sum = sum + grades [3];
sum = sum + grades [4];
sum = sum + grades [5] ;
int average = sum/6;
Serial.println(average);

//Arrays with int faster version using a loop
int [] grades={5, 7, 9, 7, 6, 8}
int sum = 0;
  for (int n=0-;n<6;n++ ) {
    sum = sum + grades [n];
  }
int average = sum/6;
Serial.println(average);
```

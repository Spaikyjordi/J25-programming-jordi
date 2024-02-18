# 📕Second Term Java📕
## 🥸☝Vocabulary and important concepts🥸☝
- **Class**: Define tipo de objetos
- **Static**: Siempre esta en memoria  
- **Public**: Es quien puede acceder (public es todo el mundo), private(solo un numero determinado o alguien en espefico puede acceder) 
- **Block**: A block is a group of programming statements enclosed by a pair of braces {}.
- **Case sensitivity**: Case sensitivity means that the programming language distinguishes between uppercase and lowercase letters, treating them as different characters.
- **PC**: Personal computer 
- **Interface**: Comunicarse (as a verb)
- **GUI**: Graphic user interface
- **CLI**: Interfaz de la línea de comandos
- **High-level and low level abstraction**: High level is a very general level of abstraction and low level is a very specific abstraction.
- **Procedural programming**: La programación procedural se centra en la secuencia de instrucciones para resolver problemas, utilizando funciones y control de flujo. El control de flujo se refiere a la gestión de la ejecución de un programa, determinando el orden en que se ejecutan las instrucciones basadas en condiciones y bucles.

## Java Program Template
```C++
  public class Classname {   // Choose a meaningful Classname. Save as "Classname.java"
   public static void main(String[] args) {  // Entry point of the program
      // Your programming statements here!!!
   }
}
```
## Output via System.out.println() and System.out.print()
```C++
public class PrintTest {   // Save as "PrintTest.java"
   public static void main(String[] args) {
      System.out.println("Hello world!");       // Advance the cursor to the beginning of next line after printing
      System.out.println("Hello world again!"); // Advance the cursor to the beginning of next line after printing
      System.out.println();                     // Print an empty line
      System.out.print("Hello world!");         // Cursor stayed after the printed string
      System.out.print("Hello world again!");   // Cursor stayed after the printed string
      System.out.println();                     // Print an empty line
      System.out.print("Hello,");
      System.out.print(" ");                    // Print a space
      System.out.println("world!");
      System.out.println("Hello, world!");
   }
}
```
## Basic Arithmetic Operations
![image](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/5bcc08c7-c1b4-4116-9a6a-611a52730264)
## Comparison Operators
![image](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/73a12f54-d7a8-47a1-b90a-fc955dfa77cc)
## Combining Simple Conditions
![image](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/1dd8fb3d-2bb8-4705-94db-7a7ce88039b7)
## Variable declaration
- Int: Numbers without decimals
- Double: Numbers with decimals
- String: Words or characters
  
```C++
int sum;              // Declare a variable named "sum" of the type "int" for storing an integer.
                      // Terminate the statement with a semi-colon.
double average;       // Declare a variable named "average" of the type "double" for storing a real number.
int number1, number2; // Declare 2 "int" variables named "number1" and "number2", separated by a comma.
int height = 20;      // Declare an "int" variable, and assign an initial value.
String msg = "Hello"; // Declare a "String" variable, and assign an initial value.
```

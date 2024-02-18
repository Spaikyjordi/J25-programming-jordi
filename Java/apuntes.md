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

  public class Classname {   // Choose a meaningful Classname. Save as "Classname.java"
   public static void main(String[] args) {  // Entry point of the program
      // Your programming statements here!!!
   }
}

## Output via System.out.println() and System.out.print()
/*
 * Test System.out.println() (print-line) and System.out.print().
 */
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
## Basic Arithmetic Operations
| Operator | Mode          | Usage     | Meaning             | Example    x=5; y=2|
|----------|---------------|-----------|---------------------|--------------------|
| +        | Binary        |           |                     |                    |
|          | Unary         | x + y     | Addition            | x + y returns 7    |
| -        | Binary        |           |                     |                    |
|          | Unary         | x - y     | Subtraction         | x - y returns 3    |
| *        | Binary        | x * y     | Multiplication      | x * y returns 10   |
| /        | Binary        | x / y     | Division            | x / y returns 2     |
| %        | Binary        | x % y     | Modulus (Remainder) | x % y returns 1     |
| ++       | Unary Prefix  |           | Increment by 1      | ++x or x++ (x is 6) |
|          | Unary Postfix |           |                     |                    |
| --       | Unary Prefix  |           | Decrement by 1      | --y or y-- (y is 1) |
|          | Unary Postfix |           |                     |                    |

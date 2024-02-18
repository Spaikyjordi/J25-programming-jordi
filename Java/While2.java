1)

public class Main {
  public static void main(String[] args) {
    final int LOWERBOUND = 1;
      final int UPPERBOUND = 1000;
      int sum = 0;
      int number = LOWERBOUND;
        while (number <= UPPERBOUND) {
          if ((number % 3 == 0 || number % 5 == 0 || number % 7 == 0) && !(number % 15 == 0 || number % 21 == 0 || number % 35 == 0 || number % 105 == 0)) {
          sum += number;
          }
        number++;
        }

  System.out.println("The sum of all the numbers divisible by 3, 5, or 7, but not by 15, 21, 35, or 105 from 1 to 1000 is: " + sum);

  }  
}

2)
public class Main {
  public static void main(String[] args) {
     final int limiteInferior = 999;
      final int limiteSuperior = 2010;
      int counter  = 0;    
 
      int number = limiteInferior;
      while (number <= limiteSuperior) {
		if ( number % 4 == 0) 
         {
         	counter++; 
			System.out.println(number + "AD");
         }
        number++;  // Next number
      } 
      // Print the result
      System.out.println("Total number of leap years " + counter);
    
   }
}

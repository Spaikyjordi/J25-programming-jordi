// triangulo pitagoras en java
public class Main {  
   public static void main(String[] args) {
      double hypotenuseA, catetoB, catetoC, area, perimeter;
      catetoB = 4; //change this to your values
      catetoC = 6; //change this to your values
   
      hypotenuseA = Math.sqrt(catetoB*catetoB + catetoC*catetoC);
      
      // Print results
      System.out.print("The side missing is ");  // Print description
      System.out.println(hypotenuseA);          // Print the value stored in the variable

   }
}

// Area 

public class Main {   

   public static void main(String[] args) { 

      double area, base, height; 
      base=12; 
      height=15; 
      area = (base * height)/2; 
      System.out.print("The side area is ");    
      System.out.println(area);  

      } 

  } 

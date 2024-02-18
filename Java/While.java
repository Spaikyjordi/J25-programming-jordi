// sum from 9 to 899

public class Main {

public static void main(String[] args) {

final int LOWERBOUND = 9;

final int UPPERBOUND = 899;

int sum = 0;

int number = LOWERBOUND;

while (number <= UPPERBOUND) {

sum = sum + number;

++number;

}

System.out.println("The sum from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sum);

}

}

// sum from 1 to 1000 but only odd number

public class Main {

public static void main(String[] args) {

final int LOWERBOUND = 1;

final int UPPERBOUND = 1000;

int sum = 0;

int number = LOWERBOUND;

while (number <= UPPERBOUND) {

sum = sum + number;

number = number + 2;

}

System.out.println("The sum from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sum);

}

}

// The sum of all the numbers divisible by 7 from 1 to 1000

public class Main {

public static void main(String[] args) {

final int LOWERBOUND = 7;

final int UPPERBOUND = 1000;

int sum = 0;

int number = LOWERBOUND;

while (number <= UPPERBOUND) {

sum = sum + number;

number = number + 7;

}

System.out.println("The sum of all the numbers divisible by 7 from 1 to 1000 is: " + sum);

}

}

// sum of the square of all the numbers from 1 to 100

public class Main {

public static void main(String[] args) {

final int LOWERBOUND = 1;

final int UPPERBOUND = 100;

int sumOfSquares = 0;

int number = LOWERBOUND;

while (number <= UPPERBOUND) {

sumOfSquares = sumOfSquares + (number * number);

number = number + 1;

}

System.out.println("The sum of the squares of all the numbers from 1 to 100 is: " + sumOfSquares);

}

}

// product of all the numbers from 1 to 10

public class Main {

public static void main(String[] args) {

final int LOWERBOUND = 1;

final int UPPERBOUND = 10;

int product = 1;

int number = LOWERBOUND;

while (number <= UPPERBOUND) {

product = product * number;

number = number + 1;

}

System.out.println("The product of all the numbers from 1 to 10 is: " + product);

}

}

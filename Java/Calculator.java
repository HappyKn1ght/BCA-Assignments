//program for calculator

import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        while (true) {
            System.out.println("|| Calculator ||");
            System.out.print("\nEnter Number 1: ");
            double num1 = sc.nextDouble(); // don't know what type to choose(figure it out)
            System.out.print("Enter Number 2: ");
            double num2 = sc.nextDouble();

            System.out.print("Choose Operator(+, -, *, /, %): ");
            String ops = sc.next(); // why String not char(figure it out)
            double result = 0;
            switch (ops) {
                case "+":
                    result = num1 + num2;
                    break;
                case "-":
                    result = num1 - num2;
                    break;
                case "*":
                    result = num1 * num2;
                    break;
                case "/":

                    if (num2 != 0)
                        result = num1 / num2;
                    else
                        System.out.println("Cannot divide by zero!\nTry again...");
                    continue;

                case "%":
                    result = num1 % num2;
                    break;
                default:
                    System.out.println("Invalid Operator!");
                    break;
            }

            System.out.println("\n" + num1 + " " + ops + " " + num2 + " = " + result);
            System.out.print("Continue? (y/n): ");
            //char choice = sc.next().charAt(0);
            String choice = sc.next();

            if (choice.equalsIgnoreCase("n")) {
                break;
            }
            else if (choice.equalsIgnoreCase("y")) {
                continue;
            } 
            else{ 
                System.out.println("Invalid input! Try again.");
                break;
            }
        }

        sc.close();
    }
}
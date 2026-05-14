import java.util.Scanner;

public class UserInput {
    public static void main(String[] args) {
        // sout
        System.out.println("Taking Input from the User: ");
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Username: ");
        // String name = sc.next(); for one string
        String name = sc.nextLine(); // for sentences

        System.out.println("Enter Number 1: ");
        int a = sc.nextInt();
        // int a = sc.nextFloat();

        System.out.println("Enter Number 2: ");
        int b = sc.nextInt();

        int sum = a + b;

        System.out.println("Username: "+name);
        System.out.println("Sum: " + sum);
        // boolean b1 = sc.hasNextInt();
        // System.out.println(b1);
        // System.out.println(a);

        sc.close(); // for closing

    }
}

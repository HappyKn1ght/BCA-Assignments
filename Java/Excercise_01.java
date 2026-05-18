/*
 * write a program to calculate percentage of a given student.
 * His marks from 5 subject must be taken as input from the keyboard(marks are
 * out of 100).
 * <Happy/>
 */

import java.util.Scanner;

public class Excercise_01 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Student Name: ");
        String name = sc.next();

        // taking marks for user
        System.out.println("Enter Subject1 Marks: ");
        int mark1 = sc.nextInt();
        System.out.println("Enter Subject2 Marks: ");
        int mark2 = sc.nextInt();
        System.out.println("Enter Subject3 Marks: ");
        int mark3 = sc.nextInt();
        System.out.println("Enter Subject4 Marks: ");
        int mark4 = sc.nextInt();
        System.out.println("Enter Subject5 Marks: ");
        int mark5 = sc.nextInt();

        // percentage formula
        int total = mark1 + mark2 + mark3 + mark4 + mark5;
        float percentage = total / 100f;

        // result
        System.out.println("");
        System.out.println("Student Name: " + name);
        System.out.println("Total Marks: " + total);
        System.out.println("Percentage: " + percentage + "%");

        sc.close();

    }
}
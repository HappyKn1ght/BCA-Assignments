import java.util.Scanner;

public class String_Method {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // String name = new String("Happy"); we can use this
        // String name = "Happy"; // or we can use this
        System.out.println("Enter Your Name: ");
        String name = sc.nextLine();
        System.out.println("Name        : " + name);
        int lenght = name.length();
        System.out.println("Length      : " + lenght);
        String lstring = name.toLowerCase();
        System.out.println("LowerCase   : " + lstring);
        String ustring = name.toUpperCase();
        System.out.println("UpperCase   : " + ustring);
        String trimmed = name.trim();
        System.out.println(trimmed);
        // System.out.println(ustring.toUpperCase()); we can also use this
        System.out.println(name.substring(1));
        System.out.println(name.substring(1, 3));
        System.out.println(name.replace('p', 'r'));
        System.out.println(name.replace("y","ier"));
        System.out.println(name.startsWith("ha"));
        System.out.println(name.endsWith("ier"));

        sc.close();

    }
}
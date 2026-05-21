public class Java_Method_Overloading {
    static void add() {
        System.out.println("Java_Method_Overloading Demonstration!");
    }

    static void add(int a) {
        System.out.println("One Integer: " + a);
    }

    static void add(int a, int b) {
        System.out.println("Two Integer: " + a + ", " + b);
    }

    static void add(int a, int b, int c) {
        System.out.println("Three Integer: " + a + ", "  + b + ", " + c);
    }
    //Method_Overloading cannot be performed by changing the return type of method

    public static void main(String[] args) {
        add();
        add(1);
        add(1, 2);
        add(1, 2, 3);
    }
}

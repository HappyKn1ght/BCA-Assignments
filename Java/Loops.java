public class Loops {
    public static void main(String[] args) {
        System.out.println("for loop: ");
        for (int i = 0; i <= 5; i++) {
            System.out.println(i);
        }

        int j = 0;
        System.out.println("while loop: ");
        while (j <= 5) {
            System.out.println(j);
            j++;
        }

        int k = 0;
        System.out.println("do-while loop: ");
        do {
            k++;
            System.out.println(k);
        } while (k <= 5);
    }
}

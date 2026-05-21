public class Fibonacci {
    static int fibonacci(int x) {
        /*
         * if (x==1){
         * return 0;
         * }
         * else if (x==2){
         * return 1;
         * }
         */
        if (x == 1 || x == 2) {
            return x - 1;
        } else {
            return fibonacci(x - 1) + fibonacci(x - 2);
        }
    }

    public static void main(String[] args) {
        int n = 5;
        System.out.println(fibonacci(n));
    }
}

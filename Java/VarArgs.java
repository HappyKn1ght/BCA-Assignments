public class VarArgs {
    // VarArgs
    static int sum(int... arr) { //stores in arr
        int add = 0;
        for (int a : arr) {
            add += a;
        }
        return add;
    }

    public static void main(String[] args) {
        System.out.println(sum());
        System.out.println(sum(1));
        System.out.println(sum(1, 2));
        System.out.println(sum(1, 2, 3));
        System.out.println(sum(1, 2, 3, 4, 5));
    }

}

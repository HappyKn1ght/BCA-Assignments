public class JavaMethod {
    static int sum(int x, int y) {
        int z = x + y;
        return z;
    }

    public static void main(String[] args) {
        int a = 5, b = 10;
        int c = a + b;
        System.out.println(c);
        //JavaMethod obj = new JavaMethod();
        // System.out.println(obj.sum(a,b)); can run without static
        System.out.println(sum(a, b));
    }
}

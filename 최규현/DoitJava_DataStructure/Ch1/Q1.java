public class Q1 {
    public static void main(String[] args) {
        System.out.println(max4(5, 3, 3, 2));
    }

    static int max4(int a, int b, int c, int d) {
        int max = a;
        if (b > max) max = b;
        if (c > max) max = b;
        if (d > max) max = b;

        return max;
    }
}

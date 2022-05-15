public class Practice1_2 {
    public static void main(String[] args) {
        max3(3,2,1);
        max3(3,2,2);
        max3(2,3,1);
        max3(1,2,3);
        max3(1,3,2);
    }

    static void max3(int a, int b, int c) {
        System.out.print("max3(" + a + "," + b + "," + c + ") = ");
        int max = a;
        if(b > max) max = b;
        if(c > max) max = c;
        System.out.println(max);
    }
}

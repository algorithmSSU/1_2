public class Q3 {
    public static void main(String[] args) {
        System.out.println(min3(5, 2, 3, 8));
    }

    static int min3(int a, int b, int c, int d){
        int min = a;
        if(b < min) min = b;
        if(c < min) min = c;
        if(d < min) min = d;

        return min;
    }
}
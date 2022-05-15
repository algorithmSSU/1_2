public class Practice1C_1 {
    public static void main(String[] args) {
        System.out.println(med3(5, 2, 3));
    }

    private static int med3(int a, int b, int c){
        if(a>=b)
            if(b>=c)
                return b;
            else if(c>=a)
                return a;
            else
                return c;
        else if(a>c)
            return a;
        else if(b>c)
            return c;
        else
            return b;
    }
}

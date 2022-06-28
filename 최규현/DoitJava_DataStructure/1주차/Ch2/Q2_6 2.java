public class Q2_6 {
    public static void main(String[] args) {

    }

    private static int cardConvR(int x, int r, char[] d){
        int digits = 0;
        String dchar = "0123456789ABCDEFGHIJKLMOPQRSTUVWXYZ";

        do{
            d[digits++] = dchar.charAt(x%r);
            x /= r;
        }while(x!=0);



        return digits;
    }
}

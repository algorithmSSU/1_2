public class Practice2_8_B {
    public static void main(String[] args) {
        char[] cno = new char[32];
        int digits = cardConvR(59, 2, cno);
        for(int i = digits-1; i >=0; i--){
            System.out.print(cno[i]);
        }
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

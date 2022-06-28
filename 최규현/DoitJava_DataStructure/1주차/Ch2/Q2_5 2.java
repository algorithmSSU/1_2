public class Q2_5 {
    public static void main(String[] args) {
        int[] b = {5, 3, 2, 4, 12};
        int[] a = new int[5];

        copy(a, b);

        for(int i = 0 ; i < a.length; i++){
            System.out.println(a[i]);
        }
    }

    private static void copy(int[] a, int[] b){
        for(int i = 0 ; i < b.length; i++){
            a[i] = b[b.length - (i+1)];
        }
    }
}
public class Practice2_4 {
    public static void main(String[] args) {
        int[] a = {3,5,76,2,3};
        int max = a[0];

        for(int i = 1; i < a.length; i++){
            if (a[i] > max)
                max = a[i];
        }

        System.out.println("Max Value is " + max);
    }
}

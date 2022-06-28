public class Q2_3 {
    public static void main(String[] args) {
        int[] array = {5, 10, 73, 2, -5, 42};
        System.out.println(sumArray(array ));
    }

    private static int sumArray(int[] array){
        int sum = 0;
        for(int i = 0 ; i < array.length; i++)
            sum += array[i];

        return sum;
    }
}

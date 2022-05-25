public class Practice2_6 {
    public static void main(String[] args) {
        int[] array = {5, 2, 3, 23, 6};

        System.out.print("array : ");
        for(int i = 0 ; i < array.length; i++){
            System.out.print(" " + array[i]);
        }

        System.out.print("\nreverse array : ");
        reverse(array);
        for(int i = 0 ; i < array.length; i++)
            System.out.print(" " + array[i]);
    }

    private static void swap(int[] array , int num1, int num2){
        int tmp = array[num1];
        array[num1] = array[num2];
        array[num2] = tmp;
    }

    private static void reverse(int[] array){
        for(int i = 0 ; i < array.length/2; i++){
            swap(array, i, array.length - (i+1));
        }
    }
}

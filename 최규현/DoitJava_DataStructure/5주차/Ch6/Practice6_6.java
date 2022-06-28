public class Practice6_6 {
    public static void main(String[] args) {
        int[] array = {7, 22, 5, 11, 32, 120, 68, 70};
        shellSort(array);

    }
    static void shellSort(int[] array){
        for(int i = array.length / 2; i > 0; i /= 2){
            for(int j = i; j < array.length; j++){
                int k;
                int tmp = array[j];
                Swap.printArray(array);
                System.out.println();
                for(k = j-i; k >= 0 && tmp < array[k]; k -= i){
                    array[k + i] = array[k];
                }
                array[k + i] = tmp;
            }
        }
        Swap.printArray(array);
    }
}








/*
for(int i = array.length/2; i > 0; i /= 2){
            for(int j = i; j < array.length; j++){
                int k;
                int tmp = array[j];
                for(k = i-j; k >= 0 && array[k] > tmp; k -= i){

                }

            }
        }
 */

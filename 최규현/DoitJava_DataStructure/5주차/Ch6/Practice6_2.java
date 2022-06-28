public class Practice6_2 {
    public static void main(String[] args) {
        int[] num = {7, 22, 5, 11, 32, 120, 68, 70};

        bubbleSort(num);
    }

    static void bubbleSort(int[] array){
        for(int i = 0; i < array.length -1; i++){
            int count = 0;
            for(int j = array.length -1; j > i; j--){
                Swap.printArray(array);
                if(array[j-1] > array[j]) {
                    Swap.swap(array, j - 1, j);
                    count++;
                }
                System.out.println();
            }
            if(count == 0)
                break;
        }
    }
}

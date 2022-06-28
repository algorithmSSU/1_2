public class Practice6_1 {
    public static void main(String[] args) {
        int[] num = {7, 22, 5, 11, 32, 120, 68, 70};

        bubbleSort_back(num);


    }

    static void bubbleSort(int[] array){
        for(int i = 0; i < array.length -1; i++){
            for(int j = array.length -1; j > i; j--){
                printArray(array);
                if(array[j-1] > array[j]) {
                    Swap.swap(array, j - 1, j);
                }
                System.out.println();
            }

        }
    }

    static void bubbleSort_back(int[] array){
        for(int i = 0; i < array.length-1; i++){
            for(int j = 0; j < array.length - (i+1); j++){
                printArray(array);
                if(array[j] > array[j+1])
                    Swap.swap(array, j, j+1);
                System.out.println();
            }
        }
    }

    static void printArray(int[] array){
        for(int i = 0; i < array.length; i++){
            System.out.print(array[i] + " ");
        }
    }


}

class Swap{
    static public void swap(int[] array, int idx1, int idx2){
        int tmp = array[idx1];
        array[idx1] = array[idx2];
        array[idx2] = tmp;
    }

    static void printArray(int[] array){
        for(int i = 0; i < array.length; i++){
            System.out.print(array[i] + " ");
        }
    }
}

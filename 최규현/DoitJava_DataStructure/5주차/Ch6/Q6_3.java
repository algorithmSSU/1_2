public class Q6_3 {
    public static void main(String[] args) {

    }

    static void bubbleSort(int[] array) {
        for (int i = 0; i < array.length - 1; i++) {
            int count = 0;
            for (int j = array.length - 1; j > i; j--) {
                Swap.printArray(array);
                if (array[j - 1] > array[j]) {
                    Swap.swap(array, j - 1, j);
                    count++;
                }
                System.out.println();
            }
            if (count == 0)
                break;
        }
    }

}

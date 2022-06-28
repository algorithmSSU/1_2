public class Q6_4 {
    public static void main(String[] args) {

    }

    static void bubbleSort(int[] array) {
        int i = 0;
        while (i < array.length - 1) {
            int last = array.length - 1;
            for (int j = array.length - 1; j > i; j--) {
                Swap.printArray(array);
                if (array[j - 1] > array[j]) {
                    Swap.swap(array, j - 1, j);
                    last = j;
                }
                System.out.println();
            }
            i = last;
        }
    }

}

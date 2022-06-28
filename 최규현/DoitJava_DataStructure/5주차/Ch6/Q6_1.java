public class Q6_1 {
    public static void main(String[] args) {

    }

    static void bubbleSort_back(int[] array) {
        for (int i = 0; i < array.length - 1; i++) {
            for (int j = 0; j < array.length - (i + 1); j++) {
                Swap.printArray(array);
                if (array[j] > array[j + 1])
                    Swap.swap(array, j, j + 1);
                System.out.println();
            }
        }
    }
}

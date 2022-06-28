public class Practice6_4 {
    public static void main(String[] args) {
        int[] array = {3, 4, 2, 3, 1};

        for (int i = 0; i < array.length - 1; i++) {
            int min = i;
            Swap.printArray(array);
            System.out.println();
            for (int j = i + 1; j < array.length; j++) {
                if (array[min] > array[j]) {
                    min = j;
                }
            }
            Swap.swap(array, i, min);
        }
        Swap.printArray(array);

    }

}

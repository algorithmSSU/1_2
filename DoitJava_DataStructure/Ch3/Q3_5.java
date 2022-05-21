public class Q3_5 {
    public static void main(String[] args) {
        int[] array = {1, 9, 2, 9, 4, 6, 7, 9};
        int key = 9;
        System.out.println(binSearchX(array, array.length, key));
    }

    private static int binSearchX(int[] a, int n, int key) {
        int index = -1;
        int start = 0;
        int end = n - 1;
        int middle;

        do {
            middle = (start + end) / 2;
            if (a[middle] == key)
                index = middle;
            else if (a[middle] < key)
                start = middle + 1;
            else
                end = middle - 1;
        } while (start <= end);

        return index;
    }
}

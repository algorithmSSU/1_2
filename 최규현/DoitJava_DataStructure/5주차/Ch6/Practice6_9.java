public class Practice6_9 {
    public static void main(String[] args) {
        int[] array = {5, 8, 4, 2, 6, 1, 3, 9, 7};
        quickSort(array, 0, array.length-1);
        Swap.printArray(array);
    }

    private static void quickSort(int[] array, int left, int right){
        int pl = left;
        int pr = right;
        int pivot = array[(pl + pr) / 2];

        System.out.printf("array[%d]~array[%d] : ", left, right);
        for(int i = left; i <= right; i++)
            System.out.print(array[i] + " ");
        System.out.println();

        while(pl <= pr){
            while(array[pl] < pivot) pl++;
            while(array[pr] > pivot) pr--;
            if(pl <= pr)
                Swap.swap(array, pl++, pr--);
        }
        if(left < pr) quickSort(array, left, pr);
        if(pl < right) quickSort(array, pl, right);
    }
}

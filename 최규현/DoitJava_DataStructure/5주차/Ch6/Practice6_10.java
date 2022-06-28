import java.util.Stack;

public class Practice6_10 {
    public static void main(String[] args) {
        int[] array = {5, 8, 4, 2, 6, 1, 3, 9, 7};
        stackQuickSort(array, 0, array.length - 1);
        Swap.printArray(array);
    }

    private static void stackQuickSort(int[] array, int left, int right) {
        Stack<Integer> lstack = new Stack<>();
        Stack<Integer> rstack = new Stack<>();

        lstack.push(left);
        rstack.push(right);

        while (lstack.empty() != true) {
            int pl = left = lstack.pop();
            int pr = right = rstack.pop();
            int pivot = array[(pl + pr) / 2];

            while (pl <= pr) {
                while (array[pl] < pivot) pl++;
                while (array[pr] > pivot) pr--;
                if (pl <= pr)
                    Swap.swap(array, pl++, pr--);
            }

            if (left < pr) {
                lstack.push(left);
                rstack.push(pr);
            }
            if (pl < right) {
                lstack.push(pl);
                rstack.push(right);
            }
        }
    }
}



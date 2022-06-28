public class Practice6_16 {
    public static void main(String[] args) {
        int[] array = {22, 5, 11, 32, 120, 68, 70};

        heapSort(array);

        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }
    }

    static void downHeap(int[] a, int left, int right) {
        int temp = a[left];
        int child;
        int parent;

        for (parent = left; parent < (1 + right) / 2; parent = child) {
            int leftChild = parent * 2 + 1;
            int rightChild = leftChild + 1;
            child = (rightChild <= right && a[leftChild] >= a[rightChild]) ? leftChild : rightChild;

            if(temp >= a[child]) break;

            a[parent] = a[child];
        }
        a[parent] = temp;
    }

    static void heapSort(int[] a){
        for(int i = (a.length -1) / 2; i >= 0; i--){
            downHeap(a, i, a.length-1);
        }

        for(int i = a.length -1; i > 0; i--){
            Swap.swap(a, 0, i);
            downHeap(a, 0, i-1);
        }
    }
}
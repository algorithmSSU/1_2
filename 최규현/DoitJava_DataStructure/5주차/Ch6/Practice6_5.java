public class Practice6_5 {
    public static void main(String[] args) {
        int[] array = {6, 5, 1, 7, 3, 9, 8};

        for(int i = 1; i < array.length; i++){
            int j;
            int tmp = array[i];
            Swap.printArray(array);
            System.out.println();
            for(j = i; j > 0; j--){
                if(tmp >= array[j-1])
                    break;
                array[j] = array[j-1];
            }
            array[j] = tmp;
        }
        Swap.printArray(array);
    }
}

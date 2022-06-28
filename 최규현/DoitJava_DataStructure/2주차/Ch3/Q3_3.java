public class Q3_3 {
    public static void main(String[] args) {
        int[] array = {1, 9, 2, 9, 4, 6, 7, 9};
        int key = 9;
        System.out.println(searchIdx(array, array.length, key));
    }

    static int searchIdx(int[] a, int n, int key){
        int[] idx = new int[n];
        int index = 0;


        for(int i = 0; i < n; i++){
            if(a[i] == key){
                idx[index] = i;
                index++;
            }
        }
        return arrayLength(idx);
    }

    static int arrayLength(int[] array){
        int count = 0;
        for(int i = 0 ; i < array.length; i++){
            if(array[i] != 0)
                count++;
        }

        return count;
    }

}

public class Q3_2 {
    public static void main(String[] args) {
        int[] array = {2, 8, 5, 2, 1, 5, 7};
        int num = 7;
        int target =7;
        int answer = seqSearch(array, num, target);
        System.out.println(answer==-1?"Not exist" : answer);
    }

    static int seqSearch(int[] array, int n, int target) {
        for (int i = 0; i < n; i++) {
            for(int j= 0 ; j < 2*i; j++)
                System.out.print(" ");
            System.out.print("*");
            System.out.println();
            printArray(array);
            if (array[i] == target)
                return i;
        }
        return -1;
    }

    private static void printArray(int[] array){
        for(int i = 0 ; i < array.length; i++)
            System.out.printf("%d ", array[i]);
        System.out.println();
    }
}

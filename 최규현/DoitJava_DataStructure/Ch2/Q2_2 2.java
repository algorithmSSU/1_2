class Q2_2 {
    public static void main(String[] args) {
        int[] array = {5, 10, 73, 2, -5, 42};
        reverse(array);
        printArray(array);
        System.out.println("역순 정렬을 마쳤습니다.");
    }

    private static void swap(int[] array , int num1, int num2){
        int tmp = array[num1];
        array[num1] = array[num2];
        array[num2] = tmp;
    }

    private static void reverse(int[] array){
        for(int i = 0 ; i < array.length/2; i++){
            printArray(array);
            System.out.println("a[" + i + "]과(와) a[" + (array.length - (i+1)) + "]를 교환합니다." );
            swap(array, i, array.length - (i+1));
        }
    }

    private static void printArray(int[] array){
        for(int i = 0 ; i < array.length; i++){
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }
}

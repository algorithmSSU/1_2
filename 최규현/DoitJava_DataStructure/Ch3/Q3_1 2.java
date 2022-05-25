public class Q3_1 {
    public static void main(String[] args) {
        int[] array = {22, 8, 55, 32, 120, 55, 70, 0};
        int num = 7;
        int target =120;

        int answer = seqSearch(array, num, target);
        System.out.println(answer==-1?"Not exist" : answer);
    }

    static int seqSearch(int[] array, int n, int target){
        array[n] = target;
        for(int i = 0; i < array.length; i++){
            if(array[i] == target)
                return i;
        }
        return -1;
    }
}
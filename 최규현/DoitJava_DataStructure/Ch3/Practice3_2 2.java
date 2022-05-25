public class Practice3_2 {
    public static void main(String[] args) {
        int[] array = {22, 8, 55, 32, 120, 55, 70};
        int num = 7;
        int target =55;

        int answer = seqSearch(array, num, target);
        System.out.println(answer==-1?"Not exist" : answer);
    }

    static int seqSearch(int[] array, int n, int target){
        for(int i = 0; i < n; i++){
            if(array[i] == target)
                return i;
        }
        return -1;
    }
}

public class Practice3_3 {
    public static void main(String[] args) {
        int[] array = {22, 8, 55, 32, 120, 55, 70, 0};
        int num = 7;
        int target =120;

        int answer = seqSearch(array, num, target);
        System.out.println(answer==-1?"Not exist" : answer);
    }

    static int seqSearch(int[] array, int n, int target){
        array[n] = target;
        int i = 0;
        while(true){
            if(array[i] == target)
                break;
            i++;
        }
        return i == n ? -1 : i;
    }
}


public class Practice2_9 {
    public static void main(String[] args) {
        int counter = 0;
        int j;
        for(int i = 2; i <= 1000; i++){
            for(j = 2; j < i; j++) {
                counter++;
                if (i % j == 0)
                    break;
            }
            if(i == j)
                System.out.println(i);
        }
        System.out.println("나눗셈을 수행한 횟수 : " + counter);
    }
}

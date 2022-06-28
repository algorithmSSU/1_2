public class Practice2_10 {
    public static void main(String[] args) {
        int counter = 0;
        int index = 0;
        int[] primeNum = new int[1000];
        primeNum[index++] = 2;

        for(int i = 3; i <= 1000; i += 2){
            int j;
            for(j = 1; j < index; j++){
                counter++;
                if(i % primeNum[j] == 0)
                    break;
            }
            if(j == index)
                primeNum[index++] = i;
        }

        for(int i = 0; i < index; i++)
            System.out.println(primeNum[i]);

        System.out.println("나눗셈을 수행한 횟수 : " + counter);
    }
}

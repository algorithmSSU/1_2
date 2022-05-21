public class Practice2_11 {
    public static void main(String[] args) {
        int counter = 0;
        int index = 0;
        int[] primeNum = new int[1000];
        primeNum[index++] = 2;
        primeNum[index++] = 3;

        for(int i = 5; i <= 1000; i += 2){
            int j = 1;
            boolean isPrime = true;
            while(primeNum[j] * primeNum[j] <= i){
                counter += 2;
                if(i % primeNum[j++] == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime) {
                counter++;
                primeNum[index++] = i;
            }
        }

        for(int i = 0; i < index; i++)
            System.out.println(primeNum[i]);

        System.out.println("나눗셈을 수행한 횟수 : " + counter);
    }
}
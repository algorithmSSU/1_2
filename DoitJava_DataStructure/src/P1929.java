import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.StringTokenizer;

public class P1929 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int M = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());
        boolean[] num = new boolean[N+1];

        int minimum = 0;
        for(int i = 1 ; i <= N; i++){
            if(i*i >= N){
                minimum = i;
                break;
            }
        }

        ArrayList<Integer> basicNum = new ArrayList<>();
        for(int i = 2; i <= minimum; i++){
            if(isPrimeNum(i)){
                basicNum.add(i);
            }
        }

        int index = 0;
        while (!basicNum.isEmpty()){
            int tmp = basicNum.get(index++);
            for(int i = 2; tmp <= N+1; i++){
//                num[tmp * i] = true;
                System.out.print(tmp*i + " ");
            }
            System.out.println();
        }






    }

    private static boolean isPrimeNum(int num){
        boolean answer = true;

        for(int i = 2; i <= num; i++){
            if(i != num && num % i == 0){
                answer = false;
                break;
            }
        }

        return answer;
    }
}

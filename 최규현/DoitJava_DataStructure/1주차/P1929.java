import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.StringTokenizer;

public class P1929 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br. readLine());
        int start = Integer.parseInt(st.nextToken());
        int end = Integer.parseInt(st.nextToken());

        int[] prime = new int[end]; //임의로 end개 int[] 객체 생성
        int idx = 0;
        prime[idx++] = 2;
        prime[idx++] = 3;

        for(int i = 5; i <= end; i+=2){
            boolean isPrime = true;
            for(int j = 1; prime[j] * prime[j] <= i; j++){
                if(i % prime[j] == 0){
                    isPrime =false;
                    break;
                }
            }
            if(isPrime)
                prime[idx++] = i;
        }

        for(int i = 0 ; i < idx; i++) {
            if(prime[i] >= start && prime[i] <= end)
                System.out.println(prime[i]);
        }
    }
}

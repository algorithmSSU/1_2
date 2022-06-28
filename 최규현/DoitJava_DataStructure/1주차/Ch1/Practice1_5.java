import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Practice1_5 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("1부터 n까지의 합을 구합니다.");
        System.out.print("n의 값 : ");
        int num = Integer.parseInt(br.readLine());
        int sum = 0;
        for(int i = 1 ; i <= num; i++){
            sum += i;
        }
        System.out.println("1부터 " + num + "까지의 합은 " + sum + "입니다.");
    }
}

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q8 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("1부터 n까지의 합을 구합니다.");
        System.out.print("n의 값 : ");
        int num = Integer.parseInt(br.readLine());

        System.out.println(sum(num));
    }
    private static int sum(int n){
        return (n * (n+1)) / 2;
    }
}

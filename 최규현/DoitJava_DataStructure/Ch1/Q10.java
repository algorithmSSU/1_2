import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q10 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("a의 값 : ");
        int a = Integer.parseInt(br.readLine());

        while(true) {
            System.out.print("b의 값 : ");
            int b = Integer.parseInt(br.readLine());
            if(b <= a){
                System.out.println("a보다 큰 값을 입력하세요!");
                continue;
            }
            else {
                System.out.println("b-a는 " + (b-a) + "입니다");
                break;
            }
        }
    }
}

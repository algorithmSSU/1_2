import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q11 {
    public static void main(String[] args) throws IOException {
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
        int num  = Integer.parseInt(br.readLine());

        System.out.println("그 수는 " + (Integer.toString(num)).length() + "자리입니다.");
    }
}

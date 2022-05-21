import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Practice1_3 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.print("정수를 입력하세요 : ");
        int num = Integer.parseInt(br.readLine());

        if (num > 0)
            System.out.println("이 수는 양수입니다.");
        else if (num == 0)
            System.out.println("이 수는 0 입니다.");
        else
            System.out.println("이 수는 음수입니다.");
    }

}

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class Q14 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("사각형을 출력합니다.");
        System.out.print("단 수 : ");
        int num = Integer.parseInt(br.readLine());

        for(int i = 0; i < num; i++){
            for(int j = 0; j < num; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}

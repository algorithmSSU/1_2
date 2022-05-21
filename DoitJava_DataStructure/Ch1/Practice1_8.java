import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Practice1_8 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("직각 이등변 삼각형을 출력합니다.");
        System.out.print("단 수 : ");
        int num = Integer.parseInt(br.readLine());

        for(int i = 0; i < num; i++){
            for(int j = 0; j <= i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}

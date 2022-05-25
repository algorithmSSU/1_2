import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Practice1C_2 {
    public static void main(String[] args) throws IOException {
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
        int num;

        while(true){
            System.out.print("입력 : ");
            num  = Integer.parseInt(br.readLine());
            if(Integer.toString(num).length() == 2)
                break;
            else
                continue;
        }

        System.out.println("변수 no의 값 : " + num);

    }
}

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class P2445 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        for(int i = 0; i < N; i++){
            for(int j = 0; j < i+1; j++){
                System.out.print("*");
            }

            for(int k = 0; k < 2*(N-(i+1)); k++){
                System.out.print(" ");
            }

            for(int l = 0; l < i+1; l++){
                System.out.print("*");
            }
            System.out.println();
        }

        for(int i = 0 ; i < N-1; i++){
            for(int j = 0; j < N-(i+1); j++){
                System.out.print("*");
            }

            for(int k = 0; k < 2*(i+1); k++){
                System.out.print(" ");
            }

            for(int l = 0 ; l < N-(i+1); l++){
                System.out.print("*");
            }
            System.out.println();
        }

    }
}


/*

input >> 5

 *        *
 **      **
 ***    ***
 ****  ****
 **********
 ****  ****
 ***    ***
 **      **
 *        *




output
첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
 */
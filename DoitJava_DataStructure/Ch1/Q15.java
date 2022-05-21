import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q15 {
    public static void main(String[] args) throws IOException {
//        triangleLB(5);
//        triangleLU(5);
//        triangleRU(5);
        triangleRB(5);
    }

    private static void triangleLB(int num) {
        for (int i = 0; i < num; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    private static void triangleLU(int num) {
        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num - i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    private static void triangleRU(int num) {
        for (int i = 0; i < num; i++) {
            for (int k = num - i; k < num; k++) {
                System.out.print(" ");
            }

            for (int j = 0; j < num - i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    private static void triangleRB(int num) {
        for (int i = 0; i < num; i++) {
            for(int j = 0 ; j < num-(i+1); j++){
                System.out.print(" ");
            }
            for(int k = num-(i+1); k < num ; k++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}

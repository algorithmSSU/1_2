import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q9 {
    public static void main(String[] args) throws IOException {
        System.out.println("sum of a ~ b");
        System.out.println(sumof(3, 10));
    }
    private static int sumof(int a, int b){
        int sum = 0;
        for(int i = a; i <= b; i++){
            sum += i;
        }
        return sum;
    }
}

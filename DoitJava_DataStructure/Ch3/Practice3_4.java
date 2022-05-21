import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Practice3_4 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("요소수 : ");
        int num = Integer.parseInt(br.readLine());
        int[] array = new int[num];

        array[0] = Integer.parseInt(br.readLine());
        for(int i = 1; i < num; i++){
            do{
                array[i] = Integer.parseInt(br.readLine());
            }while(array[i] < array[i-1]);
        }

        System.out.print("target : ");
        int target = Integer.parseInt(br.readLine());

        int answer = binarySearch(array, num, target);
        System.out.println(answer == -1 ? "Not exist" : answer);

    }

    private static int binarySearch(int[] array, int length, int target) {
        int start = 0;
        int end = length - 1;
        int middle;

        while (start <= end) {
            middle = (start + end) / 2;
            if (array[middle] == target)
                return middle;
            else if (array[middle] < target)
                start = middle + 1;
            else
                end = middle - 1;
        }

        return -1;
    }
}

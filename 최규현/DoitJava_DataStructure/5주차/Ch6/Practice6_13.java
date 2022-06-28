import java.util.Arrays;

public class Practice6_13 {
    public static void main(String[] args) {
        int[] array = {7, 22, 5, 11, 32, 120, 68, 70};
        for(int i = 0 ; i < array.length; i++)
            System.out.print(array[i] + " ");
        System.out.println();
        Arrays.sort(array);
        for(int i = 0 ; i < array.length; i++)
            System.out.print(array[i] + " ");
    }
}

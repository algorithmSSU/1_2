import java.util.Random;

public class Practice2_5 {
    public static void main(String[] args) {
        int[] height = makeRandomArray(5);
        for(int i = 0 ; i < height.length; i++)
            System.out.println(i + "번째 사람 키는 " + height[i]);

        System.out.println("max Value is " + maxValue(height  ));
    }

    private static int maxValue(int[] a){
        int max = a[0];

        for(int i = 0; i < a.length; i++){
            if (max < a[i])
                max = a[i];
        }

        return max;
    }

    private static int[] makeRandomArray(int size){
        Random rand = new Random();
        int[] answer = new int[size];
        for(int i = 0 ; i < size; i++){
            answer[i] = 100 + rand.nextInt(90);
        }

        return answer;
    }
}

import java.util.LinkedList;
import java.util.Queue;

public class Programmers_42586 {
    public static void main(String[] args) {
        //static 지우고 export
        int[] progresses = {95, 90, 99, 99, 80, 99};
        int[] speeds = {1, 1, 1, 1, 1, 1};

        solution(progresses, speeds);
    }

    public static int[] solution(int[] progresses, int[] speeds) {
        int[] answer = new int[progresses.length];
        int answerIdx = 0;

        int ptr = 0;
        int count;
        while(true){
            if(ptr == progresses.length)
                break;

            count = 0;
            nextDay(progresses, speeds);
            while(ptr < progresses.length && progresses[ptr] >= 100){
                count++;
                ptr++;
            }

            if(!(count==0))
                answer[answerIdx++] = count;
        }

        int[] realAnswer = new int[answerIdx];
        for(int i = 0 ; i < answerIdx; i++){
            realAnswer[i] = answer[i];
        }

        return realAnswer;
    }

    private static void nextDay(int[] progresses, int[] speeds){
        for(int i = 0 ; i < progresses.length; i++){
            progresses[i] += speeds[i];
        }
    }

    private static void printArray(int[] progresses, int[] speeds){
        for(int i = 0 ; i < progresses.length; i++){
            System.out.println(progresses[i] + "   " + speeds[i]);
        }
        System.out.println("---------------------");
    }
}

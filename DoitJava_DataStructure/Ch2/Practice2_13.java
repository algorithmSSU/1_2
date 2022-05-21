public class Practice2_13 {
    private static int[][] mdays = {{31, 28, 31, 30, 31, 31, 30, 31, 30, 31},
            {31, 29, 31, 30, 31, 31, 30, 31, 30, 31}};

    public static void main(String[] args) {
        System.out.println(calculateDays(2022, 5, 20));
    }

    private static int isLeap(int year){
        return (year %  4 == 0 && year % 100 != 0 || year % 400 == 0) ? 1 : 0;
    }

    private static int calculateDays(int year, int month, int day){
        int isLeap = isLeap(year);
        int answer = day;

        for(int i = 0; i < month-1; i++){
            answer += mdays[isLeap][i];
        }

        return answer;
    }
}

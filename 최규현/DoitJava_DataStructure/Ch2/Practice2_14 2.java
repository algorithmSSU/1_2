import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Practice2_14 {
    static final int VMAX = 21;

    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        PhysicsData[] x = {
                new PhysicsData("최규현", 185, 1.5),
                new PhysicsData("최규현", 185, 1.5),
                new PhysicsData("최규현", 185, 1.5),
                new PhysicsData("최규현", 185, 1.5),
                new PhysicsData("최규현", 185, 1.5),
                new PhysicsData("최규현", 185, 1.5)
        };
        int[] vdist = new int[VMAX];

        System.out.println("O 신체검사 리스트 O");
        System.out.println("이름     키   시력");
        System.out.println("-----------------");
        for(int i = 0 ; i < x.length; i++)
            System.out.printf("%-8s%3d%5.1f\n", x[i].name, x[i].height, x[i].vision);

        System.out.printf("\n평균 키 : %5.1fcm\n", averageHeight(x));
        distVision(x, vdist);

        System.out.println("\n시력 분포");
        for(int i = 0 ; i < VMAX; i++){
            System.out.printf("%3.1f~ : %2d명\n", i / 10.0, vdist[i]);
        }
    }

    static class PhysicsData {
        String name;
        int height;
        double vision;

        PhysicsData(String name, int height, double vision) {
            this.name = name;
            this.height = height;
            this.vision = vision;
        }
    }

    static double averageHeight(PhysicsData[] data){
        double sum = 0;
        for(PhysicsData tmp : data){
            sum += tmp.height;
        }

        return sum / data.length;
    }

    static void distVision (PhysicsData[] dat, int[] dist){
        int i = 0;

        dist[i] = 0;
        for(i = 0; i < dat.length; i++)
            if(dat[i].vision >= 0.0 && dat[i].vision <= VMAX / 10.0)
                dist[(int)(dat[i].vision * 10)]++;
    }
}

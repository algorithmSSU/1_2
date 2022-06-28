public class Practice6_17 {
    public static void main(String[] args) {
        int[] num = {22, 5, 11, 32, 120, 68, 70};

        int max = num[0];
        for(int i = 1; i < num.length; i++){
            if(num[i] > max) max = num[i];
        }

        System.out.print("정렬 전 : ");
        for(int i = 0; i < num.length; i++){
            System.out.print(num[i] + " ");
        }
        System.out.println();

        fSort(num, max);
        System.out.print("정렬 후 : ");
        for(int i = 0; i < num.length; i++){
            System.out.print(num[i] + " ");
        }
    }
    static void fSort(int[] a, int max){
        int[] f = new int[max+1]; //도수분포
        int[] b = new int[a.length];


        System.out.println("-----------------도수분포표----------------");
        for(int i = 0; i < a.length; i++){
            f[a[i]]++;
            Swap.printArray(f);
            System.out.println();
        }
        System.out.println("-----------------누적 도수분포표----------------");
        for(int i = 1; i <= max; i++){
            f[i] += f[i-1];
            Swap.printArray(f);
            System.out.println();
        }
        System.out.println("-----------------목적배열 생성----------------");
        for(int i = a.length-1; i >= 0; i--) {
            b[--f[a[i]]] = a[i];
            Swap.printArray(b);
            System.out.println();
        }
        for(int i = 0; i < a.length; i++) a[i] = b[i];
    }
}

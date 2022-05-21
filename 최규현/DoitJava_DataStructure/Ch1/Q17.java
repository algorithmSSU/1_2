public class Q17 {
    public static void main(String[] args) {
        spira(4);
    }
    private static void spira(int n){
        for(int i = 0  ; i < n; i++){
            for(int k = 0; k < n-(i+1); k++){
                System.out.print(" ");
            }

            for(int j = 0; j < 2*i+1; j++){
                System.out.print(i%10 + 1);
            }
            System.out.println();
        }
    }
}

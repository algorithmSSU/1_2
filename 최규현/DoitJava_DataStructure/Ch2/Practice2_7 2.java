public class Practice2_7 {
    public static void main(String[] args) {

    }

    private  static boolean equals(int[] a, int[] b){
        if(a.length != b.length)
            return false;

        for(int i = 0 ; i < a.length; i++){
            if(a[i] != b[i])
                return false;
        }

        return true;
    }
}

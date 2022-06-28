public class Practice6_11 {
    public static void main(String[] args) {
        int[] a = {2, 4, 6, 8, 11, 13};
        int[] b = {1, 2, 3, 4, 9, 16, 21};
        int[] c = new int[13];

        merge(a, b, c);
        for(int i = 0 ; i < c.length; i++){
            System.out.println(c[i]);
        }

    }

    static void merge(int[] a, int[] b, int[] c) {
        int pa = 0;
        int pb = 0;
        int pc = 0;

        while (pa < a.length && pb < b.length) {
            c[pc++] = (a[pa] <= b[pb]) ? a[pa++] : b[pb++];
        }

        while (pa < a.length) {
            c[pc++] = a[pa++];
        }

        while (pb < b.length) {
            c[pc++] = b[pb++];
        }
    }

}



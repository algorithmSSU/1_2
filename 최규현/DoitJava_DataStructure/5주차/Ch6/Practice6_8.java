public class Practice6_8 {
    public static void main(String[] args) {
        int[] array = {1, 8, 7, 4, 5, 2, 6, 3, 9};
        partition(array);
    }

    private static void partition(int[] array){
        int pl = 0;
        int pr = array.length-1;
        int x = array[array.length/2];

        while(pl <= pr){
            while(array[pl] < x) pl++;
            while(array[pr] > x) pr--;
            if(pl <= pr)
                Swap.swap(array, pl++, pr--);
        }

        for(int i = 0; i < pl; i++){
            System.out.print(array[i] + " ");
        }
        System.out.println();

        if(pl > pr+1) {
            for (int i = pr+1; i < pl; i++)
                System.out.print(array[i]);
            System.out.println();
        }

        for(int i = pr+1; i < array.length; i++)
            System.out.print(array[i] + " ");
        System.out.println();



    }
}

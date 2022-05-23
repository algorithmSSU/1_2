public class Q4_4 {
    private int max;
    private int ptr;
    private int[] que;

    Q4_4(int capacity){
        max = capacity;
        que = new int[max];
    }

    public void enqueue(int x){
        que[ptr++] = x;
    }

    public void dequeue(){
        int[] tmp = new int[max];
        int idx = 0;
        System.out.println(que[0]);

        for(int i = 1 ; i < ptr; i++){
            tmp[idx++] = que[i];
        }
        ptr = idx;
    }
}

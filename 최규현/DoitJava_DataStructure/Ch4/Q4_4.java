public class Q4_4 {
    private int max;
    private int ptr;
    private int[] que;

    public static void main(String[] args) {
        Q4_4 tmp = new Q4_4(32);
        tmp.enqueue(1);
        tmp.enqueue(2);
        tmp.enqueue(3);
        tmp.enqueue(4);
        tmp.dequeue();
        tmp.dequeue();
        tmp.dequeue();
        tmp.dequeue();
    }

    Q4_4(int capacity){
        ptr = 0;
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
        que = tmp;
    }
}

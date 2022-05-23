public class Practice4_3 {
}

class IntQueue {
    private int max;
    private int element;
    private int front;
    private int rear;
    private int[] queue;

    public IntQueue(int capacity) {
        max = capacity;
        element = front = rear = 0;
        queue = new int[max];
    }

    public void enque(int x){
        queue[rear++] = x;
        element++;
        if(rear == max)
            rear = 0;
    }

    public void deque(){
        System.out.println(queue[front++]);
        element--;
        if(front == max)
            front = 0;
    }

    public void peek(){
        System.out.println(queue[front]);
    }

    public int indexOf(int target){
        for(int i = 0 ; i < element; i++){
            int index = (i + front) % max;
            if(queue[index] == target)
                return index;
        }
        return -1;
    }


}


//ring buffer

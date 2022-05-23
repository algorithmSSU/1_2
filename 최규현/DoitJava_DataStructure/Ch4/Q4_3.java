public class Q4_3 {
    public static void main(String[] args) {
        TwoWayStack stk = new TwoWayStack(32);
        stk.front_push(123);
        stk.back_push(22);

        System.out.println(stk.front_pop());
        System.out.println(stk.back_pop());
    }
}

class TwoWayStack {
    private int max;
    private int front_ptr;
    private int back_ptr;
    private int[] stk;

    public class EmptyIntStackException extends RuntimeException {
        public EmptyIntStackException() {
        }
    }

    public class OverflowIntStackException extends RuntimeException {
        public OverflowIntStackException() {
        }
    }

    public TwoWayStack(int capacity) {
        max = capacity;
        front_ptr = 0;
        back_ptr = max-1;
        try {
            stk = new int[max];
        } catch (OutOfMemoryError e) {
            max = 0;
        }
    }

    public void front_push(int x) throws OverflowIntStackException {
        if (front_ptr >= back_ptr)
            throw new OverflowIntStackException();
        stk[front_ptr++] = x;
    }

    public void back_push(int x) throws OverflowIntStackException {
        if (front_ptr >= back_ptr)
            throw new OverflowIntStackException();
        stk[back_ptr--] = x;
    }

    public int front_pop() throws EmptyIntStackException{
        if(front_ptr <= 0)
            throw new EmptyIntStackException();
        return stk[--front_ptr];
    }

    public int back_pop() throws EmptyIntStackException{
        if(back_ptr >= max-1)
            throw new EmptyIntStackException();
        return stk[++back_ptr];
    }
}
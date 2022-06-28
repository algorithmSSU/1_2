public class Practice4_1 {

}

class IntStack {
    private int max;
    private int ptr;
    private int[] stk;

    public class EmptyIntStackException extends RuntimeException {
        public EmptyIntStackException() {
        }
    }

    public class OverflowIntStackException extends RuntimeException {
        public OverflowIntStackException() {
        }
    }

    public IntStack(int capacity) {
        max = capacity;
        ptr = 0;
        try {
            stk = new int[max];
        } catch (OutOfMemoryError e) {
            max = 0;
        }
    }

    public void push(int x) throws OverflowIntStackException {
        if (ptr >= max)
            throw new OverflowIntStackException();
        stk[ptr++] = x;
    }

    public int pop() throws EmptyIntStackException{
        if(ptr <= 0)
            throw new EmptyIntStackException();
        return stk[--ptr];
    }

    public int peek() throws EmptyIntStackException{
        if(ptr <= 0)
            throw new EmptyIntStackException();
        return stk[ptr-1];
    }

    public int indexOf(int target){
        for(int i = ptr -1; i >= 0; i--){
            if(stk[i] == target) {
                return i;
            }
        }
        return -1;
    }

    public void clear(){
        ptr = 0;
    }

    public int capacity(){
        return max;
    }

    public int size(){
        return ptr;
    }

    public boolean isEmpty(){
        if(ptr <= 0)
            return true;
        else
            return false;
    }

    public boolean isFull(){
        if(ptr >= max)
            return true;
        else
            return false;
    }

    public void dump(){
        for(int i = 0 ; i < ptr; i++){
            System.out.println(stk[i]);
        }
    }

}
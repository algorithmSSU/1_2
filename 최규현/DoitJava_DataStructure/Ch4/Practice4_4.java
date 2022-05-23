public class Practice4_4 {
    public static void main(String[] args) {
        IntQueue tmp = new IntQueue(32);
        tmp.enque(123);
        tmp.enque(12);
        tmp.enque(1);

        tmp.deque();
        tmp.deque();
        tmp.deque();

    }
}

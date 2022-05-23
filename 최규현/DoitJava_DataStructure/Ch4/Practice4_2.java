import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Practice4_2 {
    public static void main(String[] args) throws IOException {
        IntStack stk = new IntStack(64);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        while(true){
            System.out.println("현재 데이터 수 : " + stk.size() + " / " + stk.capacity());
            System.out.print("1.push 2.pop 3.peek 4.dump 5.exit : ");

            int menu = Integer.parseInt(br.readLine());
            int tmp;
            switch (menu){
                case 1:
                    System.out.print("element : ");
                    tmp = Integer.parseInt(br.readLine());
                    try{
                        stk.push(tmp);
                    }catch (IntStack.OverflowIntStackException e){
                        System.out.println("stack is full");
                    }
                    break;
                case 2:
                    try{
                        System.out.println(stk.pop());
                    }catch (IntStack.EmptyIntStackException e){
                        System.out.println("stack is empty");
                    }
                    break;
                case 3:
                    try{
                        System.out.println(stk.peek());
                    }catch (IntStack.EmptyIntStackException e){
                        System.out.println("stack is empty");
                    }
                    break;
                case 4:
                    stk.dump();
                    break;
                case 5:
                    System.exit(0);
            }

        }
    }


}

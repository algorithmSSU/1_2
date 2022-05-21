#include <iostream>
using namespace std;


class queue{

    public:
        queue(int num);
        void enque(int num);
        int deque();
        int peek();
        void clear();
        int getCapacity();
        int getsize();
        bool IsEmpty();
        bool IsFull();
        void dump();
    private:
        int *arr;
        int capacity;
        int rear;
        int front;
        int num; // 현재 갯수

};

int main(){

    int temp, tem;
    queue q(10);

    for (int j = 11; j < 20; j++){
        q.enque(j);
    };

    q.dump();

    temp = q.deque();
    tem = q.deque();

    cout << "q.deque(): " << temp << " q.deque(): " << tem << endl;

};

queue::queue(int num) : rear(0), front(0), num(0)
{
    capacity = num;
    arr = new int[num];
};

bool queue::IsEmpty(){
    if(rear==0){
        return true;
    }else{
        return false;
    };
};

bool queue::IsFull(){
    if(num!=0 && front==rear){
        return true;
    }else{
        return false;
    }
};

void queue::enque(int num){
    if(IsFull()){
        return;
    }else{
        arr[rear++] = num;
        num++;
    };
};

int queue::deque(){
    if(IsEmpty()){
        return 0;
    }else{
        num--;
        return arr[front++];
    };
};

int queue::peek(){
    if(IsEmpty()){
        return 0;
    }else{
        return arr[front];
    }
};

void queue::clear(){
    front = 0;
    rear = 0;
    num = 0;
};

int queue::getCapacity(){
    return capacity;
};

int queue::getsize(){
    return num;
};

void queue::dump(){
    for (int i = front; i < rear; i++){
        cout << arr[i] << endl;
    };
};

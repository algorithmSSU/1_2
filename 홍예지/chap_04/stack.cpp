#include <iostream>
using namespace std;


class stack{
    public:
        stack();
        void push(int num);
        void pop();
        void print();
        int getcapacity();
        int peek(int num);

    private:
        int *arr;
        int capacity;
        int ptr;
};

int main(){

    stack Stack;
    int temp;

    for (int i = 0; i < 10;i++){
        Stack.push(i);
    };

    temp = Stack.peek(2);
    cout << "peek(2) : " << temp << endl;

    Stack.pop();
    Stack.pop();
    Stack.pop();

    Stack.print();

    Stack.getcapacity();
};

stack::stack() : capacity(10), ptr(0){
    arr = new int[capacity];
};


void stack::push(int num){
    if (ptr==capacity){
        cout << "full" << endl;
    }else{
        arr[ptr] = num;
        ptr++;
    };
};

void stack::pop(){
    if (ptr<0){
        cout << "empty" << endl;
    }else
    {
        arr[ptr] = 0;
        ptr = ptr - 1;
    };
};

void stack::print(){
    if (ptr<0){
        cout << "empty" << endl;
    }else
    {
        for (int i = ptr-1; i>=0; i--){
            cout << arr[i] << endl;;
        };
    };
};

int stack::getcapacity(){
    return capacity;
};

int stack::peek(int num){
    return arr[num];
};
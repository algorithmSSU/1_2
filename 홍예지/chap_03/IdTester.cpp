#include <iostream>
using namespace std;

class Id{
    public: 
        Id(char id);
        int getCounter();
        char getId();
        
        const void count();

    private:
        static int counter;
        int id;

};
int main(){
    Id *a = new Id('1');
    Id *b = new Id('2');

    cout << "a의 아이디: " << a->getId() << "/ "
         << "b의 아이디: " << b->getId() << endl;

    cout << "부여한 아이디의 개수: " << a->getCounter();
}

int Id::counter = 0;

Id::Id(char ID) : id(ID){
    counter++;
};

int Id::getCounter(){
    return counter;
};

char Id::getId(){
    return id;
}

// const -> 상수, 값 변경이 이루어지지 않는, read only!
// static -> class 내 전역 변수 사용!
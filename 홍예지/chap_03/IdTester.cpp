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

    cout << "a�� ���̵�: " << a->getId() << "/ "
         << "b�� ���̵�: " << b->getId() << endl;

    cout << "�ο��� ���̵��� ����: " << a->getCounter();
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

// const -> ���, �� ������ �̷������ �ʴ�, read only!
// static -> class �� ���� ���� ���!
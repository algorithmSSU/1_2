#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Node{
    public:
        Node *nextNode = nullptr;
        int data;
};

class link{
    public:
        Node *head = new Node();

        void insert(int data);
        int getData(int nodeIndex);
        void deleteData(int nodeIndex);

        const void printData();
        //const void printSize();
    private:
        int cntSize = 0;
};

int main(){

    link Link;

    Link.insert(3);
    Link.insert(5);
    Link.insert(7);

    Link.printData();
    cout << "first: "<<Link.getData(1) << endl;
    cout << "second: " << Link.getData(2) << endl;
    cout << "third: " << Link.getData(3) << endl;
};


void link::insert(int data){
    if(cntSize==0){
        head->data = data;
        head->nextNode = nullptr;
    }else{
        Node *currentNode = new Node();
        currentNode->data = data;
        currentNode->nextNode = nullptr;

        Node *tempNode = head;

        while(tempNode->nextNode!=nullptr){
            tempNode = tempNode->nextNode;
        }
        tempNode->nextNode = currentNode;
    }
    cntSize++;
};


const void link::printData(){
    Node *tempNode = head;

    for (int i = 0; i < cntSize; ++i){
        cout << tempNode->data << endl;
        tempNode = tempNode->nextNode;
    }
};


void link::deleteData(int nodeIndex){
    Node *tempNode = head;
    Node *deleteNode;
    Node *swapNode;

    if(nodeIndex!=0){
        for (int i = 0; i < nodeIndex - 1; i++){
            tempNode = tempNode->nextNode;
        }

        deleteNode = tempNode->nextNode;
        swapNode = deleteNode->nextNode;

        tempNode->nextNode = swapNode;
    }else{
        head = tempNode->nextNode; // head가 빠지니까 head 다음 노드가 head가 됨
        deleteNode = tempNode; // 삭제할 노드는 head 노드
    }

    delete deleteNode;
    cntSize -= 1;
};


int link::getData(int nodeIndex){
    Node *temp = head;
    int num;

    for (int i = 0; i < nodeIndex; i++){
        num = temp->data;
        temp = temp->nextNode;
    };
    return num;
}
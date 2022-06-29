#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node<T> *next = nullptr;
    Node<T> *last = nullptr;
};

template <class T>
class linkedlist
{
public:
    Node<T> *head = new Node<T>();
    Node<T> *crnt = new Node<T>();

    void addfirst(Node<T> *obj);
    void addlast(Node<T> *obj);
    void insert(Node<T> *obj);
    void removefirst();
    void removelast();
    void remove(Node<T> *obj);
    void removeCurrentNode();
    void clear();
    bool next();
    void printCurrentNode();
    void dump();
    void purge(T obj); // 서로 같은 노드를 찾아서 가장 앞쪽에 노드만 남기고 모두 삭제

private:
    int cntsize = 0;
};
int main()
{

    Node<int> *A = new Node<int>;
    Node<int> *B = new Node<int>;
    Node<int> *C = new Node<int>;
    Node<int> *D = new Node<int>;
    Node<int> *E = new Node<int>;
    Node<int> *F = new Node<int>;
    Node<int> *G = new Node<int>;
    Node<int> *H = new Node<int>;
    Node<int> *I = new Node<int>;
    Node<int> *J = new Node<int>;
    Node<int> *K = new Node<int>;

    A->data = 10;
    B->data = 20;
    C->data = 30;
    D->data = 40;
    E->data = 20;
    F->data = 20;
    G->data = 20;
    H->data = 10;
    I->data = 10;
    J->data = 30;
    K->data = 30;

    linkedlist<int> link;

    link.addfirst(A);
    link.insert(B);
    link.insert(C);
    link.insert(D);
    link.insert(E);
    link.insert(F);
    link.insert(G);
    link.insert(H);
    link.insert(I);
    link.insert(J);
    link.insert(K);

    // link.printCurrentNode();
    cout << "===purge before===" << endl;
    link.dump();

    cout << "===purge after===" << endl;
    link.purge(10);
    link.dump();
};

template <class T>
void linkedlist<T>::addfirst(Node<T> *obj)
{
    if (cntsize == 0)
    {
        head->data = obj->data;
        head->next = nullptr;
        head = crnt = obj;
    }
    else
    {
        obj->next = head->last;
        obj->last = nullptr;
    };
    cntsize++;
};

template <class T>
void linkedlist<T>::addlast(Node<T> *obj)
{
    Node<T> *front = head;
    if (cntsize == 0)
    {
        addfirst(obj);
    }
    else
    {
        while (front->next != nullptr)
        {
            front = front->next;
        };
        front->next = obj;
    }
    cntsize++;
};

template <class T>
void linkedlist<T>::insert(Node<T> *obj)
{
    Node<T> *temp = head;
    if (head == nullptr)
    {
        addfirst(obj);
    }
    else
    {
        while (temp->next != nullptr)
        {
            temp = temp->next;
        };
        temp->next = obj;
        /*temp->last = crnt;
        temp->next = nullptr;
        temp->data = obj->data;*/
    };
    cntsize++;
}

template <class T>
void linkedlist<T>::removefirst()
{

    Node<T> *temp = head;
    if (temp == nullptr) // cntsize==0;
    {
        cout << "node가 없습니다." << endl;
    }
    else
    {

        head->data = temp->next->data;
        head = temp->next;
        head->last = nullptr;
    };
    delete head;
    cntsize--;
};

template <class T>
void linkedlist<T>::removelast()
{
    if (head != nullptr)
    {
        if (head.next == nullptr)
        {
            removefirst();
        }
        else
        {
            Node<T> temp = head;
            Node<T> tempo = head;

            while (temp->next != nullptr)
            {
                tempo = temp;
                temp = temp->next;
            };
            tempo->next = nullptr;
            crnt = tempo;
        }
    }
}

template <class T>
void linkedlist<T>::remove(Node<T> *obj)
{
    if (head != nullptr)
    {
        if (obj == head)
        {
            removefirst();
        };
    }
    else
    {
        Node<T> *ptr = head;

        while (ptr->next != obj)
        {
            ptr = ptr->next;
            if (ptr == nullptr)
                return;
        }
        ptr->next = obj->next;
        crnt = ptr;
    };
    cntsize--;
};

template <class T>
void linkedlist<T>::removeCurrentNode()
{
    remove(crnt); // 맨 마지막 노드 삭제
};

template <class T>
void linkedlist<T>::clear()
{
    while (head != nullptr)
    {
        removefirst();
    }
    crnt = nullptr;
};

template <class T>
bool linkedlist<T>::next()
{
    if (crnt == nullptr || crnt->next == nullptr)
    {
        return false;
    }
    crnt = crnt->next;
    return true;
}

template <class T>
void linkedlist<T>::printCurrentNode()
{
    if (crnt == nullptr)
    {
        cout << "노드가 없습니다." << endl;
    }
    else
    {
        cout << crnt->data << endl;
    }
};

template <class T>
void linkedlist<T>::dump()
{
    Node<T> *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
};


template <class T>
void linkedlist<T>::purge(T obj){
    Node<T> *temp = head;
    Node<T> *tmp;
    while (temp->data !=obj){
        if(temp->data==obj){
            break;
        }
        temp = temp->next; // cursor 이동시키고
    }
    while (temp->next != nullptr){
        tmp = temp->next;
        if(tmp->data == obj){
            temp->next = tmp->next;
            //temp->next = nullptr;
        }else{
            temp = temp->next;
        };
        if(temp->data==obj){
            while(temp->data!=obj){
                temp = temp->next;
            }
        }
        }
        
    }

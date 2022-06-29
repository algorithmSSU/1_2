#include <iostream>
using namespace std;

template <class T>
class Node{
    public:
        T data;
        Node<T> *prev;
        Node<T> *next;

        Node();
        Node(T obj, Node<T> *prev, Node<T> *next);
};

template <class T>
class Doublelinkedlst{
    public:
        Node<T> *head;
        Node<T> *crnt;

        Doublelinkedlst();
        bool isEmpty();
        T search(T obj);
        void printCurrentNode();
        void dump();
        void dumpReverse();
        bool next();
        bool prev();
        void add(T obj);
        void addFirst(T obj);
        void addLast(T obj);
        void removeCurrentNode();
        void remove(Node<T> p);
        void removeFirst();
        void removeLast();
        void clear();
};


/*dump, dumpreverse 다시 고쳐보기*/

int main(){

    Doublelinkedlst<int> list;

    list.add(1);
    list.add(2);
    list.add(3);
    list.dump();
};






template <class T>
Node<T>::Node(){
    data = 0;
    prev = next = this;
};

template <class T>
Node<T>::Node(T obj, Node<T> *prev, Node<T> *next){
    data = obj;
    this->prev = prev;
    this->next = next;
};

template <class T>
Doublelinkedlst<T>::Doublelinkedlst(){
    head = new Node<T>;
    crnt = new Node<T>;
};

template <class T>
bool Doublelinkedlst<T>::isEmpty(){
    return head->next == head;
}
template <class T>
T Doublelinkedlst<T>::search(T obj){
    Node<T> *temp = head;
    if(head==nullptr){
        cout << "No data" << endl;
    }else{
        while(temp->next!=head){
            if(temp->data==obj){
                cout << "found" << endl;
                return temp->data;
            }
            temp = crnt = temp->next;
        }
    }
};

template <class T>
void Doublelinkedlst<T>::printCurrentNode(){
    cout << crnt->data << endl;
};

template <class T>
void Doublelinkedlst<T>::dump(){
    Node<T> *temp = head->next;
    while(temp!=head){
        cout << temp->data << endl;
        temp =  temp->next;
    }
}
template <class T>
void Doublelinkedlst<T>::dumpReverse(){
    Node<T> *temp = head->prev;
    while(temp!=head){
        cout << temp->data << endl;
        temp = temp->prev;
    }
};
/*잠 시 쉼..*/

template <class T>
bool Doublelinkedlst<T>::next(){
    if(isEmpty()||crnt->next==head){
        return false;
    }else{
        crnt = crnt->next;
        return true;
    }
}
template <class T>
bool Doublelinkedlst<T>::prev(){
    if(isEmpty()||crnt->prev==head){
        return false;
    }else{
        crnt = crnt.prev;
        return true;
    };
}
template <class T>
void Doublelinkedlst<T>::add(T obj){
    Node<T> *node = new Node<T>(obj, this->crnt, this->crnt->next); // prev, next
    this->crnt->next = this->crnt->next->prev = node;
    crnt = node;
}
template <class T>
void Doublelinkedlst<T>::addFirst(T obj){
    crnt = head;
    add(obj);
}

template <class T>
void Doublelinkedlst<T>::addLast(T obj){
    crnt = head->prev;
    add(obj);
}
template <class T>
void Doublelinkedlst<T>::removeCurrentNode(){
    if(!isEmpty()){
        crnt->prev->next = crnt->next;
        crnt->next->prev = crnt->prev;
        crnt = crnt->prev;
        if(crnt==head){
            crnt = head->next;
        }
    }
}
template <class T>
void Doublelinkedlst<T>::remove(Node<T> P){
    Node<T> *ptr = head->next;

    while(ptr!=head){
        if(ptr==P){
            crnt = P;
            removeCurrentNode();
            break;
        }
        ptr = ptr->next;
    }
}
template <class T>
void Doublelinkedlst<T>::removeFirst(){
    crnt = head->next;
    removeCurrentNode();
}

template <class T>
void Doublelinkedlst<T>::removeLast(){
    crnt = head->prev;
    removeCurrentNode();
};

template <class T>
void Doublelinkedlst<T>::clear(){
    while(!isEmpty()){
        while(!isEmpty()){
            removeFirst();
        }
    }
}

#include <iostream>
#include <vector>

using namespace std;


template <class T>
class Node{
    public:
        T data;
        int next; // 리스트의 뒤쪽 포인터
        int dnext; // 프리 리스트의 뒤쪽 포인터
        void set(T data, int next);
};

template <class T>
class Arraylinkedlist{
    public:
        int getInsertIndex();
        void deleteIndex(int idx);
        Node<T> *n;
        int size;
        int max;
        int head;
        int crnt;
        int deleted;
        static int None;

        Arraylinkedlist(int capacity);
        T search(T obj);
        void addFirst(T obj);
        void addlast(T obj);
        void removeFirst();
        void removeLast();
        void remove(int p);
        void removeCurrentNode();
        void clear();
        bool next();
        void printCurrentNode();
        void dump();
};





template <class T>
int Arraylinkedlist<T>::None = -1;

int main(){


    Node<int> node;
    node.set(4, 2);
    //cout << node.data << endl;

    Arraylinkedlist<int> linkedlist(10);

    for (int i = 0; i < 10;i++){
        if(i==0){
            linkedlist.addFirst(2 * i);
        }else{
            linkedlist.addlast(2 * i);
        }
    };
    linkedlist.dump();
    linkedlist.printCurrentNode();
};


template <class T>
void Node<T>::set(T d, int n){
    data = d;
    next = n;
};

template <class T>
Arraylinkedlist<T>::Arraylinkedlist(int capacity) : size(capacity)
{
    head = crnt = max = deleted = 0;
    n = new Node<T>[capacity];
    n[capacity-1].next = -1;
    /*for (int i = 0; i < capacity; i++){
        n[i] = new Node<T>;
    };*/
};

template <class T>
int Arraylinkedlist<T>::getInsertIndex(){
    if(deleted==0){
        if(max < size){
            return ++max;
        }else{
            return None;
        }}
        else{
            int rec = deleted;
            deleted = n[rec].dnext;
            return rec;
    }
};


template <class T>
void Arraylinkedlist<T>::deleteIndex(int idx){
    if(deleted==None){
        deleted = idx;
        n[idx].dnext = None;
    }else{
        int rec = deleted;
        deleted = idx;
        n[idx].dnext = rec;
    }
};


template <class T>
T Arraylinkedlist<T>::search(T obj){
    int ptr = head;
    while(ptr!=0){
        if(obj == n[ptr].data){
            crnt = ptr; // 선택 노드를 현재 노드로
            return n[ptr].data;
        }
        ptr = n[ptr].next;
    }
    cout << "==찾는 노드가 없음==" << endl;
    return 0;
};


template <class T>
void Arraylinkedlist<T>::addFirst(T obj){
    int ptr = head;
    int rec = getInsertIndex();
    if(rec!=None){
        head = crnt = rec;
        n[head].set(obj, ptr);
    };
};

template<class T>
void Arraylinkedlist<T>::addlast(T obj){
    if(head==0){
        addFirst(obj);
    }else{
        int ptr = head;
        while(n[ptr].next!=0){
            ptr = n[ptr].next;
        };
        int rec = getInsertIndex();
        if(rec!=0){
            n[ptr].next = crnt = rec;
            n[rec].set(obj, 0);
        }
    }
};

template <class T>
void Arraylinkedlist<T>::removeFirst(){
    if(head!=0){
        int ptr = n[head].next;
        deleteIndex(head);
        head = crnt = ptr;
    }
};


template <class T>
void Arraylinkedlist<T>::removeLast(){
    if (head != 0){
        if(n[head].next==0){
            removeFirst();
        }else{
            int ptr = head;
            int pre = head;


            while(n[ptr].next!=0){
                pre = ptr;
                ptr = n[ptr].next;
            }
            n[pre].next = 0;
            deleteIndex(ptr);
            crnt = pre;
        }
    }
};

template <class T>
void Arraylinkedlist<T>::remove(int p){
    if(head!=0){
        if(p==head){
            removeFirst();
        }else{
            int ptr = head;
            while (n[ptr].next != p){
                ptr = n[ptr].next;
                if(ptr==0){
                    return;
                }
            }
            n[ptr].next = 0;
            deleteIndex(p);
            n[ptr].next = n[p].next;
            crnt = ptr;
        }
    }
};


template <class T>
void Arraylinkedlist<T>::removeCurrentNode(){
    remove(crnt); // 선택노드를 삭제
};


template <class T>
void Arraylinkedlist<T>::clear(){
    while(head!=0){
        removeFirst();
    }
    crnt = 0;
};


template <class T>
bool Arraylinkedlist<T>::next(){
    if(crnt==0 || n[crnt].next ==0){
        return false;
    }
    crnt = n[crnt].next;
    return true;
};


template <class T>
void Arraylinkedlist<T>::printCurrentNode(){
    if(crnt==0){
        cout << "선택한 노드가 없습니다." << endl;
    }
    else{
        cout << n[crnt].data << endl;
    };
};


template <class T>
void Arraylinkedlist<T>::dump(){
    int ptr = head;

    while(ptr!=0){
        cout << n[ptr].data << endl;
        ptr = n[ptr].next;
    }
}

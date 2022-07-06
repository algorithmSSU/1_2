#include <iostream>
#include <vector>

/*
<bubble sort>

바로 옆에 있는 거랑 비교해서 n개를 swap
이 방식으로 n번 해주는 방법
시간복잡도 O(N^2)

*/
using namespace std;

void bubblesort(int a[], int size);
void swap(int a[], int idx_a, int idx_b);
void print(int a[], int size);
int main(){

    int a[] = {9, 8, 7, 6};
    int size = sizeof(a) / sizeof(int);

    bubblesort(a,size);
    print(a, size);
};

void print(int a[], int size){
    for(int i=0; i<size;i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

void bubblesort(int a[],int size){

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - 1;j++){
            if(a[j]>a[j+1]){
                swap(a, j, j + 1);
            }
        }
    }
};


void swap(int a[], int idx_a, int idx_b){
    int temp = a[idx_a];
    a[idx_a] = a[idx_b];
    a[idx_b] = temp;
}



/*9876

8976
8796
8769
7869
7689






*/
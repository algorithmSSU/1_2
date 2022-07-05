#include <iostream>
using namespace std;

void insertionsort(int a[],int size); // 삽입정렬

void print(int a[], int size);

int main(){

    int a[5] = {8,3,9,7,6};

    int size = sizeof(a) / sizeof(int);

    cout << "==before==" << endl;
    print(a, size);

    cout << "==process==" << endl;
    insertionsort(a, size);
    cout << "\n";

    cout << "==after==" << endl;
    print(a, size);
};


void print(int a[],int size){
    for (int i = 0; i < size;i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}



void insertionsort(int a[],int size){
    int temp;

    for (int i = 1; i < size;i++){
        temp = a[i]; // 해당 위치에서
        for (int j = i-1; j>=0; j--){ // 왼쪽 끝까지 값 비교해주면서 삽입
            if(temp<a[j]){
                a[j+1] = a[j];
                a[j] = temp;
                temp = a[j];
            }else{
                continue;
            }
            print(a, size);
        }
    }
};

/*
83976
temp = a[1];
temp = 3
a[0] == 8
88976/ a[0+1] = a[0];
38976/ a[0] = 3;
38976
38996
38796
37896

*/
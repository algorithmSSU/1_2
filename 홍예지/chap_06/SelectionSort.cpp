#include <iostream>
using namespace std;

void insertionSort(int a[], int n);
void swap(int a[], int idx_1, int idx_2);

int main(){

    int a[] = {9,0,1,4,3,2,5};
    int n = sizeof(a) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << "\n";
    insertionSort(a, n);

    for (int i = 0; i < n; i++){
        cout << a[i];
    }
};

void swap(int a[], int idx_a,int idx_b){
    int temp = a[idx_a];
    a[idx_a] = a[idx_b];
    a[idx_b] = temp;
}

void insertionSort(int a[], int n){
    int i, j, temp;

    for (int i = 0; i < n-1;i++){
        int min = i;
        for (int j = i + 1; j < n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        swap(a, i, min);
    }
}
#include <iostream>
using namespace std;

void swap(int a[], int idx_a, int idx_b);
void bubblesort(int a[], int len);

int main(){

    int a[] = {4, 2, 3, 1};
    int n = sizeof(a) / sizeof(int);
    bubblesort(a, n);
    for (int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
};
/*1 2 3 4*/


void swap(int a[], int idx_a, int idx_b){
    int temp = a[idx_a];
    a[idx_a] = a[idx_b];
    a[idx_b] = temp;
};


void bubblesort(int a[],int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1;j++){
            if(a[j]>a[j+1]){
                swap(a, j, j + 1);
            }
        }
    }
}
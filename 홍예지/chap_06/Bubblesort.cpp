#include <iostream>
using namespace std;

void swap(int a[], int idx_a, int idx_b);
void bubblesort(int a[], int n);

int main(){

    int arr[] = {9, 1, 6, 5, 11, 10, 8, 7, 2, 4};
    int len = sizeof(arr) / sizeof(int);

    bubblesort(arr, len);

    for (int i = 0; i < len;i++){
        cout << arr[i];
    }
};



void swap(int a[], int idx_a, int idx_b){
    int t = a[idx_a];
    a[idx_a] = a[idx_b];
    a[idx_b] = t;
};


void bubblesort(int a[], int n){
    for (int i = 0; i < n - 1;i++){
        for (int j = n - 1; j > i; j--){
            if(a[j-1]>a[j]){
                swap(a,j-1,j);
            }
        }
    }
};
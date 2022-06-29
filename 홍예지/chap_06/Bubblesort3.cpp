#include <iostream>
using namespace std;

void swap(int a[], int idx_a, int idx_b);
void bubblesort(int a[], int n);

int main(){

    int a[] = {1, 3, 9, 4, 7, 8, 6};
    int n = sizeof(a) / sizeof(int);

    for (int i = 0; i < n;i++){
        cout << a[i];
    }
    cout << "\n";

    bubblesort(a, n);


    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
};



void swap(int a[],int idx_a, int idx_b){
    int temp = a[idx_a];
    a[idx_a] = a[idx_b];
    a[idx_b] = temp;
};

void bubblesort(int a[], int n){

    int k = 0;
    while(k<n-1){
        int last = n - 1;
        for (int j = n - 1; j > k;j--){ // 변경이 이루어진 데 까지만 비교를 하게 함
            if(a[j-1]>a[j]){
                swap(a, j - 1, j);
                last = j;
            }
        }
        k = last;
    }
}
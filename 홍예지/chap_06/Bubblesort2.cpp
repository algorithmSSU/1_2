#include <iostream>
using namespace std;

void swap(int a[], int idx_a, int idx_b);
void bubblesort(int a[], int n);
int main(){

    int arr[] = {4,6,7,9,1,2,5};
    int n = sizeof(arr) / sizeof(int);

    cout << "before" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    bubblesort(arr, n);

    cout << "\n";

    cout << "after" << endl;

    for (int i = 0; i < n;i++){
        cout << arr[i];
    }
};


void swap(int a[],int idx_a, int idx_b){
    int temp = a[idx_a];
    a[idx_a] = a[idx_b];
    a[idx_b] = temp;
};

void bubblesort(int a[],int n){

    for (int i = 0; i < n - 1;i++){
        int exchg = 0;
        for (int j = n-1; j > 0;j--){
            if(a[j]<a[j-1]){
                swap(a, j, j - 1);
                exchg++;
            }
        };
        if(exchg==0){
            break;
        }
    }
}
#include <iostream>
using namespace std;

void insertionSort(int a[], int n);
void swap(int a[], int idx_a, int idx_b);

int main(){

    int a[] = {6, 4, 8, 5, 2, 9, 7};
    int n = sizeof(a) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    };
    cout << "\n";
    insertionSort(a, n);

    for (int i = 0; i<n; i++){
        cout << a[i];
    }
};

void insertionSort(int a[], int n)
{
    int temp,j;
    for (int i = 1; i < n;i++){
        if(i==1 && a[i]<a[i-1]){
            swap(a, i, i - 1);
        }
        if(i!=1 && a[i]<a[i-1]){
            
            j = i;
            temp = a[j];
            while (j >= 1 && a[j-1]>temp){
                a[j] = a[j - 1];
                j--;
            };
            a[j] = temp;
        }else{
            continue;
        }

    }
}

void swap(int a[], int idx_a, int idx_b)
{
    int temp = a[idx_a];
    a[idx_a] = a[idx_b];
    a[idx_b] = temp;
};
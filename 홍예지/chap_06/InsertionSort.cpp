#include <iostream>
using namespace std;

void swap(int a[], int idx_a, int idx_b);
void InsertionSort(int a[], int n);

int main(){

    int a[] = {9, 5, 6, 2};
    int n = sizeof(a) / sizeof(int);

    InsertionSort(a, n);
    for (int i = 0; i < n; i++){
        cout << a[i];
    }
    cout << endl;
};

void InsertionSort(int a[], int n)
{
    int j, temp;
    for (int i = 1; i < n; i++)
    {
        temp = a[i];
        for (j = i; i > 0 && a[j - 1] > temp; j--) /*i가 0보다 크고, j-1 값이 a[i]보다 클 때,
                                                    (정렬이 제대로 되어있지 않을 때)*/
        {
            a[j] = a[j - 1];
        }
        a[j] = temp;
    }
}
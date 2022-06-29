#include <iostream>
using namespace std;

void show(int a[], int n);

void quickSort(int *data, int start, int end);

int main(){

    int a[] = {9, 1, 6, 2, 3, 7, 5, 8, 6, 4, 10};
    int n = sizeof(a) / sizeof(int);


    quickSort(a, 0, n-1);
    show(a, n);
    return 0;
};

void show(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
};

void quickSort(int *data, int start, int end){
    if(start >=end){
        return;
    };

    int key = start; // 키는 첫 번째 원소
    int i = start + 1, j = end, temp;

    while(i<=j){ // 엇갈릴 때 까지 반복
        while(i<=end && data[i]<=data[key]){
            i++;
        }
        while(j>start && data[j]>=data[key]){
            j--;
        }
        if(i>j){
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        }else{
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    quickSort(data, start, j - 1);
    quickSort(data, j + 1, end);
};
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void insertionSort(int a[], int n);
void print(int a[], int n);

int main()
{

    int a[] = {6,4,8,5,2,9,7};

    int n = sizeof(a) / sizeof(int);

    insertionSort(a, n);


    
};

void insertionSort(int a[], int n){
    int temp,idx,j;
    for (int i = 1; i < n ;i++){
        idx = i;
        if(a[i-1]>a[i]){
            print(a, n);
            temp = a[i];
            idx = i;
            while (i >= 0&& a[i-1]>temp){
                a[i] = a[i - 1];
                i--;
            };
            cout << setw(i+1) << "^" <<setw(idx-i) << setfill('-') << "+" << endl;

            a[i] = temp;
            i++;
            
        }else{
            print(a, n);
            cout << setw(idx+1) << setfill(' ')<< "+" << endl;
        }
        }
    }



void print(int a[],int n){
    for (int i = 0; i < n;i++){
        cout << a[i];
    }
    cout << "\n";
}


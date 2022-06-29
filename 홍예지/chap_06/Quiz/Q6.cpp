#include <iostream>
using namespace std;

void swap(int a[], int idx_1, int idx_2);
void SelectionSort(int a[], int n);

int main()
{

    int a[] = {6,4,8,3,1,9,7};
    int n = sizeof(a) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << "\n";
    SelectionSort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
};

void swap(int a[], int idx_a, int idx_b)
{
    int temp = a[idx_a];
    a[idx_a] = a[idx_b];
    a[idx_b] = temp;
};

void SelectionSort(int a[],int n){
    int min, temp;
    for (int i = 0; i < n-1;i++){
        min = i;
        for (int j = i + 1; j < n;j++){
            if(a[min]>a[j]){
                min = j;
            };
        }
        for (int s = 0; s < n;s++)
        {
            if(s==i){
                cout << "*";
            }else if(s==min){
                cout << "+";
            }else{
                cout << " ";
            }
        };
        cout << endl;
        for (int c = 0; c < n; c++)
        {
            cout << a[c];
        }
        cout << "\n";
        swap(a, i, min);
        
    }
}

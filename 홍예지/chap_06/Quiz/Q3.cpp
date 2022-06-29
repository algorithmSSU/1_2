#include <iostream>
using namespace std;

void swap(int a[], int idx_a, int idx_b);
void bubblesort(int a[], int n);
int main(){

    int a[] = {1,3,9,4,7,8,6};
    int n = sizeof(a) / sizeof(int);

    bubblesort(a, n);
};




void swap(int a[],int idx_a, int idx_b){
    int temp = a[idx_a];
    a[idx_a] = a[idx_b];
    a[idx_b] = temp;
};

void bubblesort(int a[], int n){
    for (int i = 0; i < n;i++){
        int chang = 0;
        for (int j = n - 1; j > 0;j--){
            if(a[j]<a[j-1]){
                for (int p = 0; p < n; p++)
                {
                    cout << a[p] << " ";
                    if(j==p){
                        cout << "+";
                    };
                }
                swap(a, j, j - 1);
                chang++;
                cout << "\n";
            }else if(a[j]>=a[j-1]){
                for (int p = 0; p < n;p++){
                    cout << a[p] << " ";
                    if(j==p){
                        cout << "-";
                    };
                }
                cout << "\n";
            }
        };
        if (chang == 0)
        {
            break;
        }
    }
}
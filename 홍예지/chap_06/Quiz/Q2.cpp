#include <iostream>
#include <iomanip>
using namespace std;


void swap(int a[], int idx_a, int idx_b);
void bubblesort(int a[], int n);

int main(){

    int arr[] = {6,4,3,7,1,9,8};
    int n = sizeof(arr) / sizeof(int);

    cout << "<base>" << endl;
    for (int i=0;i<n;i++){
        cout << arr[i];
    }

    cout << "\n";
    bubblesort(arr, n);
};

void swap(int a[], int idx_a, int idx_b){
    int temp = a[idx_a];
    a[idx_a] = a[idx_b];
    a[idx_b] = temp;
};

void bubblesort(int a[], int n){
    int compare = 0;
    int cp = 0;
    int change = 0;
    for (int i = 0; i < n-1;i++){
        cout << "pass-" << i + 1 << ":" << endl;

        for (int j = n - 1; j > 0;j--){

            if(j==n-1){
                for (int c = 0; c < n - 1;c++){
            if(a[c]>a[c+1]){
                cp = 6;
                break;
            }else if(a[c]<a[c+1]){
                cp = 1;
            }
            if(c==n-2){
                if(a[c]<a[c+1]){
                    cp = 1;
                }
            }
        };
        compare = compare +cp;
            }
            
            if(a[j]<a[j-1]){
                for (int i = 0; i < n; i++){
                    cout << a[i] << '\t';
                    if (i == j - 1)
                    {
                        cout << "+";
                    }
                };
                cout << "\n";
                change++;
                swap(a, j, j-1);
            }else if(a[j]>=a[j-1]){
                for (int i = 0; i < n;i++){
                    cout << a[i] << "\t";
                    if(i==j-1){
                        cout << "-";
                    }
                }
                cout << "\n";
            }
            
        };
        for (int f = 0; f < n; f++)
        {
            cout << a[f] << "\t";
        }

/*
    
        for (int c = 0; c < n - 1;c++){
            if(a[c]>a[c+1]){
                cp = 6;
                break;
            }else if(a[c]<a[c+1]){
                cp = 1;
            }
            if(c==n-2){
                if(a[c]<a[c+1]){
                    cp = 1;
                }
            }
        };
        cout << cp;
        compare = compare +cp;*/

        cout << "\n";
    };




    cout << "compare count: " << compare << endl;
    cout << "change count: " << change << endl;
}
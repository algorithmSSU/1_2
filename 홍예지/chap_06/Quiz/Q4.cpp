#include <iostream>
using namespace std;

void swap(int a[], int idx_a, int idx_b);
void bubblesort(int a[], int n);

int main(){

    int a[] = {1, 3, 9, 4, 7, 8, 6};
    int n = sizeof(a) / sizeof(int);

    bubblesort(a, n);
};




void swap(int a[], int idx_a, int idx_b){
    int temp;
    temp = a[idx_a];
    a[idx_a] = a[idx_b];
    a[idx_b] = temp;
}



void bubblesort(int a[], int n){

    int last;
    int num = n;
    int count = 0;
    int compare = 0;
    int exch = 0;
    int end = n;
    int check = 0;
    while(check!=n-1){
    for (int i = 0; i < n;i++){
        if(check==n-1){
            break;
        }
        cout << "pass : " << i + 1 << endl;
        cout << "\n";
        for (int j = n - 1; j > check;j--){
            for(int v=0; v<n-2; v++){
                if(a[v]>a[v+1]){
                    compare++;
                }
            }
            if(a[j]<a[j-1]){
                for (int k = 0; k < end; k++)
                {
                    if (j == k)
                    {
                        cout << "+";
                    }
                    cout << a[k];
                }
                cout << "\n";
                swap(a, j, j - 1);


            }else if(a[j]>=a[j-1]){
                exch++;
                for (int k = 0; k < end; k++)
                {
                    if(j==k){
                        cout << "-";
                    }
                    cout << a[k];
                }
                cout << "\n";
            }
        };

        for (int f = 0; f < end; f++)
        {
            cout << a[f];
        }
        cout << "\n";
        cout << "\n";

        for (int c = 0; c < n-1;c++){
            if(a[c]<a[c+1]){
                last = c+1;
            }else if(a[c]>=a[c+1]){
                last = c;
                break;
            }
        };
        
        check = last;

        if(check==n+1){
            break;
        }
    }
    }
    cout << "compare: " << compare << endl;

    cout << "exchange: " << exch << endl;
        
}
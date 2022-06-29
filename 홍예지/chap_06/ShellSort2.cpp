#include <iostream>
using namespace std;

void ShellSort(int a[], int n);

int main(){

    int a[] = {6, 4, 3, 7, 1, 9, 8};
    int n = sizeof(a) / sizeof(int);

    ShellSort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << "\n";
};

void ShellSort(int a[], int n)
{
    int h;
    for (h = 1; h < n; h=h*3+1){
    };
    for (; h > 0;h/=3){
        for (int i = h; i < n;i++){
            int j;
            int tmp = a[i];
            for (j = i - h; j >= 0 && a[j] > tmp; j-=h){
                a[j + h] = a[j];
            }
            a[j+h] = tmp;
        }
    }
}

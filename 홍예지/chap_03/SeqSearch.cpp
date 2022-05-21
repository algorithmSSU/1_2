#include <iostream>
using namespace std;

int main(){

    int num;
    int find;

    cout << "요솟수: ";
    cin >> num;

    int* arr = new int[num];

    for (int i = 0; i < num;i++){
        cout << "x[" << i << "]: ";
        cin >> arr[i];
    };

    cout << "검색할 값: ";
    cin >> find;

    
    for (int j = 0; j < _msize(arr) / sizeof(int);j++){
        if (arr[j]==find){
            cout << "그 값은 x[" << j << "]에 있습니다." << endl;
        };
    };
}

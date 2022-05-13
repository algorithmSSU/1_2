#include <iostream>
using namespace std;
// 배열 요소에 값을 읽어 들여 역순으로 정렬

void revers_array(int *arr);

int main(){

    int *arr = new int[3];
    arr[0] = 4;
    arr[1] = 8;
    arr[2] = 1;

    cout << "<before>" << endl;
    cout << "arr = [";

    for (int i = 0; i < _msize(arr) / sizeof(int);i++){
        if (i < _msize(arr) / sizeof(int)-1){
            cout << arr[i] << ",";
        }else{
            cout << arr[i] << "]" << endl;
        }
            
    }

    cout << "<after>" << endl;
    revers_array(arr);
}

void revers_array(int *arr){
    
    cout << "arr = [";

    int start = _msize(arr) / sizeof(int) - 1;
    for (int i = start; i >= 0; i--)
    {
        if (i>0){
            cout << arr[i] << ",";
        }else{
            cout << arr[i] << "}";
        }
    }
};
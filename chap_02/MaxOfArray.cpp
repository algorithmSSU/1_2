#include <iostream>
using namespace std;
// 배열 요소의 최댓값을 출력(값을 입력받음)

int maxOf(int *a);

int main(){

    int person;

    cout << "키의 최댓값을 구합니다" << endl;

    cout << "사람수 :";
    cin >> person;

    int *height = new int[person];

    for (int i = 0; i < _msize(height) / sizeof(int);i++){
        cout << "height[" << i << "]: ";
        cin >> height[i];
    }

    cout <<"최대값은 :" << maxOf(height) << endl;
}

int maxOf(int *a){
    int max;
    max = a[0];
    for (int i = 1; i < _msize(a) / sizeof(int);i++){
        if (a[i]>max){
            max = a[i];
        }
    }
    return max;
}
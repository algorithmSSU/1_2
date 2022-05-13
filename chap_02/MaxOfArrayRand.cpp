#include <iostream>
#include <random>
using namespace std;
// 배열 요소의 최댓값을 출력(값을 난수로 생성)

int MaxOf(int *arr);

int main(){

    int person;

    cout << "키의 최댓값을 구합니다" << endl;

    cout << "사람수 :";
    cin >> person;

    int *height = new int[person];

    cout << "키 값은 다음과 같습니다." << endl;

    for (int i = 0; i < _msize(height) / sizeof(int);i++){
        height[i] = 100 + rand() % 90;

    }

    for (int j = 0; j < _msize(height) / sizeof(int);j++){
        cout << "height["<< j << "]: "<< height[j] << endl;
    }

    cout << "최대값은 " << MaxOf(height) << " 입니다." << endl;
}

int MaxOf(int *arr){
    int max = arr[0];

    for (int i = 1; i < _msize(arr) / sizeof(int);i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
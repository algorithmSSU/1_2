#include <iostream>
using namespace std;

//구성 요소의 자료혀이 int형인 배열(구성 요솟수는 5: new에 의해 본체를 생성)

int main(){

    int *a = new int[5];
    a[1] = 37;
    a[2] = 51;
    a[4] = a[1] * 2;

    for (int i = 0; i< _msize(a)/sizeof(int);i++){
        cout << "a[" << i << "] = " << a[i] << endl;
    };
}


// 동적할당 array 크기 확인할 때는 _msize(a)/sizeof(int)
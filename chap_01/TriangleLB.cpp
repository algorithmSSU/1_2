#include <iostream>
using namespace std;

// 왼쪽 아래가 직각인 이등변삼각형을 출력
int main(){

    int h;

    cout << "왼쪽 아래가 직각인 이등변삼각형을 출력" << endl;

    do{
        cout << "몇 단 삼각형입니까? :";
        cin >> h;

    } while (h <= 0);

    for (int i = 1; i <= h; i++){
        for (int j = 0; j < i;j++){
            cout << "*";
        };
        cout << "\n";
    }
}


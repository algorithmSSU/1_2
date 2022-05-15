#include <iostream>
using namespace std;
// 이중 루프로 구구단 곱셈표 출력
int main(){

    cout << "-----구구단 곱셈표-----" << endl;

    for (int i = 1; i <= 9;i++){
        for (int j = 1; j <= 9; j++){
            cout << i*j << " ";
        };
        cout << "\n";

    }
}
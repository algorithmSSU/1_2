#include <iostream>
using namespace std;

int facto(int x);

int main(){

    int num;
    cout << "정수를 입력하세요: ";
    cin >> num;
    cout << num << "의 팩토리얼은 " << facto(num) << "입니다." << endl;
}

int facto(int x){
    int result = 1;
    while (x>0){
        result = result * x;
        x--;};
    return result;
}
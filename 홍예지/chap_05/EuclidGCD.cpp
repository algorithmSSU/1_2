#include <iostream>
using namespace std;

int gcd(int x, int y);

int main(){

    // int num, num2;
    // num = 5;
    // num2 = 21;

    // // 0%21
    // // 21%0

    // cout << "5/21= " << num / num2 << endl;
    // cout << "21/5= "<< num2 / num << endl;

    int first, second;

    cout << "두 정수의 최대공약수를 구합니다." << endl;

    cout << "정수를 입력하세요: ";

    cin >> first;

    cout << "정수를 입력하세요: ";

    cin >> second;

    cout << "최대공약수는 " << gcd(first, second) << "입니다." << endl;
}

int gcd(int x,int y){
    if (y==0){
        return x;
    }else{
        return gcd(y, x % y); // if x==0 이면, 0%1 = 1
    }
}
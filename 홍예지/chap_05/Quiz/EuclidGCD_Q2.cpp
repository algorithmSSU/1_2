#include <iostream>
using namespace std;

int gcd(int x, int y);

int main(){

    int a, b;
    cin >> a >> b;

    cout << "gcd : " << gcd(a, b) << endl;
}

int gcd(int x, int y){
    int tmp;

    if (x<y){
        tmp = y;
        y = x;
        x = tmp;
    };

    while(y!=0){
        tmp = x % y;
        x = y;
        y = tmp;
    }
    return x;
};

// 큰수 % 작은수 = 나머지
// 작은수 % 나머지 == 0 이 될 때 까지 작은수를 나머지로 나누어줌
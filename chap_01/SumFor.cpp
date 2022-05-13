#include <iostream>
using namespace std;
//for문으로 1,2,...n 까지의 합을 구함
int main(){

    int n;

    cout << "Sum from 1 to n." << endl;
    cout << "enter n :";
    cin >> n;

    int sum = 0;
    for (int i = 0; i <= n; i++){
        sum += i;
    };
    cout << "The sum of 1 to " << n << " is " << sum << endl;
};
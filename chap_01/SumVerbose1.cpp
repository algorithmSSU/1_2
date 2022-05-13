#include <iostream>
using namespace std;
// 1,2,...n의 합과 그 값을 구하는 과정을 출력
int main(){
    int n;
    cout << "Sum from 1 to n." << endl;
    

    do{
        cout << "enter n : ";
        cin >> n;
    } while (n <= 0);

    int sum = 0;

    for (int i = 1; i < n; i++){
        sum += i;
        cout << i << "+";
    }

    cout << n << "=";
    sum += n;
    cout << sum;
}
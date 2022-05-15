#include <iostream>
using namespace std;
// 양수만 입력하여 1,2,...n의 합을 구함
int main(){
    int n;
    cout << "Sum from 1 to n." << endl;

    do{
        cout << "enter n: ";
        cin >> n;
    } while (n <= 0);

    int sum;
    for (int i = 0; i <= n; i++){
        sum += i;
    }

    cout << "result: " << sum << endl;
}
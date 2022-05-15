#include <iostream>
using namespace std;


int main(){

    double arr[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

    cout.setf(ios::fixed);
    cout.precision(1);

    double sum = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(double); i++){
        cout << "arr[" << i << "]=" << arr[i] << endl;
        sum += arr[i];
    };

    cout << "모든 요소의 합은 " << sum << " 입니다." << endl;
}
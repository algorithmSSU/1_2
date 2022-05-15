#include <iostream>
using namespace std;

int main()
{

    int a, b, c, max;

    cout << "세 정수의 최대값을 구합니다." << endl;
    cout << "a의 값:";
    cin >> a;
    cout << "b의 값:";
    cin >> b;
    cout << "c의 값:";
    cin >> c;

    max = a;
    if (b > max)
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }

    cout << "최대값은" << max << "입니다.";
}
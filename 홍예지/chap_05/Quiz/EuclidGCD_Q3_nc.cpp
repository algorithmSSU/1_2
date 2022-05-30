#include <iostream>
using namespace std;

int gcd_array(int*a, int num);

int main()
{
    const int freq = 5;
    int arr[freq];
    int *ptr = arr;
    cout << "5개의 숫자를 입력하세요: ";
    cin >> arr[0] >> arr[1];

    cout << gcd_array(ptr, freq) << endl;
}

int gcd_array(int*a, int n)
{

    // code
}

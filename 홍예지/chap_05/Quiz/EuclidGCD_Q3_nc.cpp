#include <iostream>
using namespace std;

int gcd_array(int*a, int num);

int main()
{
    const int freq = 5;
    int arr[freq];
    int *ptr = arr;
    cout << "5���� ���ڸ� �Է��ϼ���: ";
    cin >> arr[0] >> arr[1];

    cout << gcd_array(ptr, freq) << endl;
}

int gcd_array(int*a, int n)
{

    // code
}

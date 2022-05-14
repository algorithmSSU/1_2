#include <iostream>
using namespace std;
// while 문으로 1,2,...,n의 합을 구함.

int main()
{

    int n;
    cout << "Find the sum of numbers 1 through n." << endl;
    cout << "enter n :";
    cin >> n;

    int sum = 0;
    int i = 1;

    while (i <= n)
    {
        sum += i;
        i++;
    };

    cout << "The sum of 1 to n is " << sum;
}

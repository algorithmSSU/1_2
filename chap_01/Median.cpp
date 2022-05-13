#include <iostream>
using namespace std;
// 3개의 정수 값을 입력하고 중앙값을 구하여 출력

int Median(int a, int b, int c);
int main()
{

    int a, b, c;

    cout << "Enter a,b,c in that order." << endl;

    cin >> a >> b >> c;
    cout << Median(a, b, c);
}

int Median(int a, int b, int c)
{
    int median;

    if (a >= b)
    {
        if (c >= a)
        {
            median = a;
        }
        else
        {
            if (b > c)
            {
                median = b;
            }
            else
            {
                median = c;
            }
        };
    }
    else if (b > a)
    {
        if (c > b)
        {
            median = b;
        }
        else
        {
            if (a > c)
            {
                median = a;
            }
            else
            {
                median = c;
            };
        };
    };
    return median;
};
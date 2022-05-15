#include <iostream>
using namespace std;

void judge(double a);

int main()
{

    double a = -5;
    judge(a);
};

void judge(double a)
{
    if (a > 0)
    {
        cout << "This number is positive." << endl;
    };
    if (a < 0)
    {
        cout << "This number is negative." << endl;
    };
    if (a == 0)
    {
        cout << "This number is 0." << endl;
    }
};
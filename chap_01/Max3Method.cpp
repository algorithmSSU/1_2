#include <iostream>
using namespace std;

int Max3Method(int a, int b, int c); // function declaration

int main()
{

    int a, b, c;
    a = 9;
    b = 1;
    c = 3;

    cout << Max3Method(a, b, c);
}

int Max3Method(int a, int b, int c)
{ // function definition
    int max;
    max = a;

    if (max < b)
    {
        max = b;
    };

    if (max < c)
    {
        max = c;
    };

    return max;
};

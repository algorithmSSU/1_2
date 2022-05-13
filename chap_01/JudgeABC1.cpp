#include <iostream>
using namespace std;

char judge(int n);
char judge_2(int n);
char judge_2x(int n);

int main()
{
    int n;
    cout << "Enter an integer : ";
    cin >> n;

    cout << judge_2(n) << endl;
    return 0;
}

char judge(int n)
{
    if (n == 1)
    {
        return 'A';
    }
    else if (n == 2)
    {
        return 'B';
    }
    else
    {
        return 'C';
    };
};

char judge_2(int n)
{
    if (n == 1)
    {
        return 'A';
    }
    else if (n == 2)
    {
        return 'B';
    }
    else if (n == 3)
    {
        return 'C';
    }
    else
    {
        return 0;
    };
};

char judge_2x(int n)
{
    if (n == 1)
    {
        return 'A';
    }
    else if (n == 2)
    {
        return 'B';
    }
    else if (n == 3)
    {
        return 'C';
    }
    else
    {
        return ' ';
    };
};

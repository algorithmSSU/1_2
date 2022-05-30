#include <iostream>
using namespace std;

void hanoi(int n, char from, char temp, char to);

int main()
{

    hanoi(3, 'A', 'B', 'C');

    // code
}

void hanoi(int n, char from, char temp, char to)
{
    if (n == 1)
    {
        cout << "원판 1을 " << from << "에서" << to << "로 옮긴다." << endl;
    }
    else
    {
        hanoi(n - 1, from, to, temp); // from 에서 to를 이용해서 temp로 옮긴다.
        cout << "원판" << n << "을 " << from << "에서" << to << "로 옮긴다." << endl;
        hanoi(n - 1, temp, from, to); // temp에서 from을 이용해서 to로 옮긴다.
    }
}
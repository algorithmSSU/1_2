#include <iostream>
using namespace std;

void hanoi(int n, int from, int temp, int to);

int main()
{

    hanoi(3, 1, 2, 3);

    // code
}

void hanoi(int n, int from, int temp, int to)
{
    if (n == 1)
    {
        cout << "원판 [1]을(를) " << from << "번 기둥에서" << to << "번 기둥으로 옮긴다." << endl;
    }
    else
    {
        hanoi(n - 1, from, to, temp); // from 에서 to를 이용해서 temp로 옮긴다.
        cout << "원판[" << n << "]을(를) " << from << "번 기둥에서" << to << "번 기둥으로 옮긴다." << endl;
        hanoi(n - 1, temp, from, to); // temp에서 from을 이용해서 to로 옮긴다.
    }
}
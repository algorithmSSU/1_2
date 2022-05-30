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
        cout << "���� 1�� " << from << "����" << to << "�� �ű��." << endl;
    }
    else
    {
        hanoi(n - 1, from, to, temp); // from ���� to�� �̿��ؼ� temp�� �ű��.
        cout << "����" << n << "�� " << from << "����" << to << "�� �ű��." << endl;
        hanoi(n - 1, temp, from, to); // temp���� from�� �̿��ؼ� to�� �ű��.
    }
}
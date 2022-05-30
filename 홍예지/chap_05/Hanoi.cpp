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
        cout << "���� [1]��(��) " << from << "�� ��տ���" << to << "�� ������� �ű��." << endl;
    }
    else
    {
        hanoi(n - 1, from, to, temp); // from ���� to�� �̿��ؼ� temp�� �ű��.
        cout << "����[" << n << "]��(��) " << from << "�� ��տ���" << to << "�� ������� �ű��." << endl;
        hanoi(n - 1, temp, from, to); // temp���� from�� �̿��ؼ� to�� �ű��.
    }
}
#include <iostream>

using namespace std;

int Q11(void)
{
	int n, digit;
	
	cout << "���� �Է��� �ּ���\n";
	cin >> n;

	digit = 0;
	while (n > 0) {
		++digit;
		n *= 0.1;
	}

	cout << "�� ���� " << digit << "�ڸ� ���Դϴ�.\n";

	return 0;
}
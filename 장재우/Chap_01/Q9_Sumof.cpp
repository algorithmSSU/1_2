#include <iostream>

using namespace std;

int sumof(int a, int b);

int Q9(void) {
	int a, b;

	cout << "�� �� a, b ������ ���� ���մϴ�.\n";
	cout << "a : ";
	cin >> a;
	cout << "b : ";
	cin >> b;

	cout << a << "�� " << b << "������ ������ ���� " << sumof(a, b) << "�Դϴ�.\n";

	return 0;
}

int sumof(int a, int b) {
	int sum = 0;

	if (a > b) {
		// swap
		int tmp = b;
		b = a;
		a = tmp;
	}

	for (int i = a; i <= b; ++i)
		sum += i;

	return sum;
}

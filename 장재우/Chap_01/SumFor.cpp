#include <iostream>

using namespace std;

int sumFor(void) {
	int n, sum;

	cout << "1���� n������ ���� ���մϴ�.\n";
	cout << "n�� �� : ";
	cin >> n;

	sum = 0;

	for (int i = 1; i <= n; ++i)
		sum += i;

	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�.\n";

	return 0;
}
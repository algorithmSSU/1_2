#include <iostream>

using namespace std;

int sumForPos(void) {
	int n, sum;

	cout << "1���� n������ ���� ���մϴ�.\n";

	do {
		cout << "n�� �� : ";
		cin >> n;
	} while (n <= 0);

	sum = 0;

	for (int i = 1; i <= n; ++i)
		sum += i;

	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�.\n";

	return 0;
}
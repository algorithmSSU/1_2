#include <iostream>

using namespace std;

int Q7(void) {
	int n, sum;

	cout << "1���� n������ ���� ���մϴ�.\n";
	cout << "n�� �� : ";
	cin >> n;

	sum = 0;

	for (int i = 1; i <= n; ++i)
		sum += i;

	for (int i = 1; i < n; ++i)
		cout << i << " + ";
	cout << n << " = " << sum;

	return 0;
}
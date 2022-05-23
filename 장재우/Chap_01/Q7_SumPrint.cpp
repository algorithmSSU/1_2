#include <iostream>

using namespace std;

int Q7(void) {
	int n, sum;

	cout << "1부터 n까지의 합을 구합니다.\n";
	cout << "n의 값 : ";
	cin >> n;

	sum = 0;

	for (int i = 1; i <= n; ++i)
		sum += i;

	for (int i = 1; i < n; ++i)
		cout << i << " + ";
	cout << n << " = " << sum;

	return 0;
}
#include <iostream>

using namespace std;

int sumWhile(void) {
	int n, sum;
	
	cout << "1부터 n까지의 합을 구합니다.\n";
	cout << "n의 값 : ";
	cin >> n;

	sum = 0;
	int i = 1;

	while (i <= n) {
		sum += i;
		++i;
	}

	cout << "1부터 " << n << "까지의 합은 " << sum << "입니다.\n";

	return 0;
}
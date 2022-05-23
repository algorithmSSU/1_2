#include <iostream>

using namespace std;

int Q6(void) {
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
	cout << "while문 종료 후 변수 i의 값은 " << i << "입니다.\n";

	cout << "1부터 " << n << "까지의 합은 " << sum << "입니다.\n";

	return 0;
}
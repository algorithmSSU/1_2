#include <iostream>

using namespace std;

int sumof(int a, int b);

int Q9(void) {
	int a, b;

	cout << "두 수 a, b 사이의 합을 구합니다.\n";
	cout << "a : ";
	cin >> a;
	cout << "b : ";
	cin >> b;

	cout << a << "와 " << b << "사이의 정수의 합은 " << sumof(a, b) << "입니다.\n";

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

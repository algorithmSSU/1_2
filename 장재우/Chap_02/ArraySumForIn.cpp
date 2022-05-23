#include <iostream>

using namespace std;

int arraySumForIn(void) {
	double a[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	int aLen = sizeof(a) / sizeof(double);

	for (int i = 0; i < aLen; ++i)
		cout << "a[" << i << "] = " << (double)a[i] << "\n";

	double sum = 0;

	for (int i : a)
		sum += i;

	cout << "모든 요소의 합은 " << sum << "입니다.\n";

	return 0;
}
#include <iostream>

using namespace std;

int max3m(void);
int max3(int a, int b, int c);

int max3m(void) {
	cout << "max3(3, 2, 1) = " << max3(3, 2, 1) << "\n";
	cout << "max3(3, 2, 2) = " << max3(3, 2, 2) << "\n";
	cout << "max3(3, 1, 2) = " << max3(3, 1, 2) << "\n";
	cout << "max3(3, 2, 3) = " << max3(3, 2, 3) << "\n";
	cout << "max3(2, 1, 3) = " << max3(2, 1, 3) << "\n";
	cout << "max3(3, 3, 2) = " << max3(3, 3, 2) << "\n";
	cout << "max3(3, 3, 3) = " << max3(3, 3, 3) << "\n";
	cout << "max3(2, 2, 3) = " << max3(2, 2, 3) << "\n";
	cout << "max3(2, 3, 1) = " << max3(2, 3, 1) << "\n";
	cout << "max3(2, 3, 2) = " << max3(2, 3, 2) << "\n";
	cout << "max3(1, 3, 2) = " << max3(1, 3, 2) << "\n";
	cout << "max3(2, 3, 3) = " << max3(2, 3, 3) << "\n";
	cout << "max3(1, 2, 3) = " << max3(1, 2, 3) << "\n";

	return 0;
}

int max3(int a, int b, int c) {
	int max = a;

	if (b > max)
		max = b;
	if (c > max)
		max = c;

	return max;
}
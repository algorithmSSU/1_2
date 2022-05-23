#include <iostream>

using namespace std;

extern int med3(int a, int b, int c);

int Q4(void) {
	cout << "med3(3, 2, 1) = " << med3(3, 2, 1) << "\n";
	cout << "med3(3, 2, 2) = " << med3(3, 2, 2) << "\n";
	cout << "med3(3, 1, 2) = " << med3(3, 1, 2) << "\n";
	cout << "med3(3, 2, 3) = " << med3(3, 2, 3) << "\n";
	cout << "med3(2, 1, 3) = " << med3(2, 1, 3) << "\n";
	cout << "med3(3, 3, 2) = " << med3(3, 3, 2) << "\n";
	cout << "med3(3, 3, 3) = " << med3(3, 3, 3) << "\n";
	cout << "med3(2, 2, 3) = " << med3(2, 2, 3) << "\n";
	cout << "med3(2, 3, 1) = " << med3(2, 3, 1) << "\n";
	cout << "med3(2, 3, 2) = " << med3(2, 3, 2) << "\n";
	cout << "med3(1, 3, 2) = " << med3(1, 3, 2) << "\n";
	cout << "med3(2, 3, 3) = " << med3(2, 3, 3) << "\n";
	cout << "med3(1, 2, 3) = " << med3(1, 2, 3) << "\n";

	return 1;
}
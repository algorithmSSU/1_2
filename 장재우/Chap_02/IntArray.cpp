#include <iostream>

using namespace std;

#define LEN 5

int intArray(void) {
	int a[5] = { 0 };

	a[1] = 37;
	a[2] = 51;
	a[4] = a[1] * 2;
	
	for (int i = 0; i < LEN; ++i)
		cout << "a[" << i << "] = " << a[i] << "\n";

	return 0;
}
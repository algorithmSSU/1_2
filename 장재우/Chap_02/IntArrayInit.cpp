#include <iostream>

using namespace std;

int intArrayInit(void) {
	int a[] = { 1, 2, 3, 4, 5 };
	int len = sizeof(a) / sizeof(int);

	for (int i = 0; i < len; ++i)
		cout << "a[" << i << "] = " << a[i] << "\n";
		
	return 0;
}
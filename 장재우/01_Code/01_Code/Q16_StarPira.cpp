#include <iostream>

using namespace std;

int Q16(void) {
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		for (int j = 1; j < n - i; ++j)
			cout << " ";
		for (int j = 0; j < 1 + 2 * i; ++j)
			cout << "*";
		cout << "\n";
	}

	return 1;
}
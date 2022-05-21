#include <iostream>

using namespace std;

int multi99Table(void) {
	cout << "----- °ö¼ÀÇ¥ -----\n";

	for (int i = 1; i <= 9; ++i) {
		for (int j = 1; j <= 9; ++j)
			printf("%3d", i * j);
		cout << "\n";
	}

	return 0;
}
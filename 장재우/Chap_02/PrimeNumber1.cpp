#include <iostream>

using namespace std;

int primeNumber1(void) {
	int counter = 0;

	for (int n = 2; n <= 1000; ++n) {
		int i;
		for (i = 2; i < n; ++i) {
			++counter;
			if (n % i == 0)
				break;
		}
		if (n == i)
			cout << n << "\n";
	}

	cout << "³ª´°¼ÀÀ» ¼öÇàÇÑ È½¼ö : " << counter;

	return 0;
}
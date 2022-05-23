#include <iostream>

using namespace std;

int primeNumber2(void) {
	int counter = 0;
	int ptr = 0;
	int prime[500];

	prime[ptr++] = 2;

	for (int n = 3; n <= 1000; n += 2) {
		int i;
		for (i = 1; i < ptr; ++i) {
			counter++;
			if (n % prime[i] == 0)
				break;
		}

		if (ptr == i)
			prime[ptr++] = n;
	}


	for (int i = 0; i < ptr; ++i)
		cout << prime[i] << "\n";

	cout << "³ª´°¼ÀÀ» ¼öÇàÇÑ È½¼ö : " << counter << "\n";

	return 0;
}
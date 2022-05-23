#include <iostream>

using namespace std;

int primeNumber3(void) {
	int counter = 0;
	int ptr = 0;
	int prime[50];

	prime[ptr++] = 2;
	prime[ptr++] = 3;

	for (int n = 5; n <= 1000; n += 2) {
		bool flag = false;
		for (int i = 0; prime[i] * prime[i] <= n; ++i) {
			counter += 2;
			if (n % prime[i] == 0) {
				flag = true;
				break;
			}
		}

		if (!flag) {
			prime[ptr++] = n;
			counter++;
		}
	}

	for (int i = 0; i < ptr; ++i)
		cout << prime[i] << "\n";

	cout << "°ö¼À°ú ³ª´°¼ÀÀ» ¼öÇàÇÑ È½¼ö : " << counter << "\n";

	return 0;
}
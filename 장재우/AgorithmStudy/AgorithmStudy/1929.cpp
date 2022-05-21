#include <iostream>

using namespace std;

bool* getEratos(int max);

int problem1929(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n;

	cin >> m >> n;
	
	// 에라토스의 체를 이용한 소수 배열
	bool* primeNumArr = getEratos(n);

	// 출력부
	for (int i = m; i <= n; ++i)
		if (primeNumArr[i])
			cout << i << "\n";

	delete primeNumArr;

	return 0;
}

bool* getEratos(int max) {
	bool* primeNumArr = new bool[max + 1];

	// max + 1사이즈의 배열 필요
	// 공간 max + 1 만큼 소요
	for (int i = 0; i <= max; ++i)
		primeNumArr[i] = true;

	primeNumArr[0] = false;
	primeNumArr[1] = false;

	for (int i = 2; i <= max; ++i) {
		if (primeNumArr[i] == true) {
			// 해당 수가 소수 이면 배수는 모두 소수 가 아닌
			// 따라서 해당 수들은 false 처리
			// 이때 i * i에서 int overflow 발생
			// 그러한 이유로 i < 46349 의 조건이 생겨난 것.
			for (int j = i * i; i < 46349 && j <= max; j += i)
				primeNumArr[j] = false;
		}
	}

	return primeNumArr;
}

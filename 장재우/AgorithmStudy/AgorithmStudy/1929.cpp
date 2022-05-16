#include <iostream>

using namespace std;

bool* getEratos(int max);

int problem1929(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n;

	cin >> m >> n;
	
	// �����佺�� ü�� �̿��� �Ҽ� �迭
	bool* primeNumArr = getEratos(n);

	// ��º�
	for (int i = m; i <= n; ++i)
		if (primeNumArr[i])
			cout << i << "\n";

	delete primeNumArr;

	return 0;
}

bool* getEratos(int max) {
	bool* primeNumArr = new bool[max + 1];

	// max + 1�������� �迭 �ʿ�
	// ���� max + 1 ��ŭ �ҿ�
	for (int i = 0; i <= max; ++i)
		primeNumArr[i] = true;

	primeNumArr[0] = false;
	primeNumArr[1] = false;

	for (int i = 2; i <= max; ++i) {
		if (primeNumArr[i] == true) {
			// �ش� ���� �Ҽ� �̸� ����� ��� �Ҽ� �� �ƴ�
			// ���� �ش� ������ false ó��
			// �̶� i * i���� int overflow �߻�
			// �׷��� ������ i < 46349 �� ������ ���ܳ� ��.
			for (int j = i * i; i < 46349 && j <= max; j += i)
				primeNumArr[j] = false;
		}
	}

	return primeNumArr;
}

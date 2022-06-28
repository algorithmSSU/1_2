#include <iostream>
#include <cmath>

using namespace std;

int getCnt(int n);

int problem1052() {
	int n, k;

	cin >> n >> k;

	int cnt = getCnt(n);
	int buy = 0;

	while (cnt > k) {
		++buy;
		cnt = getCnt(n + buy);
	}

	cout << buy;

	return 0;
}

int getCnt(int n) {
	int cnt = 0;
	while (n > 0) {
		if (n % 2 != 0)
			++cnt;
		n *= 0.5f;
	}

	return cnt;
}

/*
#include <iostream>
#include <cmath>

using namespace std;

int getBinaryLen(int n);
void getBinary(int num, int* arr, int len);
int getCnt(int* arr, int len);
int nextBinary(int* arr, int len);

int problem1052() {
	int n, k;

	cin >> n >> k;

	int len = getBinaryLen(n);
	int* binary = new int[len + 1];

	getBinary(n, binary, len);
	int cnt = getCnt(binary, len);

	int buy = 0;

	while (cnt > k) {
		int tmp = nextBinary(binary, len);
		if (tmp < 0)
			break;

		buy += tmp;
		getBinary(n + buy, binary, len);
		cnt = getCnt(binary, len);
	}

	if (cnt < 0)
		cout << -1;
	else
		cout << buy;

	delete[] binary;

	return 0;
}

int getBinaryLen(int n) {
	int len = 0;

	while (n > 0) {
		n *= 0.5f;
		++len;
	}

	return len;
}

void getBinary(int num, int* arr, int len) {
	for (int i = 0; i < len; ++i) {
		arr[i] = num % 2;
		num *= 0.5f;
	}
}

int getCnt(int* arr, int len) {
	int cnt = 0;
	for (int i = 0; i < len; ++i)
		cnt += arr[i];
	
	return cnt;
}

int nextBinary(int* arr, int len) {
	int i;
	for (i = 0; i < len; ++i)
		if (arr[i] != 0)
			break;
	
	if (i == len)
		return -1;

	return arr[i];
}
*/
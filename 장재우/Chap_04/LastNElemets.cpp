#include <iostream>
#include "TRotationQueue.h"

using namespace std;

#define N 10

int lastNElements(void) {
	int a[10] = { 0 };
	int cnt = 0;
	int retry = 0;

	cout << "정수를 입력하세요.";

	do {
		cout << cnt + 1 << "번째 정수 : ";
		cin >> a[cnt++ % N];

		cout << "계속 할까요? (예.1/아니요.2) : ";
		cin >> retry;
	} while (retry == 1);

	int i = cnt - N;
	if (i < 0) i = 0;

	for (; i < cnt; ++i)
		cout << i + 1 << "번째의 정수 = " << a[i % N] << "\n";

	return 0;
}
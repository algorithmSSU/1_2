#include <iostream>
#include "TRotationQueue.h"

using namespace std;

#define N 10

int lastNElements(void) {
	int a[10] = { 0 };
	int cnt = 0;
	int retry = 0;

	cout << "������ �Է��ϼ���.";

	do {
		cout << cnt + 1 << "��° ���� : ";
		cin >> a[cnt++ % N];

		cout << "��� �ұ��? (��.1/�ƴϿ�.2) : ";
		cin >> retry;
	} while (retry == 1);

	int i = cnt - N;
	if (i < 0) i = 0;

	for (; i < cnt; ++i)
		cout << i + 1 << "��°�� ���� = " << a[i % N] << "\n";

	return 0;
}
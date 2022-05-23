#include <iostream>

using namespace std;

int binSearchX(int* a, int n, int key);

int Q5(void) {
	int num;
	int ky;

	cout << "��ڼ� : ";
	cin >> num;

	int* x = new int[num];

	for (int i = 0; i < num; ++i) {
		do {
			cout << "x[" << i << "] : ";
			cin >> x[i];
		} while (x[i] < x[i - 1]);
	}

	cout << "�˻��� �� : ";
	cin >> ky;

	int idx = binSearchX(x, num, ky);

	if (idx == -1)
		cout << "�� ���� ��Ұ� �����ϴ�.\n";
	else
		cout << ky << "��(��) x[" << idx << "]�� �ֽ��ϴ�\n";

	delete[] x;

	return 0;

	return 0;
}

int binSearchX(int* a, int n, int key) {
	int pl = 0;
	int pr = n - 1;
	int pc;
	do {
		pc = (pl + pr) / 2;
		if (a[pc] == key)
			break;
		else if (a[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);

	if (a[pc] == key) {
		while (a[pc - 1] == key)
			--pc;

		return pc;
	}

	return -1;
}
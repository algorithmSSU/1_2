#include <iostream>

using namespace std;

int binarySearch(int* arr, int n, int key);

int binSearch(void) {
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

	int idx = binarySearch(x, num, ky);

	if (idx == -1)
		cout << "�� ���� ��Ұ� �����ϴ�.\n";
	else
		cout << ky << "��(��) x[" << idx << "]�� �ֽ��ϴ�\n";

	delete[] x;

	return 0;

}

int binarySearch(int* arr, int n, int key) {
	int pl = 0;
	int pr = n - 1;

	do {
		int pc = (pl + pr) / 2;
		if (arr[pc] == key)
			return pc;
		else if (arr[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);

	return -1;
}

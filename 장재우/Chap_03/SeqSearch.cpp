#include <iostream>

using namespace std;

int sequentialSearch(int* arr, int n, int key);

int seqSearch(void) {
	int num;
	int ky;

	cout << "��ڼ� : ";
	cin >> num;

	int* x = new int[num];

	for (int i = 0; i < num; ++i) {
		cout << "x[" << i << "] : ";
		cin >> x[i];
	}

	cout << "�˻��� �� : ";
	cin >> ky;

	int idx = sequentialSearch(x, num, ky);

	if (idx == -1)
		cout << "�� ���� ��Ұ� �����ϴ�.\n";
	else
		cout << ky << "��(��) x[" << idx << "]�� �ֽ��ϴ�\n";

	delete[] x;

	return 0;
}

int sequentialSearch(int* arr, int n, int key) {
	int i = 0;

	while (1) {
		if (i == n)
			return -1;
		if (arr[i] == key)
			return i;
		++i;
	}
}

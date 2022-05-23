#include <iostream>

using namespace std;

int sequentialSearchSen(int* arr, int n, int key);

int seqSearchSen(void) {
	int num;
	int ky;

	cout << "��ڼ� : ";
	cin >> num;

	int* x = new int[num + 1];

	for (int i = 0; i < num; ++i) {
		cout << "x[" << i << "] : ";
		cin >> x[i];
	}

	cout << "�˻��� �� : ";
	cin >> ky;

	int idx = sequentialSearchSen(x, num, ky);

	if (idx == -1)
		cout << "�� ���� ��Ұ� �����ϴ�.\n";
	else
		cout << ky << "��(��) x[" << idx << "]�� �ֽ��ϴ�\n";

	delete[] x;

	return 0;
}

int sequentialSearchSen(int* arr, int n, int key) {
	int i = 0;

	arr[n] = key;

	while (1) {
		if (arr[i] == key)
			break;
		++i;
	}
	return ((i == n) ? -1 : i);
}

#include <iostream>

using namespace std;

int sequentialSearchFor(int* arr, int n, int key);

int seqSearchFor(void) {
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

	int idx = sequentialSearchFor(x, num, ky);

	if (idx == -1)
		cout << "�� ���� ��Ұ� �����ϴ�.\n";
	else
		cout << ky << "��(��) x[" << idx << "]�� �ֽ��ϴ�\n";

	delete[] x;

	return 0;
}

int sequentialSearchFor(int* arr, int n, int key) {
	for (int i = 0; i < n; ++i)
		if (arr[i] == key)
			return i;

	return -1;
}

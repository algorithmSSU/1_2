#include <iostream>

using namespace std;

int sequentialSearchSenFor(int* arr, int n, int key);

int Q1(void) {
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

	int idx = sequentialSearchSenFor(x, num, ky);

	if (idx == -1)
		cout << "�� ���� ��Ұ� �����ϴ�.\n";
	else
		cout << ky << "��(��) x[" << idx << "]�� �ֽ��ϴ�\n";

	delete[] x;

	return 0;
}

int sequentialSearchSenFor(int* arr, int n, int key) {
	int i = 0;

	arr[n] = key;

	for (int i = 0; arr[i] != key; ++i);

	return ((i == n) ? -1 : i);
}

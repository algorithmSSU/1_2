#include <iostream>

using namespace std;

int sequentialSearchDetail(int* arr, int n, int key);

int Q2(void) {
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

	int idx = sequentialSearchDetail(x, num, ky);

	if (idx == -1)
		cout << "�� ���� ��Ұ� �����ϴ�.\n";
	else
		cout << ky << "��(��) x[" << idx << "]�� �ֽ��ϴ�\n";

	delete[] x;

	return 0;
}

int sequentialSearchDetail(int* arr, int n, int key) {
	int i = 0;

	arr[n] = key;

	cout << "   |";
	for (i = 0; i < n; ++i)
		printf("%3d", i);
	cout << "\n";
	
	cout << "---+";
	for (i = 0; i < n; ++i)
		cout << "---";
	cout << "\n";

	for (i = 0;; ++i) {
		cout << "   |";

		for (int j = 0; j < i; ++j)
			cout << "   ";
		cout << "  *\n";

		printf("%3d|", i);
		for (int j = 0; j < n; ++j)
			printf("%3d", arr[j]);
		cout << "\n";

		if (arr[i] == key)
			break;
	};

	return ((i == n) ? -1 : i);
}

#include <iostream>

using namespace std;

int binarySearchDetail(int* arr, int n, int key);

int Q4(void) {
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

	int idx = binarySearchDetail(x, num, ky);

	if (idx == -1)
		cout << "�� ���� ��Ұ� �����ϴ�.\n";
	else
		cout << ky << "��(��) x[" << idx << "]�� �ֽ��ϴ�\n";

	delete[] x;

	return 0;

}

int binarySearchDetail(int* arr, int n, int key) {
	int i;
	int pl = 0;
	int pr = n - 1;

	cout << "   |";
	for (i = 0; i < n; ++i)
		printf("%3d", i);
	cout << "\n";

	cout << "---+";
	for (i = 0; i < n; ++i)
		cout << "---";
	cout << "\n";


	do {
		int pc = (pl + pr) / 2;

		cout << "   |";

		for (int j = 0; j < n; ++j) {
			if (j == pl)
				cout << "<- ";
			else if (j == pr)
				cout << " ->";
			else if (j == pc)
				cout << " + ";
			else
				cout << "   ";
		}
		cout << "\n";

		printf("%3d|", i);
		for (int j = 0; j < n; ++j)
			printf("%3d", arr[j]);
		cout << "\n";


		if (arr[pc] == key)
			return pc;
		else if (arr[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);

	return -1;
}

#include <iostream>

using namespace std;

int Q6(void) {
	int num;
	int ky;

	cout << "��ڼ� : ";
	cin >> num;

	int* x = new int[num];

	cout << "������������ �Է��ϼ���. \n";

	for (int i = 0; i < num; ++i) {
		do {
			cout << "x[" << i << "] : ";
			cin >> x[i];
		} while (x[i] < x[i - 1]);
	}

	cout << "�˻��� �� : ";
	cin >> ky;

	int* idx = lower_bound(x, x + num, ky);

	if (*idx != ky)
		cout << ky << "��(��) x[" << (idx - x) << "] = " << *idx << "�� �տ� �߰� �Ǿ�� �մϴ�.\n";

	delete[] x;

	return 0;

}
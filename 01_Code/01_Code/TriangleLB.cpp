#include <iostream>

using namespace std;

int triangleLB(void) {
	int n;

	cout << "���� �Ʒ��� ������ �̵ �ﰢ���� ����մϴ�.\n";

	do {
		cout << "�� �� �ﰢ�� �Դϱ�? : ";
		cin >> n;
	} while (n <= 0);

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j)
			cout << "*";
		cout << "\n";
	}

	return 0;
}
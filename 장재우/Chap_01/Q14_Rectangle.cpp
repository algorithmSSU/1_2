#include <iostream>

using namespace std;

int Q14(void) {
	int n;
	cout << "�簢���� ����մϴ�.\n";
	
	cout << "���� �� : ";
	cin >> n;

	while (n < 1) {
		cout << "1 �̻� �ڿ����� �Է��� �ּ���\n";
		cout << "���� �� : ";
		cin >> n;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cout << "*";
		cout << "\n";
	}

	return 0;
}
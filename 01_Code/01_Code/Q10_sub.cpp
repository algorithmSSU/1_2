#include <iostream>

using namespace std;

int Q10(void) {
	int a, b;

	cout << "a�� �� : ";
	cin >> a;

	while (1) {
		cout << "b�� �� : ";
		cin >> b;
		if (b > a)
			break;
		cout << "a���� ū ���� �Է��ϼ���!\n";
	}

	cout << "b - a�� " << b - a << "�Դϴ�\n";
	
	return 0;
}
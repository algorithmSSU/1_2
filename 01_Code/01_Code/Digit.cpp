#include <iostream>

using namespace std;

int digit(void) {
	int no;
	cout << "���ڸ� ������ �Է��ϼ���.\n";

	do {
		cout << "�Է� : ";
		cin >> no;
	} while (no < 10 || no > 99);

	cout << "���� no�� ���� " << no << "��(��) �Ǿ����ϴ�.\n";

	return 0;
}
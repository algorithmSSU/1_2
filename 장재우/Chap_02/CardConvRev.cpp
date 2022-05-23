#include <iostream>

using namespace std;

int cardConvR(int x, int r, char* d);

int cardConvRev(void) {
	int no, cd, dno;
	int retry;
	char cno[32];

	cout << "10������ ����� ��ȯ�մϴ�.\n";
	do {
		do {
			cout << "��ȯ�ϴ� ���� �ƴ� ���� : ";
			cin >> no;
		} while (no < 0);

		do {
			cout << "� ������ ��ȯ�ұ��? (2~36) : ";
			cin >> cd;
		} while (cd < 2 || cd > 36);

		dno = cardConvR(no, cd, cno);

		cout << cd << "�����δ� ";
		for (int i = dno - 1; i >= 0; --i)
			cout << cno[i];
		cout << "�Դϴ�.\n";

		cout << "�� �� �� �ұ��? (1.��/0.�ƴϿ�) :";
		cin >> retry;
	} while (retry == 1);

	return 0;
}

int cardConvR(int x, int r, char* d) {
	int digits = 0;
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	do {
		d[digits++] = dchar[x % r];
		x /= r;
	} while (x != 0);

	return digits;
}
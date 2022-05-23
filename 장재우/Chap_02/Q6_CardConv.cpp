#include <iostream>

using namespace std;

int cardConv(int x, int r, char* d);

int Q6(void) {
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

		dno = cardConv(no, cd, cno);

		cout << cd << "�����δ� ";
		for (int i = 0; i < dno; ++i)
			cout << cno[i];
		cout << "�Դϴ�.\n";

		cout << "�� �� �� �ұ��? (1.��/0.�ƴϿ�) :";
		cin >> retry;
	} while (retry == 1);

	return 0;
}

int cardConv(int x, int r, char* d) {
	int digits = 1;
	int tmp = 1;
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	// 1. ä��� �� ���� : n/2 * 3
	// 2. n�ڸ����� Ȯ���ϰ� �� ä�� : n * 3

	while (tmp <= x) {
		tmp *= r;
		++digits;
	}

	tmp = --digits;
	do {
		d[--tmp] = dchar[x % r];
		x /= r;
	} while (x != 0);

	/*
	for (int i = 0; i < digits / 2; ++i) {
		char tmp = d[i];
		d[i] = d[digits - i - 1];
		d[digits - i - 1] = tmp;
	}
	*/

	return digits;
}
#include <iostream>

using namespace std;

extern int mdays[2][12];
extern int isLeap(int year);

int getDayOfYearWhile(int y, int m, int d) {
	while (--m > 0)
		d += mdays[isLeap(y)][m - 1];

	return d;
}

int Q8(void) {
	int year, month, day;
	int retry;

	cout << "�� �� ��� �ϼ��� ���մϴ�.\n";
	do {
		cout << "�� : "; cin >> year;
		cout << "�� : "; cin >> month;
		cout << "�� : "; cin >> day;

		cout << "�� �� " << getDayOfYearWhile(year, month, day) << "��°�Դϴ�.\n";

		cout << "�� �� �� �ұ��? (1.�� / 0.�ƴϿ�) : ";

		cin >> retry;

	} while (retry == 1);


	return 0;
}
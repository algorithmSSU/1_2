#include <iostream>

using namespace std;

int mdays[2][12] = {
	{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int isLeap(int year) {
	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 1 : 0;
}


int getDayOfYearFor(int y, int m, int d) {
	int days = d;

	for (int i = 1; i < m; ++i)
		days += mdays[isLeap(y)][i - 1];

	return days;
}

int dayOfYearFor(void) {
	int year, month, day;
	int retry;

	cout << "�� �� ��� �ϼ��� ���մϴ�.\n";
	do {
		cout << "�� : "; cin >> year;
		cout << "�� : "; cin >> month;
		cout << "�� : "; cin >> day;

		cout << "�� �� " << getDayOfYearFor(year, month, day) << "��°�Դϴ�.\n";

		cout << "�� �� �� �ұ��? (1.�� / 0.�ƴϿ�) : ";

		cin >> retry;

	} while (retry == 1);


	return 0;
}
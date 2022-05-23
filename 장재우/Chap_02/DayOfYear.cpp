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

	cout << "그 해 경과 일수를 구합니다.\n";
	do {
		cout << "년 : "; cin >> year;
		cout << "월 : "; cin >> month;
		cout << "일 : "; cin >> day;

		cout << "그 해 " << getDayOfYearFor(year, month, day) << "일째입니다.\n";

		cout << "한 번 더 할까요? (1.예 / 0.아니요) : ";

		cin >> retry;

	} while (retry == 1);


	return 0;
}
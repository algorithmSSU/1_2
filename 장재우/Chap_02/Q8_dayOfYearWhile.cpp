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

	cout << "그 해 경과 일수를 구합니다.\n";
	do {
		cout << "년 : "; cin >> year;
		cout << "월 : "; cin >> month;
		cout << "일 : "; cin >> day;

		cout << "그 해 " << getDayOfYearWhile(year, month, day) << "일째입니다.\n";

		cout << "한 번 더 할까요? (1.예 / 0.아니요) : ";

		cin >> retry;

	} while (retry == 1);


	return 0;
}
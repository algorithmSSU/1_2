#include <iostream>

using namespace std;

extern int mdays[2][12];
extern int isLeap(int year);
extern int getDayOfYearWhile(int y, int m, int d);

int leftDayOfYear(int y, int m, int d);

int Q9(void) {
	int y, m, d;
	cin >> y >> m >> d;

	cout << leftDayOfYear(y, m, d) << "\n";

	return 0;
}

int leftDayOfYear(int y, int m, int d) {
	int left = mdays[isLeap(y)][m - 1] - d;

	for (int i = m; i < 12; ++i)
		left += mdays[isLeap(y)][i];

	return left;
}
#include <iostream>

using namespace std;

int problem1924(void) {
	int x, y;
	int days = 0;
	int day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char week[7][4] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

	cin >> x >> y;

	// 1월 1일부터 지난 날짜 계산
	for (int i = 1; i < x; ++i)
		days += day[i];

	days += y;
	
	// 7로 모듈러 연산 하여 요일 출력
	cout << week[days % 7] << "\n";

	return 0;
}
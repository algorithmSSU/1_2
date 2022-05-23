#include <iostream>

using namespace std;

int cardConv(int x, int r, char* d);

int Q6(void) {
	int no, cd, dno;
	int retry;
	char cno[32];

	cout << "10진수를 기수로 변환합니다.\n";
	do {
		do {
			cout << "변환하는 음이 아닌 정수 : ";
			cin >> no;
		} while (no < 0);

		do {
			cout << "어떤 진수로 변환할까요? (2~36) : ";
			cin >> cd;
		} while (cd < 2 || cd > 36);

		dno = cardConv(no, cd, cno);

		cout << cd << "진수로는 ";
		for (int i = 0; i < dno; ++i)
			cout << cno[i];
		cout << "입니다.\n";

		cout << "한 번 더 할까요? (1.예/0.아니요) :";
		cin >> retry;
	} while (retry == 1);

	return 0;
}

int cardConv(int x, int r, char* d) {
	int digits = 1;
	int tmp = 1;
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	// 1. 채우고 역 정렬 : n/2 * 3
	// 2. n자리임을 확인하고 역 채움 : n * 3

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
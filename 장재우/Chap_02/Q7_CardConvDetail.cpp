#include <iostream>

using namespace std;

int cardConvDetail(int x, int r, char* d);

int Q7(void) {
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

		dno = cardConvDetail(no, cd, cno);

		cout << cd << "진수로는 ";
		for (int i = dno - 1; i >= 0; --i)
			cout << cno[i];
		cout << "입니다.\n";

		cout << "한 번 더 할까요? (1.예/0.아니요) :";
		cin >> retry;
	} while (retry == 1);

	return 0;
}

int cardConvDetail(int x, int r, char* d) {
	int digits = 0;
	int rest = 0;
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("%2d|%7d\n", r, x);
	printf("--+-------\n");
	do {
		rest = x % r;
		d[digits++] = dchar[rest];
		x /= r;
		if (x == 0)
			printf("%10d ... %d\n", 0, rest);
		else {
			printf("%2d|%7d ... %d\n", r, x, rest);
			printf("--+-------\n");
		}	
	} while (x != 0);

	return digits;
}
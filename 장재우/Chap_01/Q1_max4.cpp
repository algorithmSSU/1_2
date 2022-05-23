#include <iostream>

using namespace std;

int max4(int a, int b, int c, int d);
int Q1(void);

int max4(int a, int b, int c, int d) {
	int max = a;

	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;

	return max;
}

int Q1(void) {
	int a, b, c, d;
	int max;
	cout << "네 정수의 최대값을 구합니다.\n";

	cin >> a >> b >> c >> d;

	max = max4(a, b, c, d);

	cout << "최대값은 " << max << "입니다.\n";
	
	return 0;
}
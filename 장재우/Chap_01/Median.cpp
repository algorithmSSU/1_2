#include <iostream>

using namespace std;

int median(void);
int med3(int a, int b, int c);

int med3(int a, int b, int c) {
	if (a >= c)
		if (b >= c)
			return c;
		else if (a <= 3)
			return a;
		else
			return c;
	else if (a > c)
		return a;
	else if (b > c)
		return c;
	else
		return b;
}

int median(void) {
	int a, b, c;
	cout << "세 정수의 중앙값을 구합니다.\n";

	cout << "a의 값 : ";
	cin >> a;
	cout << "b의 값 : ";
	cin >> b;
	cout << "c의 값 : ";
	cin >> c;

	cout << "중앙값은 " << med3(a, b, c) << "입니다.\n";

	return 0;
}

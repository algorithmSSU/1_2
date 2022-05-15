#include <iostream>

using namespace std;

int Q10(void) {
	int a, b;

	cout << "a의 값 : ";
	cin >> a;

	while (1) {
		cout << "b의 값 : ";
		cin >> b;
		if (b > a)
			break;
		cout << "a보다 큰 값을 입력하세요!\n";
	}

	cout << "b - a는 " << b - a << "입니다\n";
	
	return 0;
}
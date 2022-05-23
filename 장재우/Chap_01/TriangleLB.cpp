#include <iostream>

using namespace std;

int triangleLB(void) {
	int n;

	cout << "왼쪽 아래가 직각인 이등변 삼각형을 출력합니다.\n";

	do {
		cout << "몇 단 삼각형 입니까? : ";
		cin >> n;
	} while (n <= 0);

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j)
			cout << "*";
		cout << "\n";
	}

	return 0;
}
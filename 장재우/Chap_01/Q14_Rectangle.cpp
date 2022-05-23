#include <iostream>

using namespace std;

int Q14(void) {
	int n;
	cout << "사각형을 출력합니다.\n";
	
	cout << "단의 수 : ";
	cin >> n;

	while (n < 1) {
		cout << "1 이상 자연수를 입력해 주세요\n";
		cout << "단의 수 : ";
		cin >> n;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cout << "*";
		cout << "\n";
	}

	return 0;
}
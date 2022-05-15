#include <iostream>

using namespace std;

int Q11(void)
{
	int n, digit;
	
	cout << "수를 입력해 주세요\n";
	cin >> n;

	digit = 0;
	while (n > 0) {
		++digit;
		n *= 0.1;
	}

	cout << "그 수는 " << digit << "자리 수입니다.\n";

	return 0;
}
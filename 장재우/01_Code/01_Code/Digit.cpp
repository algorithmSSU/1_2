#include <iostream>

using namespace std;

int digit(void) {
	int no;
	cout << "두자리 정수를 입력하세요.\n";

	do {
		cout << "입력 : ";
		cin >> no;
	} while (no < 10 || no > 99);

	cout << "변수 no의 값은 " << no << "가(이) 되었습니다.\n";

	return 0;
}
#include <iostream>
#include "TStack.h"

using namespace std;

int intstackTester(void) {
	TStack<int>* s = new TStack<int>(64);
	int menu;

	while (true) {
		cout << "현재 데이터 수 : " << s->size() << " / " << s->capacity() << "\n";
		cout << "(1) 푸시  (2) 팝    (3) 피크  (4) 덤프  (0) 종료 : ";

		cin >> menu;
		if (menu == 0) break;

		int x;
		switch (menu) {
		case 1:
			cout << "데이터 : ";
			cin >> x;
			s->push(x);
			break;
			
		case 2:
			x = s->pop();
			cout << "팝한 데이터는 " << x << "입니다.\n";
			break;

		case 3:
			x = s->peek();
			cout << "피크한 데이터는 " << x << "입니다.\n";
			break;

		case 4:
			s->dump();
			break;
		}

		cout << "\n";
	}

	delete s;

	return 0;
}
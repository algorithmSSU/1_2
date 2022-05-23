#include <iostream>
#include "TQueue.h"

using namespace std;

int intQueueTester(void) {
	TQueue<int>* q = new TQueue<int>(8);

	int menu;

	while (true) {
		cout << "현재 데이터 수 : " << q->size() << " / " << q->getCapacity() << "\n";
		cout << "(1) 인큐  (2) 디큐  (3) 피크  (4) 덤프  (0) 종료 : ";

		cin >> menu;
		if (menu == 0) break;

		int x;
		switch (menu) {
		case 1:
			cout << "데이터 : ";
			cin >> x;
			q->enque(x);
			break;

		case 2:
			x = q->deque();
			cout << "팝한 데이터는 " << x << "입니다.\n";
			break;

		case 3:
			x = q->peek();
			cout << "피크한 데이터는 " << x << "입니다.\n";
			break;

		case 4:
			q->dump();
			break;
		}

		cout << "\n";
	}

	delete q;

	return 0;
}
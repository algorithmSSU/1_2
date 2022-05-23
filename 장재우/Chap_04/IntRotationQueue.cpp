#include <iostream>
#include "TRotationQueue.h"

using namespace std;

int intRotationQueue(void) {
	TRotationQueue<int>* q = new TRotationQueue<int>(8);
	int menu;

	for (int i = 1; i < 8; ++i)
		q->enque(i);
	q->deque();
	q->deque();

	while (true) {
		q->dump();
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
			cout << "디큐한 데이터는 " << x << "입니다.\n";
			break;

		case 3:
			x = q->peek();
			cout << "피크한 데이터는 " << x << "입니다.\n";
			break;

		case 4:
			q->dump();
			break;

		case 5:
			if (q->isEmpty())
				cout << "큐가 비어 있습니다.\n";
			else
				cout << "큐가 비어있지 않습니다.\n";
			break;

		case 6:
			if (q->isFull())
				cout << "큐가 가득차 있습니다.\n";
			else
				cout << "큐가 가득차있지 않습니다.\n";
		}
		cout << "\n";
	}

	delete q;

	return 0;
}
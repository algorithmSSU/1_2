#include <iostream>
#include "TQueue.h"

using namespace std;

int intQueueTester(void) {
	TQueue<int>* q = new TQueue<int>(8);

	int menu;

	while (true) {
		cout << "���� ������ �� : " << q->size() << " / " << q->getCapacity() << "\n";
		cout << "(1) ��ť  (2) ��ť  (3) ��ũ  (4) ����  (0) ���� : ";

		cin >> menu;
		if (menu == 0) break;

		int x;
		switch (menu) {
		case 1:
			cout << "������ : ";
			cin >> x;
			q->enque(x);
			break;

		case 2:
			x = q->deque();
			cout << "���� �����ʹ� " << x << "�Դϴ�.\n";
			break;

		case 3:
			x = q->peek();
			cout << "��ũ�� �����ʹ� " << x << "�Դϴ�.\n";
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
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
			cout << "��ť�� �����ʹ� " << x << "�Դϴ�.\n";
			break;

		case 3:
			x = q->peek();
			cout << "��ũ�� �����ʹ� " << x << "�Դϴ�.\n";
			break;

		case 4:
			q->dump();
			break;

		case 5:
			if (q->isEmpty())
				cout << "ť�� ��� �ֽ��ϴ�.\n";
			else
				cout << "ť�� ������� �ʽ��ϴ�.\n";
			break;

		case 6:
			if (q->isFull())
				cout << "ť�� ������ �ֽ��ϴ�.\n";
			else
				cout << "ť�� ���������� �ʽ��ϴ�.\n";
		}
		cout << "\n";
	}

	delete q;

	return 0;
}
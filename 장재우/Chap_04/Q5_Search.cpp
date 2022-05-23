#include <iostream>
#include "TRotationQueue.h"
#include <algorithm>

template <typename T>
class TextendedQueue : public TRotationQueue<T> {
public :
	TextendedQueue(int input) : TRotationQueue<T>(input) {

	}

	int search(T x) {
		int index = 0;

		cout << this->TRotationQueue<T>::front << " " << this->TRotationQueue<T>::rear << "\n";

		for (int i = this->TRotationQueue<T>::front; i != this->TRotationQueue<T>::rear; ++i) {
			if (i == this->TRotationQueue<T>::max)
				i = 0;
			++index;

			if (this->TRotationQueue<T>::que[i] == x)
				return index;
		}
		
		return -1;
	}
};

int Q5(void) {
	TextendedQueue<int>* q = new TextendedQueue<int>(8);
	int menu;

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
			cout << "���� �����ʹ� " << x << "�Դϴ�.\n";
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
				cout << "������ ��� �ֽ��ϴ�.\n";
			else
				cout << "������ ������� �ʽ��ϴ�.\n";
			break;

		case 6:
			if (q->isFull())
				cout << "������ ������ �ֽ��ϴ�.\n";
			else
				cout << "������ ���������� �ʽ��ϴ�.\n";
	
		case 7:
			cout << "������ : ";
			cin >> x;
			int index = q->search(x);
			cout << "index : " << index << "\n";
		}

		cout << "\n";
	}

	delete q;

	return 0;

}
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

		case 5:
			if (q->isEmpty())
				cout << "스택은 비어 있습니다.\n";
			else
				cout << "스택은 비어있지 않습니다.\n";
			break;

		case 6:
			if (q->isFull())
				cout << "스택이 가득차 있습니다.\n";
			else
				cout << "스택이 가득차있지 않습니다.\n";
	
		case 7:
			cout << "데이터 : ";
			cin >> x;
			int index = q->search(x);
			cout << "index : " << index << "\n";
		}

		cout << "\n";
	}

	delete q;

	return 0;

}
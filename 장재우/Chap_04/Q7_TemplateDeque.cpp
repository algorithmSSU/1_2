#pragma once
#include <iostream>

using namespace std;

template <typename T>
class TDeque {
protected:
	int* deque;
	int max;
	int num;

	int front;
	int rear;

public:
	TDeque(int capacity) {
		max = capacity;
		num = 0;
		front = 0;
		rear = 0;
		
		deque = new T[max];
	}

	~TDeque() {
		delete[] deque;
		max = 0;
		num = 0;
	}

	void frontEnque(T x) {
		if (num == max)
			append();

		if (--front < 0)
			front = max - 1;

		deque[front] = x;
		num++;
	}

	void rearEnque(T x) {
		if (num == max)
			append();

		deque[rear++] = x;
		num++;
		if (rear == max)
			rear = 0;
	}

	T frontDeque() {
		if (num <= 0)
			cout << "queue is empty!\n";

		T out = deque[front];
		deque[front++] = -1;
		--num;

		if (front == max)
			front = 0;

		return out;
	}

	T rearDeque() {
		if (num <= 0)
			cout << "queue is empty!\n";

		deque[rear--] = -1;
		if (rear < 0)
			rear = max - 1;

		T out = deque[rear];
		--num;

		return out;
	}

	void append() {
		int newMax = (int)(max * 1.5);
		T* tmp = new T[newMax];

		memcpy(tmp, &deque[front], sizeof(T) * (max - front));
		memcpy(tmp + (max - front), &deque[0], sizeof(T) * rear);

		front = 0;
		rear = num;
		max = newMax;

		delete[] deque;
		deque = tmp;
	}

	T peekLeft() {
		return deque[front];
	}

	T peekRight() {
		return deque[rear];
	}


	T indexOf(T x) {
		if (rear < front) {
			for (int i = front; i < max; ++i)
				if (deque[i] == x)
					return i;
			for (int i = 0; i < rear; ++i)
				if (deque[i] == x)
					return i;
		}
		else {
			for (int i = front; i < rear; ++i)
				if (deque[i] == x)
					return i;
		}
		return -1;
	}

	void claer(void) {
		num = 0;
	}

	int getCapacity(void) {
		return max;
	}

	int size(void) {
		return num;
	}

	bool isEmpty() {
		return (num == 0);
	}

	bool isFull() {
		return (num == max);
	}

	void dump() {
		if (isEmpty()) {
			cout << "Queue is empty\n";
			return;
		}

		int i;
		if (rear <= front) {
			for (i = front; i < max; ++i)
				cout << deque[i] << " ";
			for (i = 0; i < rear; ++i)
				cout << deque[i] << " ";
			cout << "\n";
		}
		else {
			for (i = front; i < rear; ++i)
				cout << deque[i] << " ";
			cout << "\n";
		}
	}
};


int Q7(void) {
	TDeque<int>* s = new TDeque<int>(8);
	int menu;

	while (true) {
		s->dump();
		cout << "현재 데이터 수 : " << s->size() << " / " << s->getCapacity() << "\n";
		cout << "(1) 인쿠  (2) 디큐  (3) 피크  (4) 덤프  (5) 빈 여부 (6) 꽉찬 여부 (0) 종료 : ";

		cin >> menu;
		if (menu == 0) break;

		int x;

		int leftRight = 0;
		cout << "(1) 좌 (2) 우 : ";
		cin >> leftRight;

		switch (menu) {
		case 1:
			cout << "데이터 : ";
			cin >> x;
			if (leftRight == 1)
				s->frontEnque(x);
			else
				s->rearEnque(x);

			break;

		case 2:
			if (leftRight == 1)
				x = s->frontDeque();
			else
				x = s->rearDeque();

			cout << "팝한 데이터는 " << x << "입니다.\n";
			break;

		case 3:
			if (leftRight == 1)
				x = s->peekLeft();
			else
				x = s->peekRight();

			cout << "피크한 데이터는 " << x << "입니다.\n";
			break;

		case 4:
			s->dump();
			break;

		case 5:
			if (s->isEmpty())
				cout << "right 스택은 비어 있습니다.\n";
			else
				cout << "right 스택은 비어있지 않습니다.\n";
			
			break;

		case 6:
			if (s->isFull())
				cout << "스택이 가득차 있습니다.\n";
			else
				cout << "스택이 가득차있지 않습니다.\n";
		}

		cout << "\n";
	}

	delete s;

	return 0;
}
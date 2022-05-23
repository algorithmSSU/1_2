#pragma once

using namespace std;

template <typename T>
class TRotationQueue {
protected:
	int* que;
	int max;
	int num;

	int front;
	int rear;

public:
	TRotationQueue(int capacity) {
		max = capacity;
		num = 0;
		front = 0;
		rear = 0;
		try {
			que = new T[max];
		}
		catch (bad_alloc e) {
			capacity = 0;
		}
	}

	~TRotationQueue() {
		delete[] que;
		max = 0;
		num = 0;
	}

	void enque(T x) {
		if (num == max)
			append();

		que[rear++] = x;
		num++;
		if (rear == max)
			rear = 0;
	}

	T deque() {
		if (num <= 0)
			cout << "queue is empty!\n";

		T out = que[front];
		que[front++] = -1;
		--num;

		if (front == max)
			front = 0;

		return out;
	}

	void append() {
		int newMax = (int)(max * 1.5);
		T* tmp = new T[newMax];

		memcpy(tmp, &que[front], sizeof(T) * (max - front));
		memcpy(tmp + (max - front), &que[0], sizeof(T) * rear);

		front = 0;
		rear = num;
		max = newMax;

		delete[] que;
		que = tmp;
	}

	T peek() {
		return que[front];
	}

	T indexOf(T x) {
		if (rear < front) {
			for (int i = front; i < max; ++i)
				if (que[i] == x)
					return i;
			for (int i = 0; i < rear; ++i)
				if (que[i] == x)
					return i;
		}
		else {
			for (int i = front; i < rear; ++i)
				if (que[i] == x)
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
				cout << que[i] << " ";
			for (i = 0; i < rear; ++i)
				cout << que[i] << " ";
			cout << "\n";
		}
		else {
			for (i = front; i < rear; ++i)
				cout << que[i] << " ";
			cout << "\n";
		}
	}
};
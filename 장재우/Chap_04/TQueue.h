#pragma once
#include <iostream>

using namespace std;

template <typename T>
class TQueue {
private :
	int* que;
	int max; 
	int num;

public :
	TQueue(int capacity) {
		max = capacity;
		num = 0;
		try {
			que = new T[max];
		}
		catch (bad_alloc e) {
			capacity = 0;
		}
	}

	~TQueue() {
		delete[] que;
		max = 0;
		num = 0;
	}

	void enque(T x) {
		if (num == max)
			append();

		que[num++] = x;
	}

	T deque() {
		T out = que[0];
		for (int i = 1; i < num; ++i)
			que[i - 1] = que[i];

		--num;
		return out;
	}

	void append() {
		max = (int)(max * 1.5);
		T* tmp = new T[max];

		memcpy(tmp, que, sizeof(T) * num);

		delete[] que;
		que = tmp;
	}

	T peek() {
		return que[0];
	}

	T indexOf(T x) {
		for (int i = 0; i < num; ++i)
			if (que[i] == x)
				return i;

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
		for (int i = 0; i < num; ++i)
			cout << que[i] << " ";
		cout << "\n";
	}
};
#pragma once
#include <iostream>

using namespace std;

template <typename T>
class TStack {
private:
	int max;
	int ptr;
	T* stk;

public:
	TStack(int capacity) {
		ptr = 0;
		max = capacity;
		try {
			stk = new T[max];
		}
		catch (bad_alloc& e) {
			max = 0;
		}
	}

	~TStack() {
		delete[] stk;
		ptr = 0;
		max = 0;
	}

	T push(T& x) {
		if (ptr >= max) {
			// Case : ������ ���� ����� -> ���� Ȯ��
			// ���ο� 1.5�� ������ �迭 ����
			max = (int)(max * 1.5);
			T* tmp = new T[max];

			// ����
			memcpy(tmp, stk, sizeof(T) * ptr);

			// ���Ҵ� 
			delete[] stk;
			stk = tmp;
		}

		return stk[ptr++] = x;
	}

	T pop(void) {
		if (ptr <= 0)
			cout << "stack is empty! \n";

		return stk[--ptr];
	}

	T peek(void) {
		if (ptr <= 0)
			cout << "stack is empty! \n";

		return stk[ptr - 1];
	}

	T indexOf(int x) {
		for (int i = ptr - 1; i >= 0; --i)
			if (stk[i] == x)
				return i;

		return -1;
	}

	void claer(void) {
		ptr = 0;
	}

	int capacity(void) {
		return max;
	}

	int size(void) {
		return ptr;
	}

	bool isEmpty(void) {
		return ptr <= 0;
	}

	bool isFull(void) {
		return ptr >= max;
	}

	void dump() {
		if (ptr <= 0)
			cout << "stack is empty! \n";
		else {
			for (int i = 0; i < ptr; ++i)
				cout << stk[i] << " ";
			cout << "\n";
		}
	}
};
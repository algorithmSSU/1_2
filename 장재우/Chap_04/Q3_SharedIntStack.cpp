#include <iostream>

using namespace std;

template <typename T>
class TSharedStack {
private:
	int capacity;
	T* stk;

	T* pStart;
	T* pEnd;

	T* pLeft;
	T* pRight;

public:
	TSharedStack(int capacity) {
		this->capacity = capacity;
		try {
			// 배열의 끝을 알리는 NULL 원소 추가
			stk = new T[capacity + 1];
		}
		catch (bad_alloc& e) {
			capacity = 0;
		}
		pStart = stk;
		pEnd = &stk[capacity];

		// pLeft : 앞으로 들아갈 위치를 가리킴
		// pRight : 마지막에 들어온 위치를 가리킴 (처음엔 배열의 끝(NULL 원소)를 가리킴)
		pLeft = pStart;
		pRight = pEnd;
	}

	~TSharedStack() {
		delete stk;
		capacity = 0;

		pStart = NULL;
		pEnd = NULL;

		pLeft = NULL;
		pRight = NULL;
	}

	T pushLeft(T& x) {
		if (isFull())
			this->append();

		return *(pLeft++) = x;
	}

	T pushRight(T& x) {
		if (isFull())
			this->append();

		return *(--pRight) = x;
	}

	void append(void) {
		// Case : 스택이 가득 찬경우 -> 길이 확장
		// 새로운 1.5배 길이의 배열 생성
		int newCapacity = (int)(capacity * 1.5);
		T* tmp = new T[newCapacity + 1];

		// 복사
		memcpy(tmp, stk, sizeof(T) * (pLeft - pStart)); // Left 
		memcpy(&tmp[newCapacity] - (pEnd - pRight), pRight, sizeof(T) * (pEnd - pRight));

		// 재할당 
		delete stk;
		stk = tmp;

		pLeft = tmp + (pLeft - pStart);
		pRight = &tmp[newCapacity] - (pEnd - pRight);

		pStart = tmp;
		pEnd = &tmp[newCapacity];

		capacity = newCapacity;
	}

	T popLeft(void) {
		if (isLeftEmpty())
			cout << "left stack is empty! \n";

		return *(--pLeft);
	}

	T popRight(void) {
		if (isRightEmpty())
			cout << "right stack is empty! \n";

		return *(pRight--);
	}


	T peekLeft(void) {
		if (isLeftEmpty())
			cout << "left stack is empty! \n";

		return *(pLeft - 1);
	}

	T peekRight(void) {
		if (isRightEmpty())
			cout << "right stack is empty! \n";

		return *(pRight);
	}

	T indexOf(int x) {
		T* iterLeft = pRight;
		T* iterRight = pLeft;
		
		for (; (iterLeft != pStart) && (iterRight != pEnd); --iterLeft, ++iterRight) {
			if (*iterLeft == x)
				return (iterLeft - pStart);
			if (*iterRight == x)
				return (pEnd - iterRight);
		}

		return -1;
	}

	void claer(void) {
		pLeft = pStart;
		pRight = pEnd;
	}

	int getCapacity(void) {
		return capacity;
	}

	int sizeLeft(void) {
		return (pLeft - pStart);
	}

	int sizeRight(void) {
		return (pEnd - pRight);
	}

	int size(void) {
		return (sizeLeft() + sizeRight());
	}

	bool isLeftEmpty(void) {
		return (pLeft == pStart);
	}
	bool isRightEmpty(void) {
		return (pRight == pEnd);
	}
	bool isEmpty(void) {
		return (isLeftEmpty() && isRightEmpty());
	}

	bool isFull(void) {
		return (pLeft == pRight);
	}

	void dump() {
		if (isEmpty())
			cout << "stack is empty! \n";
		else {
			T* iter;
			for (iter = pStart; iter != pLeft; ++iter)
				cout << *iter << " ";

			for (iter; iter != pRight; ++iter)
				cout << "(NULL) ";

			for (iter = pRight; iter != pEnd; ++iter)
				cout << *iter << " ";
			cout << "\n";
		}
	}
};

int Q3(void) {
	TSharedStack<int>* s = new TSharedStack<int>(8);
	int menu;

	while (true) {
		s->dump();
		cout << "현재 데이터 수 : " << s->size() << " / " << s->getCapacity() << "\n";
		cout << "(1) 푸시  (2) 팝    (3) 피크  (4) 덤프  (5) 빈 여부 (6) 꽉찬 여부 (0) 종료 : ";

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
				s->pushLeft(x);
			else
				s->pushRight(x);

			break;

		case 2:
			if (leftRight == 1)
				x = s->popLeft();
			else
				x = s->popRight();

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
			if (leftRight == 1) {
				if (s->isLeftEmpty())
					cout << "left 스택은 비어 있습니다.\n";
				else
					cout << "left 스택은 비어있지 않습니다.\n";
			}
			else if (leftRight == 2) {
				if (s->isRightEmpty())
					cout << "right 스택은 비어 있습니다.\n";
				else
					cout << "right 스택은 비어있지 않습니다.\n";
			}
			else {
				if (s->isEmpty())
					cout << "right 스택은 비어 있습니다.\n";
				else
					cout << "right 스택은 비어있지 않습니다.\n";
			}
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
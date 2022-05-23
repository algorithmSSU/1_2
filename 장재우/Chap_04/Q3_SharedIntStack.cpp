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
			// �迭�� ���� �˸��� NULL ���� �߰�
			stk = new T[capacity + 1];
		}
		catch (bad_alloc& e) {
			capacity = 0;
		}
		pStart = stk;
		pEnd = &stk[capacity];

		// pLeft : ������ ��ư� ��ġ�� ����Ŵ
		// pRight : �������� ���� ��ġ�� ����Ŵ (ó���� �迭�� ��(NULL ����)�� ����Ŵ)
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
		// Case : ������ ���� ����� -> ���� Ȯ��
		// ���ο� 1.5�� ������ �迭 ����
		int newCapacity = (int)(capacity * 1.5);
		T* tmp = new T[newCapacity + 1];

		// ����
		memcpy(tmp, stk, sizeof(T) * (pLeft - pStart)); // Left 
		memcpy(&tmp[newCapacity] - (pEnd - pRight), pRight, sizeof(T) * (pEnd - pRight));

		// ���Ҵ� 
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
		cout << "���� ������ �� : " << s->size() << " / " << s->getCapacity() << "\n";
		cout << "(1) Ǫ��  (2) ��    (3) ��ũ  (4) ����  (5) �� ���� (6) ���� ���� (0) ���� : ";

		cin >> menu;
		if (menu == 0) break;

		int x;

		int leftRight = 0;
		cout << "(1) �� (2) �� : ";
		cin >> leftRight;

		switch (menu) {
		case 1:
			cout << "������ : ";
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

			cout << "���� �����ʹ� " << x << "�Դϴ�.\n";
			break;

		case 3:
			if (leftRight == 1)
				x = s->peekLeft();
			else
				x = s->peekRight();

			cout << "��ũ�� �����ʹ� " << x << "�Դϴ�.\n";
			break;

		case 4:
			s->dump();
			break;

		case 5:
			if (leftRight == 1) {
				if (s->isLeftEmpty())
					cout << "left ������ ��� �ֽ��ϴ�.\n";
				else
					cout << "left ������ ������� �ʽ��ϴ�.\n";
			}
			else if (leftRight == 2) {
				if (s->isRightEmpty())
					cout << "right ������ ��� �ֽ��ϴ�.\n";
				else
					cout << "right ������ ������� �ʽ��ϴ�.\n";
			}
			else {
				if (s->isEmpty())
					cout << "right ������ ��� �ֽ��ϴ�.\n";
				else
					cout << "right ������ ������� �ʽ��ϴ�.\n";
			}
			break;

		case 6:
			if (s->isFull())
				cout << "������ ������ �ֽ��ϴ�.\n";
			else
				cout << "������ ���������� �ʽ��ϴ�.\n";
		}

		cout << "\n";
	}

	delete s;

	return 0;
}
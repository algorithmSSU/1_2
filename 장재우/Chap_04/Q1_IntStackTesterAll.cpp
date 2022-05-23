#include <iostream>
#include "TStack.h"

using namespace std;

int Q1(void) {
	TStack<int>* s = new TStack<int>(64);
	int menu;

	while (true) {
		cout << "���� ������ �� : " << s->size() << " / " << s->capacity() << "\n";
		cout << "(1) Ǫ��  (2) ��    (3) ��ũ  (4) ����  (5) �� ���� (6) ���� ���� (0) ���� : ";

		cin >> menu;
		if (menu == 0) break;

		int x;
		switch (menu) {
		case 1:
			cout << "������ : ";
			cin >> x;
			s->push(x);
			break;

		case 2:
			x = s->pop();
			cout << "���� �����ʹ� " << x << "�Դϴ�.\n";
			break;

		case 3:
			x = s->peek();
			cout << "��ũ�� �����ʹ� " << x << "�Դϴ�.\n";
			break;

		case 4:
			s->dump();
			break;

		case 5:
			if (s->isEmpty())
				cout << "������ ��� �ֽ��ϴ�.\n";
			else
				cout << "������ ������� �ʽ��ϴ�.\n";
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
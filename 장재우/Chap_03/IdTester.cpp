#include <iostream>

using namespace std;

class Id {
private :
	int id;
	static int counter;

public :
	Id() { id = ++counter;}

	int getId(void) { return id; }
	static int getCounter(void) { return counter; }
};

int Id::counter = 0;

int idTester(void) {
	Id* a = new Id();
	Id* b = new Id();

	cout << "a�� ���̵� : " << a->getId() << "\n";
	cout << "b�� ���̵� : " << b->getId() << "\n";

	cout << "�ο��� ���̵��� ���� : " << Id::getCounter() << "\n";

	delete a;
	delete b;

	return 0;
}
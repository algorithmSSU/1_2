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

	cout << "a의 아이디 : " << a->getId() << "\n";
	cout << "b의 아이디 : " << b->getId() << "\n";

	cout << "부여한 아이디의 개수 : " << Id::getCounter() << "\n";

	delete a;
	delete b;

	return 0;
}
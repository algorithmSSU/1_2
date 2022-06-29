#include "LinkedList.h"

using namespace std;

class Data {
private:
	int no;
	string name;

public :
	ostream& operator<<(ostream& outputStream) {
		cout << "(" << no << ")" << name;
		return outputStream;
	}
	
	void scanData(string* guide, int sw) {
		cout << guide << "�� �����͸� �Է��ϼ���.";

		if ((sw & NO) == NO) {
			cout << "��ȣ : ";
			cin >> no;
		}
		if ((sw & NAME) == NAME) {
			cout << "�̸� : ";
			cin >> name;
		}
	}

	bool static compare(Data* a, Data* b) {
		return (a->no > b->no) ? 1 : (a->no < b->no) ? -1 : 0;
	}

	const int NO = 1;
	const int NAME = 2;
};

class Menu {
private :
	
};

int linkedListTester() {
	Menu menu;
	Data* data;
	Data* ptr;

	Data* tmp = new Data();

	LinkedList<Data>* list = new LinkedList<Data>();
}
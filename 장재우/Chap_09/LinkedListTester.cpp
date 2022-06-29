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
		cout << guide << "할 데이터를 입력하세요.";

		if ((sw & NO) == NO) {
			cout << "번호 : ";
			cin >> no;
		}
		if ((sw & NAME) == NAME) {
			cout << "이름 : ";
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
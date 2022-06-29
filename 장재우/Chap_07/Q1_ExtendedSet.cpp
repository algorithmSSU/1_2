#include <iostream>
#include "TemplateSet.h"

using namespace std;

template <typename T>
class ExtendedSet : public TemplateSet<T> {
public :
	ExtendedSet(int input) : TemplateSet<T>(input) {

	}
	bool isEmpty() {
		return !(TemplateSet<T>::num);
	}

	bool isFull() {
		return (TemplateSet<T>::num == TemplateSet<T>::max);
	}

	void clear() {
		TemplateSet<T>::num = 0;
	}
};

int Q1(void) {
	ExtendedSet<int> a(3);
	cout << a.isEmpty() << "\n";
	a.add(20);
	cout << a.isEmpty() << "\n";
	a.add(21);
	a.add(22);

	cout << a.isFull() << "\n";
	a.clear();
	cout << a.isEmpty() << "\n";

	return 0;

}
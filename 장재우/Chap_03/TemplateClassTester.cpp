#include <iostream>

using namespace std;

template <typename T>
class TemplateClass {
private :
	T xyz;

public :
	TemplateClass(T t) {
		this->xyz = t;
	}

	T getXyz(void) {
		return xyz;
	}
};

int templateClassTester(void) {
	TemplateClass<string>* s = new TemplateClass<string>("abc");
	TemplateClass<int>* n = new TemplateClass<int>(15);

	cout << s->getXyz() << "\n";
	cout << n->getXyz() << "\n";

	delete s;
	delete n;

	return 0;
}
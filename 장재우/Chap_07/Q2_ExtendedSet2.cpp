#include <iostream>
#include "TemplateSet.h"

using namespace std;

template <typename T>
class ExtendedSet : public TemplateSet<T> {
public:
	ExtendedSet(int input) : TemplateSet<T>(input) {

	}

	void FillUp(T& input) {
		while (!TemplateSet<T>::isFull()) {
			TempltateSet<T>::add(T);
		}
	}


};

int Q2(void) {
}
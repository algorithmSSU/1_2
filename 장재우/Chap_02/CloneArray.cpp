#include <iostream>

using namespace std;

int* clone(int* arr, int len);

int cloneArray(void) {
	int a[] = { 1, 2, 3, 4, 5 };
	int len = sizeof(a) / sizeof(int);
	int* b = clone(a, len);

	b[3] = 0;

	cout << "a =";
	for (int i = 0; i < len; ++i)
		cout << " " << a[i];
	cout << "\n";

	cout << "b =";
	for (int i = 0; i < len; ++i)
		cout << " " << b[i];
	cout << "\n";

	if (b != NULL) {
		free(b);
		b = NULL;
	}

	return 0;
}

// Memory Allocated ! 
int* clone(int* in, int size) {
	int* out = (int*)malloc(size * sizeof(int));

	memcpy(out, in, size * sizeof(int));

	return out;
}
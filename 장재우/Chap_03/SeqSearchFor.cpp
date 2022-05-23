#include <iostream>

using namespace std;

int sequentialSearchFor(int* arr, int n, int key);

int seqSearchFor(void) {
	int num;
	int ky;

	cout << "요솟수 : ";
	cin >> num;

	int* x = new int[num];

	for (int i = 0; i < num; ++i) {
		cout << "x[" << i << "] : ";
		cin >> x[i];
	}

	cout << "검색할 값 : ";
	cin >> ky;

	int idx = sequentialSearchFor(x, num, ky);

	if (idx == -1)
		cout << "그 값의 요소가 없습니다.\n";
	else
		cout << ky << "은(는) x[" << idx << "]에 있습니다\n";

	delete[] x;

	return 0;
}

int sequentialSearchFor(int* arr, int n, int key) {
	for (int i = 0; i < n; ++i)
		if (arr[i] == key)
			return i;

	return -1;
}

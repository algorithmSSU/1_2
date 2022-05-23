#include <iostream>

using namespace std;

int sequentialSearch(int* arr, int n, int key);

int seqSearch(void) {
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

	int idx = sequentialSearch(x, num, ky);

	if (idx == -1)
		cout << "그 값의 요소가 없습니다.\n";
	else
		cout << ky << "은(는) x[" << idx << "]에 있습니다\n";

	delete[] x;

	return 0;
}

int sequentialSearch(int* arr, int n, int key) {
	int i = 0;

	while (1) {
		if (i == n)
			return -1;
		if (arr[i] == key)
			return i;
		++i;
	}
}

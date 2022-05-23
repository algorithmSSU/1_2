#include <iostream>

using namespace std;

int sequentialSearchSen(int* arr, int n, int key);

int seqSearchSen(void) {
	int num;
	int ky;

	cout << "요솟수 : ";
	cin >> num;

	int* x = new int[num + 1];

	for (int i = 0; i < num; ++i) {
		cout << "x[" << i << "] : ";
		cin >> x[i];
	}

	cout << "검색할 값 : ";
	cin >> ky;

	int idx = sequentialSearchSen(x, num, ky);

	if (idx == -1)
		cout << "그 값의 요소가 없습니다.\n";
	else
		cout << ky << "은(는) x[" << idx << "]에 있습니다\n";

	delete[] x;

	return 0;
}

int sequentialSearchSen(int* arr, int n, int key) {
	int i = 0;

	arr[n] = key;

	while (1) {
		if (arr[i] == key)
			break;
		++i;
	}
	return ((i == n) ? -1 : i);
}

#include <iostream>

using namespace std;

int binarySearch(int* arr, int n, int key);

int binSearch(void) {
	int num;
	int ky;

	cout << "요솟수 : ";
	cin >> num;

	int* x = new int[num];

	for (int i = 0; i < num; ++i) {
		do {
			cout << "x[" << i << "] : ";
			cin >> x[i];
		} while (x[i] < x[i - 1]);
	}

	cout << "검색할 값 : ";
	cin >> ky;

	int idx = binarySearch(x, num, ky);

	if (idx == -1)
		cout << "그 값의 요소가 없습니다.\n";
	else
		cout << ky << "은(는) x[" << idx << "]에 있습니다\n";

	delete[] x;

	return 0;

}

int binarySearch(int* arr, int n, int key) {
	int pl = 0;
	int pr = n - 1;

	do {
		int pc = (pl + pr) / 2;
		if (arr[pc] == key)
			return pc;
		else if (arr[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);

	return -1;
}

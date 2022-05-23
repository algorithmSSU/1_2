#include <iostream>

using namespace std;

int sequentialSearchDetail(int* arr, int n, int key);

int Q2(void) {
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

	int idx = sequentialSearchDetail(x, num, ky);

	if (idx == -1)
		cout << "그 값의 요소가 없습니다.\n";
	else
		cout << ky << "은(는) x[" << idx << "]에 있습니다\n";

	delete[] x;

	return 0;
}

int sequentialSearchDetail(int* arr, int n, int key) {
	int i = 0;

	arr[n] = key;

	cout << "   |";
	for (i = 0; i < n; ++i)
		printf("%3d", i);
	cout << "\n";
	
	cout << "---+";
	for (i = 0; i < n; ++i)
		cout << "---";
	cout << "\n";

	for (i = 0;; ++i) {
		cout << "   |";

		for (int j = 0; j < i; ++j)
			cout << "   ";
		cout << "  *\n";

		printf("%3d|", i);
		for (int j = 0; j < n; ++j)
			printf("%3d", arr[j]);
		cout << "\n";

		if (arr[i] == key)
			break;
	};

	return ((i == n) ? -1 : i);
}

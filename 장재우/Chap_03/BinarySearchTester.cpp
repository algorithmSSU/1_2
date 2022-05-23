#include <iostream>

using namespace std;

int binarySearchTsest(void) {
	int num;
	int ky;

	cout << "요솟수 : ";
	cin >> num;

	int* x = new int[num];

	cout << "오름차순으로 입력하세요. \n";

	for (int i = 0; i < num; ++i) {
		do {
			cout << "x[" << i << "] : ";
			cin >> x[i];
		} while (x[i] < x[i - 1]);
	}

	cout << "검색할 값 : ";
	cin >> ky;

	int* idx = lower_bound(x, x + num, ky);

	if (*idx != ky)
		cout << "그 값의 요소가 없습니다.\n";
	else
		cout << ky << "은(는) x[" << (idx - x) << "]에 있습니다\n";

	delete[] x;

	return 0;

}
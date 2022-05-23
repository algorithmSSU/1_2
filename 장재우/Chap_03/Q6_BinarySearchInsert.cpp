#include <iostream>

using namespace std;

int Q6(void) {
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
		cout << ky << "은(는) x[" << (idx - x) << "] = " << *idx << "의 앞에 추가 되어야 합니다.\n";

	delete[] x;

	return 0;

}
#include "BubbleSort.h"

using namespace std;

int Q2() {
	int n;

	cout << "버블정렬 (버전1, detail)\n";
	cout << "요솟수 : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	BubbleSort::bubbleSortVer1Detail(arr, n);

	return 0;
}
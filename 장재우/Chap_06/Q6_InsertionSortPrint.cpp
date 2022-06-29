#include "SelectionSort.h"

using namespace std;

int Q6() {
	int n;

	cout << "선택 정렬(상세)\n";
	cout << "요솟수 : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	SelctionSort::selectionSortPrint(arr, n);

	return 0;
}
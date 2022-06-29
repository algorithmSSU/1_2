#include "QuickSort.h"

using namespace std;

int quickSort() {
	int n;

	cout << "퀵 정렬\n";
	cout << "요솟수 : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	QuickSort::quickSort(arr, n);

	cout << "오름차순으로 정렬 했습니다.\n";
	QuickSort::printArr(arr, n);

	return 0;
}
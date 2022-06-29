#include "QuickSort.h"

using namespace std;

int Q13() {
	int n;

	cout << "퀵정렬 (&삽입정렬)\n";
	cout << "요솟수 : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	QuickSort::quickSortWithInsertion(arr, 0, n - 1);

	cout << "오름차순으로 정렬 했습니다.\n";
	QuickSort::printArr(arr, n);


	return 0;
}
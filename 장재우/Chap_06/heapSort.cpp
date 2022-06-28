#include "HeapSort.h"

using namespace std;

int heapSort() {
	int n;

	cout << "힙 정렬 \n";
	cout << "요솟수 : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	HeapSort::heapSort(arr, n);

	cout << "오름차순으로 정렬 했습니다.\n";
	HeapSort::printArr(arr, n);


	return 0;

}
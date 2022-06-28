#include "InsertionSort.h"

using namespace std;

int Q8() {
	int n;

	cout << "삽입 정렬(이진탐색)\n";
	cout << "요솟수 : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	InsertionSort::binaryInsertionSort(arr, n);

	cout << "오름차순으로 정렬 했습니다.\n";
	InsertionSort::printArr(arr, n);


	return 0;

}
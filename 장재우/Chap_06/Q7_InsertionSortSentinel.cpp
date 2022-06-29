#include "InsertionSort.h"

using namespace std;

int Q7() {
	int n;

	cout << "삽입 정렬(보초법)\n";
	cout << "요솟수 : ";
	cin >> n;

	int* arr = new int[n + 1];

	for (int i = 1; i < n + 1; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	InsertionSort::insertionSortSentinel(arr, n + 1);

	cout << "오름차순으로 정렬 했습니다.\n";
	InsertionSort::printArr(&(arr[1]), n);

	return 0;

}
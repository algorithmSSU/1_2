#include "BubbleSort.h"

using namespace std;

int Q1() {
	int n;

	cout << "버블정렬 (버전1)\n";
	cout << "요솟수 : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	BubbleSort::bubbleSortLR(arr, n);

	cout << "오름차순으로 정렬 했습니다.\n";
	BubbleSort::printArr(arr, n);

	return 0;
}
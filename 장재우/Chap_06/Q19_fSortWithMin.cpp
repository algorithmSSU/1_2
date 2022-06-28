#include "FSort.h"

using namespace std;

int Q19() {
	int n;

	cout << "힙 정렬 \n";
	cout << "요솟수 : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	int max = arr[0];
	int min = arr[0];
	for (int i = 1; i < n; ++i) {
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}

	cout << max;

	FSort::fSort(arr, n, max);

	cout << "오름차순으로 정렬 했습니다.\n";
	FSort::printArr(arr, n);


	return 0;
}
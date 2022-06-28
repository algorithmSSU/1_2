#include "ShellSort.h"

using namespace std;

int shellSort1(void) {
	int n;

	cout << "셀 정렬 ver1\n";
	cout << "요솟수 : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	ShellSort::shellSortVer1(arr, n);

	cout << "오름차순으로 정렬 했습니다.\n";
	ShellSort::printArr(arr, n);


	return 0;
}

int shellSort2(void) {
	int n;

	cout << "셀 정렬 ver2\n";
	cout << "요솟수 : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	ShellSort::shellSortVer2(arr, n);

	cout << "오름차순으로 정렬 했습니다.\n";
	ShellSort::printArr(arr, n);


	return 0;
}
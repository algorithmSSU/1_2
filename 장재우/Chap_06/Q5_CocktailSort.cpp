#include "BubbleSort.h"

using namespace std;

int Q5() {
	int n;

	cout << "����Ŀ ����\n";
	cout << "��ڼ� : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	BubbleSort::shakerSort(arr, n);
	BubbleSort::printArr(arr, n);

	return 0;
}
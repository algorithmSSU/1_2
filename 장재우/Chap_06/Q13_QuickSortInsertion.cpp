#include "QuickSort.h"

using namespace std;

int Q13() {
	int n;

	cout << "������ (&��������)\n";
	cout << "��ڼ� : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	QuickSort::quickSortWithInsertion(arr, 0, n - 1);

	cout << "������������ ���� �߽��ϴ�.\n";
	QuickSort::printArr(arr, n);


	return 0;
}
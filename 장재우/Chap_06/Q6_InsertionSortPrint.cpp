#include "SelectionSort.h"

using namespace std;

int Q6() {
	int n;

	cout << "���� ����(��)\n";
	cout << "��ڼ� : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	SelctionSort::selectionSortPrint(arr, n);

	return 0;
}
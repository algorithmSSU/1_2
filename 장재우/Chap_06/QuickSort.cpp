#include "QuickSort.h"

using namespace std;

int quickSort() {
	int n;

	cout << "�� ����\n";
	cout << "��ڼ� : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	QuickSort::quickSort(arr, n);

	cout << "������������ ���� �߽��ϴ�.\n";
	QuickSort::printArr(arr, n);

	return 0;
}
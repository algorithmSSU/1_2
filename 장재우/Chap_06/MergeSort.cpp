#include "MergeSort.h"

using namespace std;

int mergeSort() {
	int n;

	cout << "�պ� ����\n";
	cout << "��ڼ� : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	MergeSort::mergeSort(arr, n);

	cout << "������������ ���� �߽��ϴ�.\n";
	MergeSort::printArr(arr, n);


	return 0;
}
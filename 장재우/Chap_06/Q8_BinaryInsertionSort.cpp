#include "InsertionSort.h"

using namespace std;

int Q8() {
	int n;

	cout << "���� ����(����Ž��)\n";
	cout << "��ڼ� : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	InsertionSort::binaryInsertionSort(arr, n);

	cout << "������������ ���� �߽��ϴ�.\n";
	InsertionSort::printArr(arr, n);


	return 0;

}
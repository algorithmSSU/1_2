#include "HeapSort.h"

using namespace std;

int heapSort() {
	int n;

	cout << "�� ���� \n";
	cout << "��ڼ� : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	HeapSort::heapSort(arr, n);

	cout << "������������ ���� �߽��ϴ�.\n";
	HeapSort::printArr(arr, n);


	return 0;

}
#include "InsertionSort.h"

using namespace std;

int Q7() {
	int n;

	cout << "���� ����(���ʹ�)\n";
	cout << "��ڼ� : ";
	cin >> n;

	int* arr = new int[n + 1];

	for (int i = 1; i < n + 1; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	InsertionSort::insertionSortSentinel(arr, n + 1);

	cout << "������������ ���� �߽��ϴ�.\n";
	InsertionSort::printArr(&(arr[1]), n);

	return 0;

}
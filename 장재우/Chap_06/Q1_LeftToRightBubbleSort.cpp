#include "BubbleSort.h"

using namespace std;

int Q1() {
	int n;

	cout << "�������� (����1)\n";
	cout << "��ڼ� : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	BubbleSort::bubbleSortLR(arr, n);

	cout << "������������ ���� �߽��ϴ�.\n";
	BubbleSort::printArr(arr, n);

	return 0;
}
#include "BubbleSort.h"

using namespace std;

int bubbleSort1() {
	int n;

	cout << "�������� (����1 Left To Right)\n";
	cout << "��ڼ� : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	BubbleSort::bubbleSortVer1(arr, n);

	cout << "������������ ���� �߽��ϴ�.\n";
	BubbleSort::printArr(arr, n);

	return 0;
}
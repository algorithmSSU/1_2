#include "FSort.h"

using namespace std;

int fSort() {
	int n;

	cout << "�� ���� \n";
	cout << "��ڼ� : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	int max = arr[0];

	for (int i = 1; i < n; ++i)
		if (arr[i] > max) max = arr[i];

	cout << max;

	FSort::fSort(arr, n, max);

	cout << "������������ ���� �߽��ϴ�.\n";
	FSort::printArr(arr, n);


	return 0;
}
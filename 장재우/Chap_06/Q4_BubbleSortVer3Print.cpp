#include "BubbleSort.h"

using namespace std;

int Q4() {
	int n;

	cout << "�������� (����3, detail)\n";
	cout << "��ڼ� : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	BubbleSort::bubbleSortVer3Detail(arr, n);

	return 0;
}
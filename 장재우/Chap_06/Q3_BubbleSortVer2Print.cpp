#include "BubbleSort.h"

using namespace std;

int Q3() {
	int n;

	cout << "�������� (����2, detail)\n";
	cout << "��ڼ� : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	BubbleSort::bubbleSortVer2Detail(arr, n);

	return 0;
}
#include "ShellSort.h"

using namespace std;

int shellSort1(void) {
	int n;

	cout << "�� ���� ver1\n";
	cout << "��ڼ� : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	ShellSort::shellSortVer1(arr, n);

	cout << "������������ ���� �߽��ϴ�.\n";
	ShellSort::printArr(arr, n);


	return 0;
}

int shellSort2(void) {
	int n;

	cout << "�� ���� ver2\n";
	cout << "��ڼ� : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	ShellSort::shellSortVer2(arr, n);

	cout << "������������ ���� �߽��ϴ�.\n";
	ShellSort::printArr(arr, n);


	return 0;
}
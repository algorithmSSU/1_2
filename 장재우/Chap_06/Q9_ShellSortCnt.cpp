#include "ShellSort.h"

using namespace std;

int Q9(void) {
	int n;

	cout << "�� ���� (cnt)\n";
	cout << "��ڼ� : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}
	int cnt = ShellSort::shellSortVer1(arr, n);

	cout << "������������ ���� �߽��ϴ�.\n";
	ShellSort::printArr(arr, n);

	cout << "�̵��� Ƚ�� : " << cnt << "\n";

	return 0;
}
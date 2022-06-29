#include "ShellSort.h"

using namespace std;

int Q9(void) {
	int n;

	cout << "셀 정렬 (cnt)\n";
	cout << "요솟수 : ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}
	int cnt = ShellSort::shellSortVer1(arr, n);

	cout << "오름차순으로 정렬 했습니다.\n";
	ShellSort::printArr(arr, n);

	cout << "이동한 횟수 : " << cnt << "\n";

	return 0;
}
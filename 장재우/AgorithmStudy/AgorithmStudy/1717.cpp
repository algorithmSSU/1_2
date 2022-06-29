#include <iostream>

using namespace std;

int problem1717(void) {
	int m, n;

	cin >> m >> n;

	int** arr = new int* [n];
	for (int i = 0; i < n; ++i) {
		arr[i] = new int[n];
		memset(arr[i], -1, n);
		arr[i][0] = i;
	}

	for (int i = 0; i < n; ++i)
		delete[] arr[i];
	delete[] arr;

	return 0;
}

void union_set(int* a, int* b, int n) {
	int* arr = new int[n];
	int* pa = &a[0];
	int* pb = &b[0];

	int idx = 0;
	while (*pa != -1 && *pb != -1) {
		if (*pa < *pb) {
			arr[idx++] = *pa;
			++pa;
		}
		else if (*pb < *pa) {
			arr[idx++] = *pb;
			++pb;
		}
		else {
			arr[idx++] = *pa;
			++pa;
			++pb;
		}
	}
	while (*pa != -1) {
		arr[idx++] = *pa;
		++pa;
	}

	while (*pb != -1) {
		arr[idx++] = *pb;
		++pb;
	}
	
	memcpy(a, arr, idx);
	memcpy(b, arr, idx);
	
	delete[] arr;
}

bool isIn(int* arr, int a, int b) {


}
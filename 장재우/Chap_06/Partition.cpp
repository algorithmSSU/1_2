#include "QuickSort.h"

using namespace std;

int partition() {
	int n = 0;
	cout << "¹è¿­À» ³ª´¯´Ï´Ù.\n";
	cout << "¿ä¼Ú¼ö : ";
	
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; ++i) {
		cout << "arr[" << i << "] : ";
		cin >> arr[i];
	}

	QuickSort::partition(arr, n);
	
	delete[] arr;

	return 0;
}
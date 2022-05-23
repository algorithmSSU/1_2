#include <iostream>

using namespace std;

int searchIdx(int* a, int n, int key, int* idx);

int Q3(void) {
	int num;
	int key;
	int count;
	cin >> num;

	int* arr = new int[num];
	int* idx = new int[num];

	for (int i = 0; i < num; ++i)
		cin >> arr[i];

	cin >> key;

	count = searchIdx(arr, num, key, idx);

	for (int i = 0; i < count; ++i)
		cout << idx[i];

	return 0;
}

int searchIdx(int* a, int n, int key, int* idx) {
	int count = 0;

	for (int i = 0; i < n; ++i)
		if (a[i] == key)
			idx[count++] = i;

	return count;
}
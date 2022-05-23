#include <iostream>

using namespace std;

int maxOf(int* a, int len);

int maxOfArray(void) {
	int num;

	cout << "키의 최대값을 구합니다.\n";
	cout << "사람 수 : ";
	cin >> num;

	int* hight = (int*)malloc(num * sizeof(int));

	for (int i = 0; i < num; ++i) {
		cout << "hight[" << i << "] : ";
		cin >> hight[i];
	}

	cout << "최대값은 " << maxOf(hight, num) << "입니다.\n";

	if (hight != NULL) {
		free(hight);
		hight = NULL;
	}

	return 0;
}

int maxOf(int* a, int len) {
	int max = a[0];

	for (int i = 1; i < len; ++i)
		if (a[i] > max)
			max = a[i];

	return max;
}
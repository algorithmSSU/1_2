#include <iostream>

using namespace std;

int sumOf(int* a, int len);

int Q3(void) {

	int num;
	srand(time(NULL));
	num = rand() % 10;

	cout << "배열의 모든 요소의 합을 구합니다.\n";
	cout << "배열의 크기 : " << num << "\n";

	int* arr = (int*)malloc(num * sizeof(int));

	cout << "배열의 값은 아래와 같습니다.\n";
	for (int i = 0; i < num; ++i) {
		arr[i] = rand() % 100;
		cout << "arr[" << i << "] : " << arr[i] << "\n";
	}

	cout << "배열의 모든 요소의 합은 " << sumOf(arr, num) << "입니다.\n";

	if (arr != NULL) {
		free(arr);
		arr = NULL;
	}

	return 0;
}

int sumOf(int* a, int len) {
	int sum = 0;
	for (int i = 0; i < len; ++i)
		sum += a[i];

	return sum;
}
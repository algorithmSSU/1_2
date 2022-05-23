#include <iostream>

using namespace std;

extern void printArr(int* arr, int len);

void myCopyReverse(int* a, int* b, int len);

int Q5(void) {
	int num;
	srand(time(NULL));
	num = rand() % 10;

	cout << "배열의 모든 요소의 합을 구합니다.\n";
	cout << "배열의 크기 : " << num << "\n";

	int* arr1 = (int*)malloc(num * sizeof(int));
	int* arr2 = (int*)malloc(num * sizeof(int));

	for (int i = 0; i < num; ++i)
		arr2[i] = rand() % 100;

	cout << "arr2의 값은 아래와 같습니다.\n";
	printArr(arr2, num);

	myCopyReverse(arr1, arr2, num);

	cout << "arr2의 모든 요소가 역순으로 arr1으로 복사 되었습니다.\n";

	cout << "arr1 : \n";
	printArr(arr1, num);
	cout << "arr2 : \n";
	printArr(arr2, num);


	if (arr1 != NULL) {
		free(arr1);
		arr1 = NULL;
	}

	if (arr2 != NULL) {
		free(arr2);
		arr2 = NULL;
	}

	return 0;
}

void myCopyReverse(int* a, int* b, int len) {
	for (int i = 0; i < len; ++i)
		a[i] = b[len - i - 1];
}
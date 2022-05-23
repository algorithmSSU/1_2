#include <iostream>

using namespace std;

extern void printArr(int* arr, int len);

void myCopyReverse(int* a, int* b, int len);

int Q5(void) {
	int num;
	srand(time(NULL));
	num = rand() % 10;

	cout << "�迭�� ��� ����� ���� ���մϴ�.\n";
	cout << "�迭�� ũ�� : " << num << "\n";

	int* arr1 = (int*)malloc(num * sizeof(int));
	int* arr2 = (int*)malloc(num * sizeof(int));

	for (int i = 0; i < num; ++i)
		arr2[i] = rand() % 100;

	cout << "arr2�� ���� �Ʒ��� �����ϴ�.\n";
	printArr(arr2, num);

	myCopyReverse(arr1, arr2, num);

	cout << "arr2�� ��� ��Ұ� �������� arr1���� ���� �Ǿ����ϴ�.\n";

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
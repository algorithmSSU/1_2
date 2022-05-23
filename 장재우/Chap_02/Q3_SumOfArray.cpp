#include <iostream>

using namespace std;

int sumOf(int* a, int len);

int Q3(void) {

	int num;
	srand(time(NULL));
	num = rand() % 10;

	cout << "�迭�� ��� ����� ���� ���մϴ�.\n";
	cout << "�迭�� ũ�� : " << num << "\n";

	int* arr = (int*)malloc(num * sizeof(int));

	cout << "�迭�� ���� �Ʒ��� �����ϴ�.\n";
	for (int i = 0; i < num; ++i) {
		arr[i] = rand() % 100;
		cout << "arr[" << i << "] : " << arr[i] << "\n";
	}

	cout << "�迭�� ��� ����� ���� " << sumOf(arr, num) << "�Դϴ�.\n";

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
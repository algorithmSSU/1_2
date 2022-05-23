#include <iostream>

using namespace std;

int maxOf(int* a, int len);

int maxOfArray(void) {
	int num;

	cout << "Ű�� �ִ밪�� ���մϴ�.\n";
	cout << "��� �� : ";
	cin >> num;

	int* hight = (int*)malloc(num * sizeof(int));

	for (int i = 0; i < num; ++i) {
		cout << "hight[" << i << "] : ";
		cin >> hight[i];
	}

	cout << "�ִ밪�� " << maxOf(hight, num) << "�Դϴ�.\n";

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
#include <iostream>

using namespace std;

extern int maxOf(int* in, int len);

int Q1(void) {
	int num;
	srand(time(NULL));
	num = rand() % 10;

	cout << "Ű�� �ִ밪�� ���մϴ�.\n";
	cout << "��� �� : " << num << "\n";

	int* hight = (int*)malloc(num * sizeof(int));

	cout << "Ű ���� �Ʒ��� �����ϴ�.\n";
	for (int i = 0; i < num; ++i) {
		hight[i] = 100 + rand() % 90;
		cout << "hight[" << i << "] : " << hight[i] << "\n";
	}

	cout << "�ִ밪�� " << maxOf(hight, num) << "�Դϴ�.\n";

	if (hight != NULL) {
		free(hight);
		hight = NULL;
	}

	return 0;
}
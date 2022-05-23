#include <iostream>

using namespace std;

extern void swap(int& a, int& b);
void reverseDetail(int* a, int len);
void printArr(int* a, int len);

int Q2(void) {
	int num;
	cout << "��ڼ� : ";
	cin >> num;

	int* x = (int*)malloc(num * sizeof(int));

	for (int i = 0; i < num; ++i)
		cin >> x[i];
	
	reverseDetail(x, num);

	if (x != NULL) {
		free(x);
		x = NULL;
	}

	return 0;
}

void reverseDetail (int* a, int len) {
	for (int i = 0; i < len / 2; ++i) {
		swap(a[i], a[len - i - 1]);
		cout << "a[" << i << "]��(��) a[" << len - i - 1 << "]�� ��ȯ�մϴ�.\n";
		printArr(a, len);
	}
	cout << "���� ������ ���ƽ��ϴ�.\n";
}

void printArr(int* a, int len) {
	for (int i = 0; i < len; ++i)
		cout << a[i] << " ";
	cout << "\n";
}
#include <iostream>

using namespace std;

void swap(int& a, int& b);
void myReverse(int* a, int len);

int reverseArray(void) {
	int num;
	cout << "��ڼ� : ";
	cin >> num;

	int* x = (int*)malloc(num * sizeof(int));

	for (int i = 0; i < num; ++i) {
		cout << "x[" << i << "] : ";
		cin >> x[i];
	}

	myReverse(x, num);

	cout << "��Ҹ� �������� �����߽��ϴ�.\n";
	for (int i = 0; i < num; ++i)
		cout << "x[" << i << "] = " << x[i] << "\n";

	if (x != NULL) {
		free(x);
		x = NULL;
	}

	return 0;
}

void swap(int& a, int& b) {
	if (a != b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
}

void myReverse(int* a, int len) {
	for (int i = 0; i < len / 2; ++i)
		swap(a[i], a[len - i - 1]);
}
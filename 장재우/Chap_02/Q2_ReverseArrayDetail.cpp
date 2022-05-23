#include <iostream>

using namespace std;

extern void swap(int& a, int& b);
void reverseDetail(int* a, int len);
void printArr(int* a, int len);

int Q2(void) {
	int num;
	cout << "요솟수 : ";
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
		cout << "a[" << i << "]과(와) a[" << len - i - 1 << "]를 교환합니다.\n";
		printArr(a, len);
	}
	cout << "역순 정렬을 마쳤습니다.\n";
}

void printArr(int* a, int len) {
	for (int i = 0; i < len; ++i)
		cout << a[i] << " ";
	cout << "\n";
}
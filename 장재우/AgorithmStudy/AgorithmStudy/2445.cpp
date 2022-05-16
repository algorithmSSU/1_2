#include <iostream>

using namespace std;

void printRight(int n, int x);
void printLeft(int n, int x);

int problem2445(void) {
	int n;

	cin >> n;

	// ��ܺ� ���
	for (int i = 1; i <= n; ++i) {
		printLeft(n, i);
		printRight(n, i);
		cout << "\n";
	}

	// �ϴܺ� ���
	for (int i = n - 1; i > 0; --i) {
		printLeft(n, i);
		printRight(n, i);
		cout << "\n";
	}

	return 0;
}

void printLeft(int n, int x) {
	int i;
	// '*' x�� ���
	for (i = 0; i < x; ++i)
		cout << '*';

	// ' ' n - x�� ���
	for (; i < n; ++i)
		cout << ' ';

	return;
}

void printRight(int n, int x) {
	int i;
	// ' ' n - x�� ���
	for (i = 0; i < n - x; ++i)
		cout << ' ';

	// '*' x�� ��� 
	for (; i < n; ++i)
		cout << '*';

	return;
}

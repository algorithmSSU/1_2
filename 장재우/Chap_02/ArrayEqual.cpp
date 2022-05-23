#include <iostream>

using namespace std;

bool equal(int* a, int lenA, int* b, int lenB);


int arrayEqual(void) {
	int na, nb;

	cout << "�迭 a�� ��ڼ� : ";
	cin >> na;

	int* a = (int*)malloc(na * sizeof(int));

	for (int i = 0; i < na; ++i) {
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}

	cout << "�迭 b�� ��ڼ� : ";
	cin >> nb;

	int* b = (int*)malloc(na * sizeof(int));

	for (int i = 0; i < nb; ++i) {
		cout << "b[" << i << "] : ";
		cin >> b[i];
	}

	cout << "�迭 a�� b�� " << (equal(a, na, b, nb) ? "�����ϴ�." : "���� �ʽ��ϴ�.") << "\n";

	if (a != NULL) {
		free(a);
		a = NULL;
	}

	if (b != NULL) {
		free(b);
		b = NULL;
	}

	return 0;
}

bool equal(int* a, int lenA, int* b, int lenB) {
	if (lenA != lenB)
		return false;

	for (int i = 0; i < lenA; ++i)
		if (a[i] != b[i])
			return false;

	return true;
}
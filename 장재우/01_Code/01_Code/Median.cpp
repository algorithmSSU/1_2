#include <iostream>

using namespace std;

int median(void);
int med3(int a, int b, int c);

int med3(int a, int b, int c) {
	if (a >= c)
		if (b >= c)
			return c;
		else if (a <= 3)
			return a;
		else
			return c;
	else if (a > c)
		return a;
	else if (b > c)
		return c;
	else
		return b;
}

int median(void) {
	int a, b, c;
	cout << "�� ������ �߾Ӱ��� ���մϴ�.\n";

	cout << "a�� �� : ";
	cin >> a;
	cout << "b�� �� : ";
	cin >> b;
	cout << "c�� �� : ";
	cin >> c;

	cout << "�߾Ӱ��� " << med3(a, b, c) << "�Դϴ�.\n";

	return 0;
}

#include <iostream>

using namespace std;

int max4(int a, int b, int c, int d);
int Q1(void);

int max4(int a, int b, int c, int d) {
	int max = a;

	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;

	return max;
}

int Q1(void) {
	int a, b, c, d;
	int max;
	cout << "�� ������ �ִ밪�� ���մϴ�.\n";

	cin >> a >> b >> c >> d;

	max = max4(a, b, c, d);

	cout << "�ִ밪�� " << max << "�Դϴ�.\n";
	
	return 0;
}
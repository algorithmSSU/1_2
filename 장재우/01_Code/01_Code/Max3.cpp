#include <iostream>

using namespace std;

int Max3(void) {
	int a, b, c;
	int max;
	
	cout << "�� ������ �ִ밪�� ���մϴ�.\n";
	cout << "a�� �� : ";
	cin >> a;
	cout << "b�� �� : ";
	cin >> b;
	cout << "a�� �� : ";
	cin >> c;

	max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	cout << "�ִ밪�� " << max << "�Դϴ�.\n";
	
	return 0;
}
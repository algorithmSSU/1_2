#include <iostream>

using namespace std;

int med3_Q5(int a, int b, int c);
int Q5(void);

int Q5(void) {
	int a, b, c;
	cout << "�� ������ �߾Ӱ��� ���մϴ�.\n";

	cout << "a�� �� : ";
	cin >> a;
	cout << "b�� �� : ";
	cin >> b;
	cout << "c�� �� : ";
	cin >> c;

	cout << "�߾Ӱ��� " << med3_Q5(a, b, c) << "�Դϴ�.\n";

	return 0;

	return 0;
}

int med3_Q5(int a, int b, int c) {
	if ((b >= a && c <= a) || (b <= a && c >= a))
		return a;
	else if ((a > b && c < b) || (a < b && c > b))
		return b;
	return c;
}

/*
 * med3_Q5�� med3�� ���� ���������� �� ���� ��Һ񱳸� �䱸�Ѵ�.
 * ��ü������ b >= a �񱳸� ���� a < b���� �ƴ����� �� �� ������,
 * else if������ a < b���θ� �ٽ� �ѹ� Ȯ���ϰ� �ִ�.
 * �� ������ ������ ���� �ߺ������� Ȯ���Ͽ� ��ȿ�����̴�.
 */
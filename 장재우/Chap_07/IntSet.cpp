#include <iostream>
#include "TemplateSet.h"

using namespace std;

int intSet(void) {
	TemplateSet<int> s1(20);
	TemplateSet<int> s2(20);
	TemplateSet<int> s3(20);

	s1.add(10);
	s1.add(15);
	s1.add(20);
	s1.add(25);

	s1.copyTo(s2);
	s2.add(12);
	s2.remove(25);

	s3.copyFrom(s2);

	cout << "s1 = " << s1 << "\n";
	cout << "s2 = " << s2 << "\n";
	cout << "s3 = " << s3 << "\n";

	cout << "���� s1�� 15�� ";
	cout << (s1.contains(15) ? "���Ե˴ϴ�.\n" : "���Ե��� �ʽ��ϴ�.\n");

	cout << "���� s2�� 25�� ";
	cout << (s2.contains(25) ? "���Ե˴ϴ�.\n" : "���Ե��� �ʽ��ϴ�.\n");

	cout << "���� s1�� s2�� ";
	cout << (s1.equalTo(s2) ? "�����ϴ�.\n" : "���� �ʽ��ϴ�.\n");

	cout << "���� s2�� s3�� ";
	cout << (s2.equalTo(s3) ? "�����ϴ�.\n" : "���� �ʽ��ϴ�.\n");

	s3.unionOf(s1, s2);

	cout << "���� s1�� s2�� �������� " << s3 << "�Դϴ�.\n";

	return 0;
}
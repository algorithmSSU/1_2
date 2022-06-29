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

	cout << "집합 s1에 15는 ";
	cout << (s1.contains(15) ? "포함됩니다.\n" : "포함되지 않습니다.\n");

	cout << "집합 s2에 25는 ";
	cout << (s2.contains(25) ? "포함됩니다.\n" : "포함되지 않습니다.\n");

	cout << "집합 s1과 s2는 ";
	cout << (s1.equalTo(s2) ? "같습니다.\n" : "같지 않습니다.\n");

	cout << "집합 s2과 s3는 ";
	cout << (s2.equalTo(s3) ? "같습니다.\n" : "같지 않습니다.\n");

	s3.unionOf(s1, s2);

	cout << "집합 s1과 s2의 합집합은 " << s3 << "입니다.\n";

	return 0;
}
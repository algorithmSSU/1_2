#include <iostream>
#include "BFMatch.h"

using namespace std;

int Q2(void) {
	string txt;
	string pat;

	cout << "�ؽ�Ʈ : ";
	cin >> txt;

	cout << "���� : ";
	cin >> pat;

	int idx = BFMatch::bfMatchLast(txt, pat);

	if (idx == -1)
		cout << "�ؽ�Ʈ�� ������ �����ϴ�.\n";
	else {
		cout << (idx + 1) << "��° ���ں��� ��ġ�մϴ�.\n";
		cout << "�ؽ�Ʈ : " << txt << "\n";
		cout << "����   : ";

		printf("%*s", idx, "");
		cout << pat << "\n";
	}

	return 0;
}
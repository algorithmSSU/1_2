#include <iostream>
#include "BFMatch.h"

using namespace std;

int Q1(void) {
	string txt;
	string pat;

	cout << "�ؽ�Ʈ : ";
	cin >> txt;

	cout << "���� : ";
	cin >> pat;

	int cnt = BFMatch::bfMatchPrint(txt, pat);

	cout << "�񱳴� " << cnt << "ȸ�����ϴ�.\n";

	return 0;
}
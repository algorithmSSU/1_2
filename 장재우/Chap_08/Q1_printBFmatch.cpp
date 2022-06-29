#include <iostream>
#include "BFMatch.h"

using namespace std;

int Q1(void) {
	string txt;
	string pat;

	cout << "텍스트 : ";
	cin >> txt;

	cout << "패턴 : ";
	cin >> pat;

	int cnt = BFMatch::bfMatchPrint(txt, pat);

	cout << "비교는 " << cnt << "회였습니다.\n";

	return 0;
}
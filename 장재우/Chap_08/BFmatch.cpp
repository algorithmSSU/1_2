#include <iostream>
#include "BFMatch.h"

using namespace std;

int bFMatch(void) {
	string txt;
	string pat;

	cout << "텍스트 : ";
	cin >> txt;

	cout << "패턴 : ";
	cin >> pat;

	int idx = BFMatch::bfMatch(txt, pat);

	if (idx == -1)
		cout << "텍스트에 패턴이 없습니다.\n";
	else {
		cout << (idx + 1) << "번째 문자부터 일치합니다.\n";
		cout << "텍스트 : " << txt << "\n";
		cout << "패턴   : ";

		printf("%*s", idx, "");
		cout << pat << "\n";
	}

	return 0;
}
#include <iostream>

using namespace std;

int bmMatch(string txt, string pat) {
	int pt, pp;
	int txtLen = txt.length();
	int patLen = pat.length();

	int* skip = new int[CHAR_MAX + 1];

	for (pt = 0; pt <= CHAR_MAX; ++pt)
		skip[pt] = patLen;
	for (pt = 0; pt < patLen - 1; ++pt)
		skip[pat[pt]] = patLen - pt - 1;

	while (pt < txtLen) {
		pp = patLen - 1;

		while (txt[pt] == pat[pp]) {
			if (pp == 0) {
				delete[] skip;
				return pt;
			}
			--pt;
			--pp;
		}
		pt += (skip[pt] > patLen - pp) ? skip[txt[pt]] : patLen - pp;
	}

	delete[] skip;
	return -1;
}

int bMmatch() {
	string txt;
	string pat;

	cout << "텍스트 : ";
	cin >> txt;

	cout << "패턴 : ";
	cin >> pat;

	int idx = bmMatch(txt, pat);

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
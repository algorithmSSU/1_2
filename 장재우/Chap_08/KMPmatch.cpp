#include <iostream>

using namespace std;

static int kmpMatch(string txt, string pat) {
	int pt = 1;
	int pp = 0;
	int* skip = new int[pat.length() + 1];

	skip[pt] = 0;
	while (pt != pat.length()) {
		if (pat[pt] == pat[pp])
			skip[++pt] = ++pp;
		else if (pp == 0)
			skip[++pt] = pp;
		else
			pp = skip[pp];
	}

	pt = pp = 0;
	while (pt != txt.length() && pp != pat.length()) {
		if (txt[pt] == pat[pp]) {
			++pt;
			++pp;
		}
		else if (pp == 0)
			++pt;
		else
			pp = skip[pp];
	}

	delete[] skip;

	if (pp = pat.length())
		return pt - pp;
	
	return -1;
}

int kMPMatch() {
	string txt;
	string pat;

	cout << "텍스트 : ";
	cin >> txt;

	cout << "패턴 : ";
	cin >> pat;

	int idx = kmpMatch(txt, pat);

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
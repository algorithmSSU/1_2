#include <iostream>

using namespace std;

static int kmpMatchPrint(string txt, string pat) {
	int pt = 1;
	int pp = 0;
	int cnt = 0;

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
		++cnt;
		cout << "  " << txt << "\n";
		printf("  %*s", pt, "");
		if (txt[pt] == pat[pp]) {
			cout << "+\n";
			printf("  %*s", pt - pp, "");

			++pt;
			++pp;
		}
		else if (pp == 0) {
			cout << "|\n";
			printf("  %*s", pt - pp, "");

			++pt;
		}
		else {
			cout << "|\n";
			printf("  %*s", pt - pp, "");
			pp = skip[pp];
		}
		cout << pat << "\n\n";
	}

	delete[] skip;

	if (pp = pat.length())
		return pt - pp;

	return -1;
}

int Q3() {
	string txt;
	string pat;

	cout << "텍스트 : ";
	cin >> txt;

	cout << "패턴 : ";
	cin >> pat;

	int cnt = kmpMatchPrint(txt, pat);

	cout << "비교는 " << cnt << "회였습니다.\n";

	return 0;

}
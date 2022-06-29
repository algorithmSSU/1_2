#pragma once
#include <iostream>

using namespace std;

class BFMatch {
public:
	static int bfMatch(string txt, string pat) {
		int pt = 0;
		int pp = 0;

		while (pt != txt.length() && pp != pat.length()) {
			if (txt[pt] == pat[pp]) {
				++pt;
				++pp;
			}
			else {
				pt = pt - pp + 1;
				pp = 0;
			}
		}

		if (pp == pat.length())
			// case : matched
			return pt - pp;

		// case : fail
		return -1;
	}

	static int bfMatchPrint(string txt, string pat) {
		int pt = 0;
		int pp = 0;
		int cnt = 0;

		while (pt != txt.length() && pp != pat.length()) {
			++cnt;

			if (txt[pt] == pat[pp]) {
				cout << "  " << txt << "\n";
				printf("  %*s", pt, "");
				cout << "+\n";
				printf("  %*s", pt - pp, "");
				cout << pat << "\n";

				++pt;
				++pp;
			}
			else {
				cout << "  " << txt << "\n";
				printf("  %*s", pt, "");
				cout << "|\n";
				printf("  %*s", pt - pp, "");
				cout << pat << "\n";

				pt = pt - pp + 1;
				pp = 0;
			}

			cout << "\n";
		}

		return cnt;
	}

	static int bfMatchLast(string txt, string pat) {
		int pt = txt.length() - 1;
		int pp = pat.length() - 1;

		while (pt >= 0 && pp >= 0) {
			if (txt[pt] == pat[pp]) {
				--pt;
				--pp;
			}
			else {
				pt = pt + (pat.length() - 1 - pp) - 1;
				pp = pat.length() - 1;
			}
		}

		if (pp == -1)
			// case : matched
			return pt - pp;

		// case : fail
		return -1;
	}
};

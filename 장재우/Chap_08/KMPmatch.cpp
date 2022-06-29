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

	cout << "�ؽ�Ʈ : ";
	cin >> txt;

	cout << "���� : ";
	cin >> pat;

	int idx = kmpMatch(txt, pat);

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
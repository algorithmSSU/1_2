#include <iostream>
#include <string>
#include <vector>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

using namespace std;

int getLengthOfNum(int n);
int compress(string* s, int n);

int problem60057() {
    string s;
    int answer = 0;

    cin >> s;
    answer = s.length();

    for (int i = 1; i <= s.length(); ++i) {
        int tmp = compress(&s, i);
        if (tmp < answer)
            answer = tmp;
    }

    return answer;
}

int compress(string* str, int n) {
    int comLen = 0;
    int i;

    int len = str->length();

    char* tmp = new char[n + 1];
    char* s = new char[len + 1];
    strcpy(s, str->c_str());

    strncpy(tmp, s, sizeof(char) * n);
    tmp[n] = 0;

    int index = n;
    int cnt = 1;
    while (index <= len) {
        for (i = 0; i < n; ++i) {
            if (tmp[i] != s[index + i])
                break;
        }

        if (i == n)
            ++cnt;
        else {
            comLen += n;
            if (cnt > 1)
                comLen += getLengthOfNum(cnt);

            cnt = 1;

            strncpy(tmp, &s[index], sizeof(char) * n);
            tmp[n] = 0;
        }

        index += n;
    }

    if (cnt > 1)
        comLen += getLengthOfNum(cnt) + n;

    comLen += len - index + n;

    delete[] tmp;
    delete[] s;

    return comLen;
}

int getLengthOfNum(int n) {
    int tmp = 1;
    int len = 0;

    while (n >= tmp) {
        tmp *= 10;
        ++len;
    }

    return len;
}
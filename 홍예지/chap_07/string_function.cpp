#include <iostream>
#include <string.h>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){

    string text;
    string pat_a, pat_b;
    string temp;
    string len;

    long f_idx, e_idx;

    text = "ABCDEFG"; // AB주이지스DEF이지스12 (???)
    pat_a = "DE";
    pat_b = "FG";

    f_idx = text.find(pat_a);
    e_idx = text.find(pat_b);

    cout << f_idx << endl;
    cout << e_idx << endl;

    cout << text << endl;
    cout << setw(f_idx+2) << pat_a << endl;

    cout << text << endl;
    cout << setw(e_idx + 2) << pat_b << endl;
}
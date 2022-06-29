#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int bfmatchlast(string txt, string pat);

int main(){

    string txt = "ABCDYEJIACABDDYEJISSYEJIAPPLELEMONYEJI";
    string pat = "YEJI";

    int index;
    index = bfmatchlast(txt, pat);

    cout << "txt_Length: " << txt.length() << endl;

    cout << "===final index===" << endl;
    cout << index << endl;
};

int bfmatchlast(string txt, string pat){
    int idx_last = txt.rfind(pat);

    return idx_last;
}
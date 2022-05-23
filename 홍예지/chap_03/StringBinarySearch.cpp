#include <iostream>
#include <string.h>
using namespace std;


int main(){
    string keyword;

    cout << "원하는 키워드를 입력하세요.";
    cin >> keyword;

    string list[10] = {"abstract", "assert", "boolean", "break", "byte", "case", "catch", "char", "const", "class"};

    int tag = 0;
    for (int i = 0; i < sizeof(list) / sizeof(string); i++){
        if (keyword==list[i]){
            cout << "해당 키워드는 list[" << i << "]에 있습니다." << endl;
            tag++;
            break;
        }
    };
    if (tag == 0)
    {
        cout << "해당 키워드는 list에 없습니다." << endl;
    }
}
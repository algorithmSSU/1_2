#include <iostream>
#include <string.h>
using namespace std;


int main(){
    string keyword;

    cout << "���ϴ� Ű���带 �Է��ϼ���.";
    cin >> keyword;

    string list[10] = {"abstract", "assert", "boolean", "break", "byte", "case", "catch", "char", "const", "class"};

    int tag = 0;
    for (int i = 0; i < sizeof(list) / sizeof(string); i++){
        if (keyword==list[i]){
            cout << "�ش� Ű����� list[" << i << "]�� �ֽ��ϴ�." << endl;
            tag++;
            break;
        }
    };
    if (tag == 0)
    {
        cout << "�ش� Ű����� list�� �����ϴ�." << endl;
    }
}
#include <iostream>
#include <string.h>
//#include <format>

using namespace std;

int bfmatch(string txt, string pat);




int main(){

    string example, test;
    
    example = "yejihong";
    test = "hong";

    int idx = bfmatch(example, test);

    cout << idx << "��° ���ں��� ��ġ �մϴ�." << endl;

    cout << "�ؽ�Ʈ: " << example << endl;
    cout << "�� �� : " << test << endl;

    cout << "��ġ�ϴ� ���� :";
    for (int i = idx; i < example.length(); i++){
        cout << example[i];
    }

};


int bfmatch(string txt, string pat){
    int pt = 0;
    int pp = 0;

    while(pt!=txt.length() && pp!=pat.length()){
        if(txt.at(pt)==pat.at(pp)){
            pt++;
            pp++;
        }else{ // ���� ������,
            pt = pt-pp + 1; // pt �� ��ĭ ������, 
            pp = 0; // �� ��� Ŀ���� �ٽ� �� ������
        }
    }
    if (pp==pat.length()){ // �� ��� Ŀ���� ������ ���� ����
        return pt - pp;// ��ġ�ϴ� ���� ��ġ �ּ� ����
    }else{
        return -1;
    }
};


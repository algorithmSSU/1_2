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

    cout << idx << "번째 문자부터 일치 합니다." << endl;

    cout << "텍스트: " << example << endl;
    cout << "패 턴 : " << test << endl;

    cout << "일치하는 패턴 :";
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
        }else{ // 같지 않으면,
            pt = pt-pp + 1; // pt 는 한칸 앞으로, 
            pp = 0; // 비교 대상 커서는 다시 맨 앞으로
        }
    }
    if (pp==pat.length()){ // 비교 대상 커서가 끝까지 돌면 종료
        return pt - pp;// 일치하는 시작 위치 주소 리턴
    }else{
        return -1;
    }
};


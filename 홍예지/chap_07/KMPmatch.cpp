#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

void maxlength(string text);
vector<int> max_table(string text);
void KMP(string parent, string pattern);

int main(){
    string parent = "ababacabacaabacaaba";
    string text = "abacaaba";
    vector<int> result;

    //maxlength(text);
    result = max_table(text);

    for (int i = 0; i < result.size(); i++){
        cout << result[i];
    };
    cout << "\n";
    cout << "==========================" << endl;

    cout << "parent: " << parent << endl;
    cout << "pattern: " << text << endl;

    KMP(parent, text);
};


void maxlength(string text){
    int size = text.length();
    int front = 0;
    int next =1;
    int count = 0;
    vector<int> count_list;
    cout << count;
    while(next!=size){
        if(text[front]==text[next]){
            front++;
            next++;
            count++;
            cout << count;
        }else{
            if(front==0){
                next++;
                count = 0;
                cout << count;
            }else{
                front--;
                count = 0;
            }
        }
    }
};

vector<int> max_table(string text)
{
    int front = 0;
    int next = 1;
    int size = text.length();
    vector<int> table(size, 0); // size 만큼 0으로 채워넣음
    table[front] = front;
    while(next!=size){
        if(text[front]==text[next]){
            front++;
            table[next] = front;
            next++;
            
        }else{
            if(front==0){
                next++;
            }else{
                front--;
            }
        }
    };
    return table;
}

void KMP(string parent, string pattern){
    vector<int> table = max_table(pattern);
    int parentsize = parent.size();
    int patternsize = pattern.size();
    int j = 0;
    for (int i = 0; i < parentsize;i++){
        while(j>0 && parent[i]!=pattern[j]){
            j = table[j - 1]; // 일치하지 않았을 때는 바로 이전단계 값으로 이동
        }
        if (parent[i]==pattern[j]){
            if(j==patternsize-1){// pattern을 다돌았을 때
                cout << i - patternsize + 2 << "번째 에서 찾았습니다." << endl;
                // parent에서 몇번째 글자에서 시작하는 위치를 찾았는지

                // i : parent에서 인덱스 주소(패턴끝까지 확인이 된)
                // patternsize : pattern 의 크기
                // 전체 parent 어디서 부터 시작했는지 출력하려면
                // 인덱스 단위가 아니라 n 번째 ! 단위로 취급해야함 그래서 -2해줌

                j = table[j]; // jump할 수 있게 j값 갱신
            }
            else{
                j++; // 그렇지 않은 경우 j를 1증가, 계속해서 매칭 확인
            }
        }
    }
}
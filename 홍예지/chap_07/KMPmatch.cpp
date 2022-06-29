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
    vector<int> table(size, 0); // size ��ŭ 0���� ä������
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
            j = table[j - 1]; // ��ġ���� �ʾ��� ���� �ٷ� �����ܰ� ������ �̵�
        }
        if (parent[i]==pattern[j]){
            if(j==patternsize-1){// pattern�� �ٵ����� ��
                cout << i - patternsize + 2 << "��° ���� ã�ҽ��ϴ�." << endl;
                // parent���� ���° ���ڿ��� �����ϴ� ��ġ�� ã�Ҵ���

                // i : parent���� �ε��� �ּ�(���ϳ����� Ȯ���� ��)
                // patternsize : pattern �� ũ��
                // ��ü parent ��� ���� �����ߴ��� ����Ϸ���
                // �ε��� ������ �ƴ϶� n ��° ! ������ ����ؾ��� �׷��� -2����

                j = table[j]; // jump�� �� �ְ� j�� ����
            }
            else{
                j++; // �׷��� ���� ��� j�� 1����, ����ؼ� ��Ī Ȯ��
            }
        }
    }
}
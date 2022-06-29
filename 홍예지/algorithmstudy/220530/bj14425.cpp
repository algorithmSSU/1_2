#include <iostream>
using namespace std;
#include <vector>
#include <string.h>
#include <set>


int main(){

    vector<string> str;
    vector<string> st;
    set<string> set;
    int a, b;
    string temp;

    cin >> a >> b;

    for (int i = 0; i < b;i++){
        cin >> temp;
        str.push_back(temp);
        if(i<a){
            set.insert(temp);
        };
    };

    int cnt;
    int c;
    for (int j = a-1; j < b;j++){
        temp = str[j];
        cnt = set.count(temp);
        if (cnt!=0){
            cnt = cnt + 1;
        }
    };

    cout << cnt << endl;
}

#include <iostream>
using namespace std;
#include <vector>
#include <set>

int main(){

    set<int>::iterator p,p_;
    vector<int> vec;
    set<int> set;
    int temp,temp_;

    int a, b;
    cin >> a >> b;

    int **arr = new int *[8]; //행의 크기가 3인 이차원 배열

    for (int i = 0; i < 3; i++){
        arr[i] = new int[3]; //각각의 행에 길이가 4인 배열을 할당
    };

    for (int j = 0; j < b;j++){
        for (int i = 0; i < 3;i++){
            cin >> arr[j][i];
        };
    };

    for (int i = 0; i < b;i++){
        if(arr[i][0]==0){ // 0 idx ==0 이면 합집합임
            set.insert(arr[i][1]);// 1 idx -> set에 담고
            set.insert(arr[i][2]);// 2 idx -> set에 담고
            //cout << "debug" << endl;
        }else{
            if(arr[i][0]==1){ // 1 idx==1 이면 집합에 포함되어 있는지 확인하는 연산
                temp = arr[i][1];
                temp_ = arr[i][2];
                p=set.find(temp);
                p_ = set.find(temp_);
                if (temp == *p&& temp_==*p_){
                    cout << "YES" << endl;
                }else{
                    cout << "NO" << endl;
                };
            };
        };
    };
};

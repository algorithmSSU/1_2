#include <iostream>
using namespace std;
#include <vector>
#include <set>
//#include <format>

int main(){

    // set<int> s;
    // set<int>::iterator p;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);

    // int temp;
    // temp = 1;
    // p = s.find(temp);
    // if (p != s.end()){
    //     cout << "찾는 값 없어요!" << endl;
    // };


    int a, b;
    cin >> a >> b;
    int **arr = new int *[b]; //행의 크기가 3인 이차원 배열

    for (int i = 0; i < 3; i++)
    {
        arr[i] = new int[3]; //각각의 행에 길이가 4인 배열을 할당
    };

    for (int j = 0; j < b; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[j][i];
        };
        //cout << arr[j][1] << endl;
    };

    cout << "===출력===" << endl;

    for (int j = 0; j < b; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << arr[j][i];
        };
    };
}
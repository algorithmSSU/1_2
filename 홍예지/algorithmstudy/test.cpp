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
    //     cout << "ã�� �� �����!" << endl;
    // };


    int a, b;
    cin >> a >> b;
    int **arr = new int *[b]; //���� ũ�Ⱑ 3�� ������ �迭

    for (int i = 0; i < 3; i++)
    {
        arr[i] = new int[3]; //������ �࿡ ���̰� 4�� �迭�� �Ҵ�
    };

    for (int j = 0; j < b; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[j][i];
        };
        //cout << arr[j][1] << endl;
    };

    cout << "===���===" << endl;

    for (int j = 0; j < b; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << arr[j][i];
        };
    };
}
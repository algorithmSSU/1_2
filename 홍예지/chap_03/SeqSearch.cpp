#include <iostream>
using namespace std;

int main(){

    int num;
    int find;

    cout << "��ڼ�: ";
    cin >> num;

    int* arr = new int[num];

    for (int i = 0; i < num;i++){
        cout << "x[" << i << "]: ";
        cin >> arr[i];
    };

    cout << "�˻��� ��: ";
    cin >> find;

    
    for (int j = 0; j < _msize(arr) / sizeof(int);j++){
        if (arr[j]==find){
            cout << "�� ���� x[" << j << "]�� �ֽ��ϴ�." << endl;
        };
    };
}
